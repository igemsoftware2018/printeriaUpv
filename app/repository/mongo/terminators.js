'use strict';
const mongoose = require('mongoose');
const terminatorsModel = mongoose.model('Terminators');

exports.create = function* terminatorsCreate(terminators) {
  return terminatorsModel.create(terminators);
};

exports.getAll = function* getAll(user) {
  return yield terminatorsModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield terminatorsModel.findOne({ _id: id }).lean().exec();
};
