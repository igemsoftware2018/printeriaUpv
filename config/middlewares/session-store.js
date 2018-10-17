var mongo = function (session) {
  var MongoStore;
  var connectMongo;
  var mongoose;
  var store;
  connectMongo = require('connect-mongo');
  mongoose = require('mongoose');
  MongoStore = new connectMongo(session);
  store = new MongoStore({
    mongooseConnection: mongoose.connection,
    ttl: 1 * 24 * 60 * 60,
    autoRemove: 'native',
  });
  return store;
};

var oracle = function (session) {
  var ConnectOracle;
  var OracleStore;
  var baseClient;
  var oracleStore;
  baseClient = require('../../app/repository/oracle/base/base');
  ConnectOracle = require('connect-oracle');
  OracleStore = new ConnectOracle(session);
  oracleStore = new OracleStore({
    baseClient: baseClient,
  });
  return oracleStore;
};

module.exports = function (config, session) {
  switch (config.persistence) {
    case 'oracle':
      return oracle(session);
    case 'mongo':
      return mongo(session);
    default:
      throw new Error('Persistence not supported: ' + config.persistence);
  }
};
