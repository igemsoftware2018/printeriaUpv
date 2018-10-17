'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const chassisController = require('../../../app/controllers/api/chassis');

  app.post('/api/chassis/', wrap(chassisController.save));
  app.get('/api/chassis/all', wrap(chassisController.getAll));
  app.get('/api/chassis/:idChassis', wrap(chassisController.getById));


};
