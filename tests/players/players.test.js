"use strict";
var assert = require('chai').assert,
    _ = require('underscore');

var Player = require("../../server/players/player");

describe("#player.js", function () {
    describe("register new player", function () {
        it("Should register a new player", function (done) {

            var player = {
                username: "testusr",
                password: "testpwd",
                admin: 0,
                email: "test@test.com"
            };
            Player.registerNewPlayer(player, function (err, ok) {
                if (err) {
                    return done(err);
                }
                assert.ok(ok);
                done();
            });
        });
        it("Should register same player will failed", function (done) {

            var player = {
                username: "testusr",
                password: "testpwd",
                admin: 0,
                email: "test@test.com"
            };
            Player.registerNewPlayer(player, function (err, ok) {
              if (ok) {
                    return done(ok);
                }
                assert.deepEqual(err, "username already use");
                done();
            });
        });
    });
});