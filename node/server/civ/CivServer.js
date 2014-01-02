"use strict";
var net = require('net');

var MAX_LEN_PACKET = 48;
var VERSION = "+Freeciv.Web.Devel-2.5-2013.May.02";  // Must be kept in sync with Freeciv server.
var VER_INFO = "-dev";
var TCPClient = new net.Socket();
var ws;
var host = "";
var port = 0;
var modulo;

function CivServer(ws, host, port, loginPacket) {

    this.modulo = new Buffer(0);
    this.ws = ws;
    this.host = host;
    this.port = port;
    var that = this;
    TCPClient.connect(this.port, this.host, function () {
        console.log('CONNECTED TO: ' + that.host + ':' + that.port);
    });

    TCPClient.on('data', function (data) {
        that.dataSocketHandler(data);
    });

    TCPClient.on('end', function () {
        console.log('there will be no more data.');
    });

    TCPClient.on('close', function () {
        console.log('Connection closed');
    });
}

/**
 * @method socket data event Handler
 * @param {Buffer} brut data from socket
 */
CivServer.prototype.dataSocketHandler = function (data) {
    this.rowToPacket(data);
};
/**
 * @method format en send packet to freeciv server
 * @param {String} JSONPacket
 */
CivServer.prototype.sendToCivServer = function (JSONPacket) {
    var header = new Buffer(4);
    header.writeUInt16BE(JSONPacket.length, 0);
    header.writeUInt16BE(0, 2);
    var body = new Buffer(JSONPacket, 'utf-8');
    var endChar = new Buffer(1);
    endChar[0] = 0x00;
    var packet = Buffer.concat([header, body, endChar]);
    TCPClient.write(packet);
};

CivServer.prototype.getCivServerInstance = function (username, civServerPort, ws) {

};

/**
 * @method decode freeciv packet from server to object
 * @param {Buffer} data socket
 */
CivServer.prototype.rowToPacket = function (d) {
    var that = this;
    var data = Buffer.concat([this.modulo, d]);
    decodeToJsonArray(data, function (err, res, modulo) {
        that.ws.send(JSON.stringify(res));
        that.modulo = modulo;
    });
};

/**
 * @method convert string to Array of Object
 * @param {String} data
 * @param {Function} callback [err, result, modulo]
 */
function decodeToJsonArray(data, cb) {
    var result = [];
    while (data.length > 1) {
        var packetLength = data.readUInt16BE(0);
        var packet = data.slice(4, packetLength - 1);
        if (packetLength <= data.length) {
            result.push(JSON.parse(packet.toString()));
            data = data.slice(packetLength);
        } else {
            break;
        }
    }
    cb(null, result, data);


}
module.exports = CivServer;