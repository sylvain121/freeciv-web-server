'use strict';
var
  express = require('express'),
  app = module.exports = express();


var Player = require('../database/players');

app.get('/', function(req, res){
  var sid = req.sessionID;
  Player.getPlayerBySid(sid, function(err, player){
    if(err) {
      throw err;
    }
    player.isAuth = true;
    res.render('index', player);
  });
});