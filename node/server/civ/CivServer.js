"use strict";
var net = require('net');
var bufferPack = require('bufferpack');

var MAX_LEN_PACKET = 48;
var VERSION = "+Freeciv.Web.Devel-2.5-2013.May.02";  // Must be kept in sync with Freeciv server.
var VER_INFO = "-dev";
var TCPClient = new net.Socket();
var ws;
var host = "";
var port = 0;
var buffer = new Buffer(1024, 'binary');


function CivServer(ws, host, port, loginPacket) {

        this.ws = ws;
        this.host = host;
        this.port = port;

        TCPClient.connect(this.port, this.host, function() {
            console.log('CONNECTED TO: ' + this.host + ':' + this.port);
        });

        TCPClient.on('data', function(data) {
            this.checkReceivePacket(data);

            console.log('DATA: ' + data);
        });

        TCPClient.on('close', function() {
            console.log('Connection closed');
        });

        this.sendToCivServer(loginPacket);
}


CivServer.prototype.sendToCivServer = function(JSONPacket){
        console.log("JSON Packet", JSONPacket);
        var header = bufferPack.pack('>HH', JSONPacket.length, 0);
        TCPClient.write(header + JSONPacket.toString + 0x00);
        console.log("packet send to civServer", header + JSONPacket.toString + 0x00);
};


CivServer.prototype.getCivServerInstance = function(username, civServerPort, ws){

};

CivServer.prototype.checkReceivePacket = function(data){
          buffer.write(data);
          if(buffer.length >= MAX_LEN_PACKET){
              var packet = buffer.toString('utf8', 0, MAX_LEN_PACKET - 1);
              buffer = buffer.slice(0, MAX_LEN_PACKET -1);
              this.ws.send(packet);
          }
};

module.exports = CivServer;