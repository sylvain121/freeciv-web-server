"use strict";
/**
 * Module dependencies.
 */

var express = require('express');
var WebSocketServer = require('ws').Server;
var http = require('http');
var path = require('path');
var launcher = require('./routes/civLauncher');

var app = express();

// all environments
app.set('port', process.env.PORT || 3000);
app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'jade');
app.use(express.favicon());
app.use(express.logger('dev'));
app.use(express.json());
app.use(express.urlencoded());
app.use(express.methodOverride());
app.use(express.cookieParser('your secret here'));
app.use(express.session());
app.use(app.router);
app.use(express.static(path.join(__dirname, 'public')));

// development only
if ('development' == app.get('env')) {
  app.use(express.errorHandler());
}

app.get('/', function (req, res) {
  res.write("Freeciv-web websocket proxy, port: " + app.get('port'));
  res.end();

});

app.get('/status', function (req, res) {
  res.write("getStatus");
  res.end();

});
app.get('/testServer', function(req, res){
  var Manager = require("./server/civ/ServerManager");
  Manager.getInstance(function(err, instance){
  });
});
app.get("/test", function(req, res){
    var Server = require("./server/civ/CivServerController.js");
    var instance = new Server(10000);
    console.log(instance.getPid());
    instance.kill();
});

app.get('/CivclientLauncher', launcher.index);

var server = http.createServer(app);
server.listen(app.get('port'), function () {
  console.log('Express server listening on port ' + app.get('port'));
});

var wss = new WebSocketServer(
  {
    server: server
  });
require('./server/websocket/webSocket.js').webSocketServer(wss);




