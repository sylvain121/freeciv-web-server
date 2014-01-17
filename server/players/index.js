'use strict';
var Player = require('./player');

app.get('/player/register', function(req, res){
  var player = {
    username: req.body.username,
    password: req.body.password,
    email: req.body.email
  };

  Player.registerNewUser(player, function(err, info){
    if(err) { throw err;}
    res.send(info);
  });

});
