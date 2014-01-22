'use strict';

var
  Bookshelf = require('./db').Bookshelf,
  _ = require('underscore');

var CurrentGame = Bookshelf.Model.extend({

  tableName: 'currentGames'

});

var CurrentGames = Bookshelf.Collection.extend({

  model: CurrentGame

});

module.exports = {

    CurrentGame : CurrentGame,
    CurrentGames: CurrentGames,

    /**
     * @method get running game for a user with his player_id
      * @param {Number}  : player_id
     * @param {Function} : callback [err, Array<games>]
     */
  getGameByPlayerId: function (id, cb) {
    new CurrentGame()
      .query()
      .where({"player_id": id})
      .exec(cb);

  },

    /**
     * @method return a rennning game with his port
      * @param {Number} port TCP port
     * @param {Function} callback [err, Array<res>]
     */
  getGameByPort : function(port, cb){
      new CurrentGame()
          .query()
          .where({"port": port})
          .exec(cb);
  },
    /**
     * @method add a new game for a player_id
      * @param {Object} currentGame
     * @param {Function} callback [err, ok]
     */
  addNewGame  : function (currentGame, cb) {
    new CurrentGame(currentGame)
      .save()
      .exec(cb);
  },
  deleteGameById : function(id, cb){
    new CurrentGame()
      .query()
      .where({"id": id})
      .delete()
      .exec(cb);
  }

};