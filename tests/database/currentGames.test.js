"use strict";
var assert = require('chai').assert,
    _ = require('underscore');

var CurrentGames = require("../../server/database/currentGames");
var id;

describe("#CurrentGames", function () {
    describe("register new games", function () {
        it("Should register new games", function (done) {

            var game = {
                player_id: 1,
                port: 10000,
                pid: 27456
            };
            CurrentGames.addNewGame(game, function (err, ok) {
                if (err) {
                    return done(err);
                }
                assert.ok(ok);
                done();
            });
        });
    });
    describe("get a running games", function () {
        it("Should return running game for player_id", function (done) {
            var expected = {
                player_id: 1,
                port: 10000,
                pid: 27456
            };


            CurrentGames.getGameByPlayerId(1, function (err, ok) {
                if (err) {
                    return done(err);
                }
                id = ok[0].id;
                ok = _.omit(ok[0], "id");
                assert.deepEqual(expected, ok);
                done();
            });
        });
        it("Should return a running game by the port", function(done){
           CurrentGames.getGameByPort(10000, function(err, res){
              if(err){
                  return done(err);
              }
               assert.deepEqual(res[0].port, 10000);
               done();
           });
        });
    });
    describe("delete a game", function () {
        it("Should un-register a games", function (done) {

            CurrentGames.deleteGameById(id, function (err, ok) {
                if (err) {
                    return done(err);
                }
                assert.ok(ok);
                done();
            });
        });
    });
});