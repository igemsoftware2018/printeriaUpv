'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const promoterBll = require('../../bll/promoter');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const promoter = yield promoterBll.save(msg, req.user);
    res.send(promoter);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield promoterBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idPromoter = req.params.idPromoter;
    const promoter = yield promoterBll.getById(idPromoter);
    res.send(promoter);
  }).catch(handleError(req, res));
};
