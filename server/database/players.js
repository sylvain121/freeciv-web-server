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

  Player : Players,
  Players: Players,

  getPlayerByUsername: function (username, cb) {
    new Player()
      .query()
      .where({"username": username})
      .exec(cb);

  },
  registerNewPlayer  : function (player, cb) {
    new Player(player)
      .save()
      .exec(cb);
  },
  deletePlayer : function(username, cb){
    new Player()
      .query()
      .where({"username": username})
      .delete()
      .exec(cb);
  }

};