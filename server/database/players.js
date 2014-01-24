'use strict';

var
  Bookshelf = require('./db').Bookshelf,
  _ = require('underscore');

var Player = Bookshelf.Model.extend({

  tableName: 'player'

});

var Players = Bookshelf.Collection.extend({

  model: Player

});

module.exports = {

  Player : Player,
  Players: Players,

  getPlayerByUsername: function (username, cb) {
    new Player()
      .query()
      .where({"username": username})
      .then(function (players) {
        cb(null, players[0]);
      })
      .otherwise(cb);

  },
  getPlayerBySid     : function (sid, cb) {
    new Player()
      .query()
      .where({"sid": sid})
      .then(function (players) {
        cb(null, players[0]);
      })
      .otherwise(cb);

  },
  savePlayer         : function (player, cb) {
    new Player(player)
      .save()
      .exec(cb);
  },
  deletePlayer       : function (username, cb) {
    new Player()
      .query()
      .where({"username": username})
      .delete()
      .exec(cb);
  }

};