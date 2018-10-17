'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const promoterController = require('../../../app/controllers/api/promoter');

  app.post('/api/promoter/', wrap(promoterController.save));
  app.get('/api/promoter/all', wrap(promoterController.getAll));
  app.get('/api/promoter/:idPromoter', wrap(promoterController.getById));


};
