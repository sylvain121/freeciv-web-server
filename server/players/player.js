"use strict";
var sha1 = require('sha1'),
  _ = require('underscore');
var playerdb = require('../database/players');


module.exports.registerNewUser = function(player, cb){

};




module.exports.authenticateUser = function(login, password, cb){
  playerdb.getPlayerWithUsername(login, function(err, player){
    if(err){ return cb(err);}
    if(sha1(password) === player.password){
      cb(null, "authenticated");
    }
  });
};