'use strict';
const wrap = require('co-express');

module.exports = function (app, config) {

  const activityController = require('../../../app/controllers/api/activities');

  app.get('/api/activities/', wrap(activityController.getAll));

};
