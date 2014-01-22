"use strict";
var assert = require('chai').assert,
  _ = require('underscore');

var GamesManager = require("../../server/games/GamesManager");
var player = {
    id : 1,
    username: "testusr",
    password: "testpwd",
    admin: 0,
    email: "test@test.com"
};

describe("#GamesManager", function(){
  describe("Start new game for a player", function(){
    it("Should start new game for a player", function(done){

      GamesManager.startNewGameforPlayer(player,"test game", function(err, party){
          if(err) { done(err);}
          assert.isString(party.title);
          assert.isString(party.username);
          assert.isNumber(party.pid);
          assert.isNumber(party.port);
          done();
      });
    });
  });
    describe("Remove game for a player", function(){
        it("Should remove a game player", function(done){

            GamesManager.removeGameForPlayer(player)
        });
    });
});