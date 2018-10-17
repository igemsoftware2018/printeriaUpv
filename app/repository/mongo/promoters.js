'use strict';
const mongoose = require('mongoose');
const promotersModel = mongoose.model('Promoters');

exports.create = function* promotersCreate(promoters) {
  return promotersModel.create(promoters);
};

exports.getAll = function* getAll(user) {
  return yield promotersModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield promotersModel.findOne({ _id: id }).lean().exec();
};
