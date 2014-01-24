"use strict";
var assert = require('chai').assert,
    _ = require('underscore');

var Player = require("../../server/players/player");


var player = {
    username: "testusr"+ new Date(),
    password: "testpwd",
    admin: 0,
    email: "test@test.com"
};

describe("#player.js", function () {
    describe("register new player", function () {
        it("Should register a new player", function (done) {
            Player.savePlayer(player, function (err, ok) {
                if (err) {
                    return done(err);
                }
                assert.ok(ok);
                done();
            });
        });
        it.skip("Should register same player will failed", function (done) {
            Player.savePlayer(player, function (err, ok) {
                assert.deepEqual(err, "username already use");
                done();
            });
        });
    });
    describe("authenticate user", function(){
      it("Should authenticate user", function (done) {
          Player.authenticateUser(player.username,player.password, function (err, ok) {
            if(err){
              return done();
            }
            assert.deepEqual(player.username, ok.username);
          });
      });
    });
});