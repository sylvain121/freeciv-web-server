"use strict";
/**
 * Module dependencies.
 */

var express = require('express');
var WebSocketServer = require('ws').Server;
var http = require('http');
var path = require('path');
var launcher = require('./routes/civLauncher');
var ui = require('./routes/UserInterface');

var app = express();

// all environments
app.set('port', process.env.PORT || 3000);
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));
app.use(express.favicon());
app.use(express.logger('dev'));
app.use(express.json());
app.use(express.urlencoded());
app.use(express.methodOverride());
app.use(express.cookieParser());
app.use(express.bodyParser());
app.use(express.session({
    "secret": "QRGFESRGESRG",
    "store":  new express.session.MemoryStore({ reapInterval: 60000 * 10 })
}));
app.use(app.router);
app.use(express.static(path.join(__dirname, 'public')));

// development only
if ('development' === app.get('env')) {
  app.use(express.errorHandler());
}
<<<<<<< HEAD
function requireLogin (req, res, next) {
    if (req.session.username) {
        next();
    } else {
        // Otherwise, we redirect him to login form
        res.redirect("/");
    }
}


app.get('/', function (req, res) {
  res.write("Freeciv-web websocket proxy, port: " + app.get('port'));
  res.end();

});

app.get('/status',[requireLogin], function (req, res) {
  res.write("getStatus");
  res.end();

=======
app.get('/', function(req, res){
  res.render('login');
});

app.get('/register', function(req, res){
  res.render('register');
>>>>>>> ad235c4de31e3321658b7b3931567437710a5d3a
});
<<<<<<< HEAD
=======

app.get('/login', ui.login);
>>>>>>> a0297d7c971d2a65339aa3506fb52151a0965483

var server = http.createServer(app);
server.listen(app.get('port'), function () {
  console.log('Express server listening on port ' + app.get('port'));
});

var wss = new WebSocketServer(
  {
    server: server
  });
require('./server/websocket/webSocket.js').webSocketServer(wss);




