"use strict";
var playerData = require('../server/players/playerData');

module.exports.login = function(req, res){
  var login = req.body.login;
  var password = req.body.password;
  playerData.authenticateUser(login, password, function(err, player){
    if(err) { throw err; }
    res.send("player authenticated");
  });


};


