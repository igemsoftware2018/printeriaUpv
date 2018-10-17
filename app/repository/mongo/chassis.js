'use strict';
const mongoose = require('mongoose');
const chassisModel = mongoose.model('Chassis');

exports.create = function* chassisCreate(chassis) {
  return chassisModel.create(chassis);
};

exports.getAll = function* getAll(user) {
  return yield chassisModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield chassisModel.findOne({ _id: id }).lean().exec();
};
