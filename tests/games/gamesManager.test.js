"use strict";
var assert = require('chai').assert,
  _ = require('underscore');

var GamesManager = require("../../server/games/GamesManager");
var player = {
    username: "testusr",
    password: "testpwd",
    admin: 0,
    email: "test@test.com"
};

describe("#GamesManager", function(){
  describe("Start new game for a player", function(){
    it("Should start new game for a player", function(done){

      GamesManager.startNewGameforPlayer(player, function(err, res){
          if(err) { done(err);}
          assert.ok(res);
      });
    });
  });
});