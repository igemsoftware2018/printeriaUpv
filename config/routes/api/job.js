'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const jobController = require('../../../app/controllers/api/job');

  app.post('/api/job/', wrap(jobController.save));
  app.post('/api/job/modelling', wrap(jobController.modelling));
  app.post('/api/job/results', wrap(jobController.results));
  app.get('/api/job/all', wrap(jobController.getAll));
  app.get('/api/job/:idJob', wrap(jobController.getById));
  app.delete('/api/job/:idJob', wrap(jobController.deleteJob));
  app.put('/api/job/:idJob', wrap(jobController.update));


};
