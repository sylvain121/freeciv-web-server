"use strict";
/**
 * @class singleton : Manage freeciv-server instance
 */
var controller = require("./CivServerController.js");
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
 * @method return the manager instance
 * @param {Function} cb return [err, managerInstance]
 */
module.exports.getInstance = function (cb) {
    if (this.instance === undefined) {
        this.instance = new ServerManager(10000, 11000);
    }
    cb(null, this.instance);
};

/**
 * @method create a new server
 * @param {Object} user object
 * @param {Function} cb [err, port]
 */
module.exports.createServer = function (user, cb) {
    this.instance.getFreeResource(user.username, function (err, port) {
        if (err) {
            return cb(err);
        }
        this.instance.startNewServer(port, function (err, ok) {
            if (err) {
                return cb(err);
            }
            cb(null, port);
        });
    });

};
/**
 * @method : get a free port from the datamanager
 * @param {String} username
 * @param {Function} cb [err, port]
 */
ServerManager.prototype.getFreeResource = function (username, cb) {
    for (var i = 0; i < this.dataManager.length; i++) {
        if (this.dataManager[i] === null) {
            this.dataManager[i] = {
                "username": username
            };
            cb(null, this.dataManager[i] + this.portMin);
        }
    }
    cb("dataManager full");
};

ServerManager.prototype.startNewServer = function (port, cb) {
    var serverControl = new controller(port);
    updateDataManagerByport(serverControl, port, function (err, res) {
        if (err) {
            return cb(err);
        }
        cb(null, res);
    });
};

