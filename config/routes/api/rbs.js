'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const rbsController = require('../../../app/controllers/api/rbs');

  app.post('/api/rbs/', wrap(rbsController.save));
  app.get('/api/rbs/all', wrap(rbsController.getAll));
  app.get('/api/rbs/:idRbs', wrap(rbsController.getById));


};
