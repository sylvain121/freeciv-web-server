"use strict";
var assert = require('chai').assert,
  _ = require('underscore');

var Player = require("../../server/database/players");

describe("#player", function(){
  describe("register new player", function(){
    it("Should register new player", function(done){
      var player = {
        username: "testusr",
        password: "testpwd",
        admin: 0,
        email: "test@test.com"
      };

      Player.registerNewPlayer(player, function(err, ok){
        if(err){ return done(err);}
        assert.ok(ok);
        done();
      });

    });
  });
  describe("get player info", function(){
    it("Should return testusr player", function(done){
      var expected = {
        username: "testusr",
        password: "testpwd",
        admin: 0,
        email: "test@test.com"
      };
      Player.getPlayerByUsername("testusr", function(err, ok){
        if(err){ return done(err);}
        ok = _.omit(ok[0], "id"); // id is unknown for tests
        assert.deepEqual(expected, ok);
        done();

      });
    });
  });
  describe("delete a player", function(){
    it("Should delete a player", function(done){
      Player.deletePlayer("testusr", function(err, ok){
        if(err){ return done(err);}
        assert.ok(ok);
        done();
      });
    });
  });

});