"use strict";
/**
 * @class singleton : Manage freeciv-server instance
 */

var instance,
    portMin,
    portMax,
    dataManager;
/**
 *
 * @param {Number} portMin
 * @param {Number} portMax
 * @constructor
 */
function ServerManager(portMin, portMax) {
    this.portMin = portMin;
    this.portMax = portMax;
    this.dataManager = [];
    this.dataManager.length = this.portMax - this.portMin;
}

/**
 * @method request new serveur instance
 * @param {String}username
 * @param {Function} Callback [err, CivServerObject]
 */
ServerManager.prototype.LaunchNewServer = function (username, cb) {
    startServer(this, username, function (err, res) {

    });
};

module.exports.getInstance = function (cb) {
    if (instance === undefined) {
        instance = new ServerManager(10000, 11000);
    }
    cb(null, instance);
};

function startServer(that, username, cb) {
    getFreePort(that, function (err, port) {
        if (err) {
            return cb(err);
        }
        launchServerProc(port, function (err, pid) {
            if (err) {
                return cb(err);
            }
            var server = {
                username: username,
                pid: pid
            };
            that.dataManager[port - that.portMin ] = server;
            cb(null, port);
        });
    });
}

function getFreePort(that, cb) {
    var l = that.dataManager.length;
    for( var i= 0; i < l; i++ ){
        if(typeof that.dataManager[i] !== "object" ){
          cb(null, that.portMin + i);
        }
    }
    cb("datamanager full");
}