'use strict';
const mongoose = require('mongoose');
const cdssModel = mongoose.model('Cdss');

exports.create = function* cdssCreate(cdss) {
  return cdssModel.create(cdss);
};

exports.getAll = function* getAll(user) {
  return yield cdssModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield cdssModel.findOne({ _id: id }).lean().exec();
};
