"use strict";
var sha1 = require('sha1'),
  _ = require('underscore');
var playerdb = require('../database/players'),
    error = require("../database/sqlError");




module.exports.registerNewPlayer = function(player, cb){
    player.password = sha1(player.password); // hash password before storage to database
    playerdb.registerNewPlayer(player, function(err, ok){
       if(err) {
       error.checkError(err.clientError.toString(), function(res){
          return cb(res.toString());
       });
       }
        cb( null, ok);
    });
};




module.exports.authenticateUser = function(login, password, cb){
  playerdb.getPlayerWithUsername(login, function(err, player){
    if(err){ return cb(err);}
    if(sha1(password) === player.password){
      cb(null, "authenticated");
    }
  });
};