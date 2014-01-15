"use strict";

var passport = require('passport');

passport.serializeUser(function(user, done) {
   done(null, user.id);
});

passport.deserializeUser(function(id, done) {

   User.findUserById(id, function(err, user) {
      done(err, user);
   });
});