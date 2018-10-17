'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const recipeBll = require('../../bll/job-recipes');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const recipe = yield recipeBll.save(msg, req.user);
    res.send(recipe);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield recipeBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idJob = req.params.idJob;
    const post = yield recipeBll.getById(idJob);
    res.send(post);
  }).catch(handleError(req, res));
};

exports.results = function results(req, res) {
  co(function* () {
    const msg = req.body.data;
    const recipe = yield recipeBll.results(msg, req.user);
    res.send(recipe);
  }).catch(handleError(req, res));
};

exports.deleteJob = function deleteJob(req, res) {
  co(function* () {
    const idJob = req.params.idJob;
    const post = yield recipeBll.deleteJob(idJob);
    res.send(post);
  }).catch(handleError(req, res));
};
