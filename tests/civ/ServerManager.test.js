"use strict";

var assert = require("chai").assert;

var ServerManager = require("../../server/civ/ServerManager");

var username = "test",
    title = "my test party",
    Gparty;



describe("ServerManager", function(){
  describe("create Server instance", function(){
    it("Should create new server", function(done){
      ServerManager.createNewServer(username, title, function(err, party){
        if(err) { return done(err);}
        Gparty = party;

        assert.isString(Gparty.title);
        assert.deepEqual(Gparty.username, username);
        assert.isNumber(Gparty.pid);
        assert.isNumber(Gparty.port);
        done();
      });
    });
  });
  describe("delete server instance", function(){
    it("Should delete server with port", function(done){
      Gparty.server.kill();
      done();
    });
  });

});