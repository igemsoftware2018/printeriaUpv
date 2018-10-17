'use strict';
const mongoose = require('mongoose');
const rbssModel = mongoose.model('Rbss');

exports.create = function* rbssCreate(rbss) {
  return rbssModel.create(rbss);
};

exports.getAll = function* getAll(user) {
  return yield rbssModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield rbssModel.findOne({ _id: id }).lean().exec();
};
