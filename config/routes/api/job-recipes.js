'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {
  const recipeController = require('../../../app/controllers/api/job-recipes');

  app.post('/api/recipes/', wrap(recipeController.save));
  app.get('/api/recipes/all', wrap(recipeController.getAll));
  app.post('/api/recipes/results', wrap(recipeController.results));
  app.get('/api/recipes/:idJob', wrap(recipeController.getById));
  app.delete('/api/recipes/:idJob', wrap(recipeController.deleteJob));
};
