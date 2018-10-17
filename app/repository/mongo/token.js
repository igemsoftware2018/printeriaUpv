'use strict';
const mongoose = require('mongoose');
const passwordModel = mongoose.model('Token');
const bcrypt   = require('bcrypt-nodejs');

exports.validateId = function* validateId(id) {
  return mongoose.Types.ObjectId.isValid(id);
};

exports.create = function tokenCreate(token) {
  return passwordModel.create(token);
};

exports.getById = function* tokenGetById(id) {
  return yield passwordModel.findOne({ _id: id }).lean().exec();
};
