'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const activitiesBll = require('../../bll/activities');

exports.getAll = function activitiesGet(req, res) {
  co(function* () {
    const activities = yield activitiesBll.getAll(req.user);
    res.send(activities);
  }).catch(handleError(req, res));
};

exports.markAsRead = function activitiesMarkAsRead(req, res) {
  co(function* () {
    const type = req.params.type;
    const activities = yield activitiesBll.markAsRead(type, req.user);
    res.send(activities);
  }).catch(handleError(req, res));
};
