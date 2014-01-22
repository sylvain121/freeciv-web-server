"use strict";

var CivServerController = require("./CivServerController.js");
var instance,
  portMin = 10000,
  portMax = 10010,
  dataManager = [];

dataManager.length = portMax - portMin;

/**
 * @method create new server instance
 * @param {String} username
 * @param {String} title - party title
 * @param {Function} cb callback [err, party]
 */
module.exports.createNewServer = function (username, title, cb) {
  getFreePort(function (err, port) {
    if (err) { return cb(err);}
    var server = new CivServerController(port);
    var pid = server.getPid();

    var party = {
      "title"   : title,
      "username": username,
      "server"  : server,
      "pid"     : pid,
      "port"    : port
    };

    dataManager[port - portMin] = party;
    cb(null, party);

  });
};

/**
 * @method remove a server instance with is TCP port
 * @param {Number} port
 * @param {Function} cb callback [err, {Number} pid]
 */
module.exports.removeServerWithPort = function (port, cb) {
  getPartyAt(port - portMin, function (err, party) {
    if (err) {return cb(err);}
    party.server.kill();
    dataManager[port - portMin] = undefined;
    cb(null, party.pid);
  });
};

/**
 * @method return a free port from datamanager
 * @param {Function} cb callback [err, {Number} port]
 */
function getFreePort(cb) {
  for (var i = 0; i < dataManager.length; i++) {
    if (dataManager[i] === undefined) {
      dataManager[i] = "res";
      return cb(null, i + portMin);
    }
  }
  cb("datamanager full");
}

/**
 * @method return party object from datamanager
 * @param {Number} position
 * @param {Function} cb callback [err, {Object} party]
 */
function getPartyAt(position, cb) {
  cb(null, dataManager[position]);
}