const wrap = require('co-express');
const log4js = require('log4js');
const ERROR_TYPES = require('../../../app/enums/error-type');

const logger = log4js.getLogger('access');

module.exports = function (app) {
  app.use(function (req, res, next) {
    res.status(404);
    res.render('errors/404');
  });

  app.use(function (req, res, next) {
    res.status(500);
    res.render('errors/500');
  });

  app.use(wrap(function (err, req, res, next) {
    if (!err) {
      return next();
    }

    const errorType = ERROR_TYPES[err.flag] || 500;
    const message = err.stack != null ? err.stack : err.message;
    logger.error(message, err.data);
    res.status(errorType).send(err);
  }));
};
