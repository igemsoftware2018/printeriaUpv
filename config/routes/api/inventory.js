'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const inventoryController = require('../../../app/controllers/api/inventory');

  app.post('/api/inventory/', wrap(inventoryController.save));
  app.get('/api/inventory/', wrap(inventoryController.getById));
  app.post('/api/inventory/uploadCSV', wrap(inventoryController.uploadCSV));

};