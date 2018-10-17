'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const terminatorBll = require('../../bll/terminator');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const terminator = yield terminatorBll.save(msg, req.user);
    res.send(terminator);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield terminatorBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idTerminator = req.params.idTerminator;
    const terminator = yield terminatorBll.getById(idTerminator);
    res.send(terminator);
  }).catch(handleError(req, res));
};
