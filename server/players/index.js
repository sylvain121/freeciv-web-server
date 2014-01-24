'use strict';
var
  express = require('express'),
  _ = require('underscore'),
  app = module.exports = express();


var Player = require('./player');
var playerdb = require('../database/players')

app.post('/player/register', function(req, res){
  var player = {
    username: req.body.username,
    password: req.body.password,
    email: req.body.email
  };
  Player.savePlayer(player, function(err, info){
    if(err) { throw err;}
    res.send(info);
  });
});

app.post('/player/login', function(req, res){
  var data = req.body;
  console.log(data);
  if(data.username === undefined || data.password === undefined) {
    res.send("missing login or password");
  }
  Player.authenticateUser(data.username, data.password, function(err, player){
      if(err){
        res.send(err);
      }
      else{
        req.session.player = player;
        player.sid = req.sessionID;
        playerdb.savePlayer(player, function(err, ok){
          if(err){
            throw err;
          }
          res.send(JSON.stringify( _.omit(player, ['password', 'sid', 'admin', 'id'])));
        });
      }
  });
});

app.get('/player/logout', function(req, res){
  delete req.session.player;
  // TODO delete session in database
  res.redirect("/");
});