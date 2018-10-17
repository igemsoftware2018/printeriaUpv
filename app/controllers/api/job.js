'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const jobBll = require('../../bll/job');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const job = yield jobBll.save(msg, req.user);
    res.send(job);
  }).catch(handleError(req, res));
};

exports.modelling = function modelling(req, res) {
  co(function* () {
    const msg = req.body.data;
    console.log("Entering jobBll.modelling")
    console.log("--------------------------------------")
    const job = yield jobBll.modelling(msg, req.user);
    console.log("Exiting jobBll.modelling")
    console.log("--------------------------------------")
    console.log("LO QUE HA LLEGADO "+job)
    res.send(job);
  }).catch(handleError(req, res));
};

exports.results = function results(req, res) {
  co(function* () {
    const msg = req.body.data;
    const job = yield jobBll.results(msg, req.user);
    res.send(job);
  }).catch(handleError(req, res));
};

exports.getAll = function getAll(req, res) {
  co(function* () {
    const result = yield jobBll.getAll();
    res.send(result);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const idJob = req.params.idJob;
    const post = yield jobBll.getById(idJob);
    res.send(post);
  }).catch(handleError(req, res));
};

exports.deleteJob = function deleteJob(req, res) {
  co(function* () {
    const idJob = req.params.idJob;
    const post = yield jobBll.deleteJob(idJob);
    res.send(post);
  }).catch(handleError(req, res));
};

exports.update = function update(req, res){
  co(function* () {
    const jobId = req.params.idJob;
    console.log("CONTROLLERS ")
    console.log(jobId)
    const job = req.body.data;
    const result = yield jobBll.update(jobId, job);
    res.send(result);

  })
}


