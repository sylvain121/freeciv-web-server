var assert = require("chai").assert;

var ServerManager = require("../../server/civ/ServerManager");

describe("test ServerManager Singleton", function () {
  describe("access to singleton", function () {
    it("Should return singleton instance", function (done) {
      ServerManager.getInstance(function (err, instance) {
        if (err) { return assert.notOk(err);}
        assert.deepEqual(typeof instance, "object");
        done();
      });
    });


  });


});
