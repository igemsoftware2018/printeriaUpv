'use strict';
var connected = false;

function mongo(config) {
  const mongoose = require('mongoose');
  mongoose.connect(config.db);
  const db = mongoose.connection;

  db.on('open', function (ref) {
    connected = true;
  });

  db.on('error', function (err) {
    console.error(err);
    throw new Error('unable to connect to database at ' + config.db + err);
  });
}

var oracle = function (config) {};

exports.connect = function (config) {
  if (connected) {
    return;
  }

  switch (config.persistence) {
    case 'oracle': return oracle(config);
    case 'mongo': return mongo(config);
    default: throw new Error('Persistence not supported: ' + config.persistence);
  }
};
