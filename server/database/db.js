'use strict';

var
  Bookshelf = require('bookshelf');

var config = {
                client    : 'sqlite3',
                connection: {
                  filename:'./db/freecivTest.sqlite'
                }
                //"debug"   : true
              };

/*
 * Bookshelf initialization.
 */
module.exports = {

  Bookshelf: Bookshelf
    .initialize(config)
    .plugin(require('bookshelf/plugins/exec'))

};

