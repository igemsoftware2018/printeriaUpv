'use strict';

const fs = require('fs');
const express = require('express');
const http = require('http');
const https = require('https');
const log4js = require('log4js');
const config = require('./config/config');
const db = require('./app/database/connection');
const datapool = require('./app/datapool');
const cron = require('./app/cron');

db.connect(config);
datapool.initialize(config);
require('./config/passport')(config);

const app = express();

require('./config/log')(null, config);
require('./config/i18n')(app, config);
require('./config/express')(app, config);
require('./config/routes/')(app, config);

/**
 * App launch
 */
if (!module.parent) {
  const logger = log4js.getLogger();
  http.createServer(app).listen(process.env.PORT || config.port);
  logger.info('============ Comunidad de plantas ============');
  logger.info('App started time', new Date());
  logger.info('App started in port:', config.port);
  logger.info('App started in env:', config.env);
  logger.info('Node version:', process.version);
  logger.info('App started with exec-arguments:', process.execArgv);
  logger.info('App started with args:', process.argv.toString());
  logger.info('App dependencies:', JSON.stringify(process.versions));
  logger.info('--- HTTPS ----');
  logger.info('disabled');
  if (config.https) {
    var options = {
      key: fs.readFileSync(config.https.privateKey),
      cert: fs.readFileSync(config.https.certificate),
    };
    https.createServer(options, app).listen(config.https.port);
    logger.info('--- HTTPS ----');
    logger.info('Listening port:', config.https.port);
  } else {
    logger.info('--- HTTPS ----');
    logger.info('disabled');
  }
}
