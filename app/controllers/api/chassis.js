'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const chassisBll = require('../../bll/chassis');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const chassis = yield chassisBll.save(msg, req.user);
    res.send(chassis);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield chassisBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idChassis = req.params.idChassis;
    const chassis = yield chassisBll.getById(idChassis);
    res.send(chassis);
  }).catch(handleError(req, res));
};
