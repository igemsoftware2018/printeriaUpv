var log4js = require('log4js');
var mkdirp = require('mkdirp');
var path = require('path');

module.exports = function (app, config) {
  createFileAppendersPathsSync(config.log.appenders);
  log4js.configure(config.log);
};

function createFileAppendersPathsSync(appenders) {
  for (var i = appenders.length - 1; i >= 0; i--) {
    var appender = appenders[i];
    if (appender.type === 'dateFile') {
      var appenderPath = path.dirname(appender.filename);
      mkdirp.sync(appenderPath);
    }
  }
}
