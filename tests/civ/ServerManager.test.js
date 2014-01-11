var assert = require("chai").assert;

var ServerManager = require("../../server/civ/ServerManager");

var username = "test",
    title = "my test party",
    Gparty;


describe("ServerManager", function(){
  describe("create Server instance", function(){
    it.only("Should create new server", function(done){
      ServerManager.createNewServer(username, title, function(err, party){
        console.log(party);
        if(err) { return done(err);}
        Gparty = party;
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