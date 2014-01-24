"use strict";
var sha1 = require('sha1'),
  _ = require('underscore');
var playerdb = require('../database/players'),
  error = require("../database/sqlError");

/**
 * @method register a new user
 * @param player playerObject
 * @param cb callback [err, ok]
 */
module.exports.savePlayer = function (player, cb) {
  player.password = sha1(player.password); // hash password before storage to database
  playerdb.savePlayer(player, function (err, ok) {
    if (err) {
      error.checkError(err.clientError.toString(), function (res) {
        return cb(res, null);
      });
    }
    cb(null, ok);
  });
};

/**
 * @method authenticate user
 * @param {String} login user login
 * @param {String} user password
 * @param {Function} : callback [err, playerObject]
 */
module.exports.authenticateUser = function (login, password, cb) {
  playerdb.getPlayerByUsername(login, function (err, player) {
    if (err) {
      return cb(err);
    }
    if (sha1(password) === player.password) {
      return cb(null, player);
    }
    return cb("auth_err");
  });
};