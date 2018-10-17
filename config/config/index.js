var mkdirp = require('mkdirp');
var path = require('path');
var logger = require('log4js').getLogger();
var objects = require('../objects');
var fs = require('fs');

_ = require('lodash');

var defaultLogsPath = path.join(__dirname, '..', '..', 'logs');
var defaultEnv = 'development';
var env = process.env.NODE_ENV || defaultEnv;

var config = require('./config.json');
var configEnvironment = require('./config.' + env + '.json');
config = _.merge(config, configEnvironment);

setFullPath = function (logsPath) {
  return function (appender) {
    var filePath;
    if (appender.type !== 'dateFile' && appender.type !== 'file') {
      return appender;
    }

    filePath = path.join(logsPath, appender.filename);
    mkdirp.sync(path.dirname(filePath));
    appender.filename = filePath;
    return appender;
  };
};

if (!/production/.test(env)) {
  try {
    configLocal = require('./config.local.json');
    config = _.merge(config, configLocal);
    logger.info('user config local loaded successfully');
  } catch (_error) {
    e = _error;
    if (e.code === 'MODULE_NOT_FOUND') {
      logger.warn('user config local not found');
    } else {
      throw e;
    }
  }
}

config.logsPath = config.logsPath || defaultLogsPath;

config.log.appenders = config.log.appenders.filter(function (i) {
  return i !== null;
});

config.log.appenders = config.log.appenders.map(setFullPath(config.logsPath));

config.objects = objects;

config.root = path.join(__dirname, '..', '..');

module.exports = config;
