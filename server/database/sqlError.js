"use strict";

var error = [
    {
        error: "UNIQUE constraint failed: player.username",
        message: "username already use"
    }
];


module.exports.checkError = function(err, cb){
    for(var i=0; i < err.length; i++){
          if(err.indexOf(error[i].error)){
             return cb(error[i].message);
         }
    }
    cb("error while parsing error list");

};
