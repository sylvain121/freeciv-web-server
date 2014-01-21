"use strict";
var currentGames = require("../database/currentGames"),
  serverManager = require("../civ/ServerManager");

/**
 * @method start new game intance and register it into database
 * @param player
 * @param cb
 */
module.exports.startNewGameforPlayer = function (player, cb) {
  serverManager.createNewServer(player.username, function (err, party) {
    if (err) {
      return cb(err);
    }
    var game = {
      player_id: player.id,
      port     : party.port,
      pid      : party.pid
    };
    currentGames.addNewGame(game, function (err, ok) {
      if (err) { return cb(err);}
      cb(null, party);
    });
  });
};