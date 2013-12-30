"use strict";
var net = require('net');

var MAX_LEN_PACKET = 48;
var VERSION = "+Freeciv.Web.Devel-2.5-2013.May.02";  // Must be kept in sync with Freeciv server.
var VER_INFO = "-dev";
var TCPClient = new net.Socket();
var ws;
var host = "";
var port = 0;
var buffer = "";

function CivServer(ws, host, port, loginPacket) {

  this.ws = ws;
  this.host = host;
  this.port = port;

  TCPClient.connect(this.port, this.host, function () {
    console.log('CONNECTED TO: ' + this.host + ':' + this.port);
  });

  TCPClient.on('data', function (data) {
    console.log(data.toString("utf8").split("\0\0"));

  });

  TCPClient.on('end', function() {

    console.log('there will be no more data.');
  });

  TCPClient.on('close', function () {
    console.log('Connection closed');
  });

  this.sendToCivServer(loginPacket);
}

/**
 * b'\x00\xa8\x00\x00{"type":4,"username":"test","capability":"+Freeciv.Web.Devel-2.6-2013.May.25","version_label":"-dev","major_version":2,"minor_version":4,"patch_version":99,"port":5556}\x00'
 * b'\x00\x0b\x00\x00{"type":89}\x00'
 * lenght 168
 */
CivServer.prototype.sendToCivServer = function (JSONPacket) {
  var header = new Buffer(4);
  header[0] = 0;
  header[1] = parseInt(JSONPacket.length, 10);
  header[2] = 0;
  header[3] = 0;

  var body = new Buffer(JSONPacket, 'utf-8');
  var endChar = new Buffer(1);
  endChar[0] = 0x00;
  //console.log(header);
  var packet = Buffer.concat([header, body, endChar]);
  TCPClient.write(packet);
  //console.log("sending packet : ", packet);
};

CivServer.prototype.getCivServerInstance = function (username, civServerPort, ws) {

};

CivServer.prototype.checkReceivePacket = function (data) {
  buffer.write(data);
  console.log("receive packet", data);
  if (buffer.length >= MAX_LEN_PACKET) {
    var packet = buffer.toString('utf8', 0, MAX_LEN_PACKET - 1);
    buffer = buffer.slice(0, MAX_LEN_PACKET - 1);
    this.ws.send(packet);
  }
};

module.exports = CivServer;