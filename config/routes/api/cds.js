'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const cdsController = require('../../../app/controllers/api/cds');

  app.post('/api/cds/', wrap(cdsController.save));
  app.get('/api/cds/all', wrap(cdsController.getAll));
  app.get('/api/cds/:idCds', wrap(cdsController.getById));


};
