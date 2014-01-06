"use strict";

var spawn = require('child_process').spawn;
var port,
    binaryPath = __dirname +"/../../bin/civserver/bin/",
    serverRunTime;


function CivServerController(port){
    this.port = port;
    console.log(binaryPath + 'freeciv-web');
    serverRunTime    = spawn(binaryPath + 'freeciv-web', ['-p', port]);


    serverRunTime.stdout.on('data', function (data) {
    });

    serverRunTime.stderr.on('data', function (data) {
        console.log(data.toString());
    });

    serverRunTime.on('close', function (code) {
        console.log('child process exited with code ' + code);
    });
}

CivServerController.prototype.getPid = function (){
    return serverRunTime.pid;
};

CivServerController.prototype.kill = function(){
    serverRunTime.kill('SIGHUP');
}


module.exports = CivServerController;