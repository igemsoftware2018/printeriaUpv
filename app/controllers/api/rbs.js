'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const rbsBll = require('../../bll/rbs');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const rbs = yield rbsBll.save(msg, req.user);
    res.send(rbs);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield rbsBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idRbs = req.params.idRbs;
    const rbs = yield rbsBll.getById(idRbs);
    res.send(rbs);
  }).catch(handleError(req, res));
};
