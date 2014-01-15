"use strict";

var spawn = require('child_process').spawn;
var port,
    binaryPath = __dirname +"/../../bin/civserver/bin/",
    serverRunTime,
    languages = {
      en: 'LANG=en_US.utf-8',
      fr: 'LANG=fr_FR.utf-8'
    };


function CivServerController(port){
    this.port = port;
    console.log(binaryPath + 'freeciv-web');
    serverRunTime    = spawn(binaryPath + 'freeciv-web', ['-p', port, '-b', '127.0.0.1']);


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
};


module.exports = CivServerController;