'use strict';
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;
const inventoryBll = require('../../bll/inventory');

exports.save = function save(req, res) {
  co(function* () {
    const msg = req.body.data;
    const inventory = yield inventoryBll.update(msg, req.user);
    res.send(inventory);
  }).catch(handleError(req, res));
};

exports.getById = function getById(req, res) {
  co(function* () {
    const inventory = yield inventoryBll.getById();
    res.send(inventory);
  }).catch(handleError(req, res));
};

exports.uploadCSV = function uploadCSV(req, res) {
  co(function* () {
    const msg = req.body.data;
    console.log("Entering inventoryBll.uploadCSV")
    console.log("--------------------------------------")
    const result = yield inventoryBll.uploadCSV(msg, req.user);
    console.log("Exiting")
    console.log("--------------------------------------")
    console.log("LO QUE HA LLEGADO "+result)
    res.send(result);
  }).catch(handleError(req, res));
};
