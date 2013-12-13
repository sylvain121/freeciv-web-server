"use strict";
var clients = [];
var clientCounter = 0;
var CivServer = require('../civ/CivServer');


module.exports.webSocketServer = function(wss){

    wss.on('connection', function(ws) {
        console.log("new client connection on websocket");
        var user = {
            "id": ++clientCounter,
            "isReady": false
        };
        clients.push(user);


        ws.on('message', function(message) {
            console.log("on Data Received");
            if(!user.isReady){
                var data = JSON.parse(message);
                user.username = data['username'];
                user.civServerPort = data['port'];
                user.host = 'localhost';
                user.loginPacket = message;
                user.isReady = true;
                user.civServerInstance = new CivServer(ws, user.host, user.civServerPort, user.loginPacket);

            }

            if(user.civServerInstance === undefined){
                ws.send("Error: Could not authenticate user.");
            } else {
                user.civServerInstance.sendToCivServer(message);
            }

        });

    });
};

