'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const cdsBll = require('../../bll/cds');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const cds = yield cdsBll.save(msg, req.user);
    res.send(cds);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield cdsBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idCds = req.params.idCds;
    const cds = yield cdsBll.getById(idCds);
    res.send(cds);
  }).catch(handleError(req, res));
};
