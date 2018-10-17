'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const terminatorController = require('../../../app/controllers/api/terminator');

  app.post('/api/terminator/', wrap(terminatorController.save));
  app.get('/api/terminator/all', wrap(terminatorController.getAll));
  app.get('/api/terminator/:idTerminator', wrap(terminatorController.getById));


};
