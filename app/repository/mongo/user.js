'use strict';
const mongoose = require('mongoose');
const userModel = mongoose.model('User');
const bcrypt   = require('bcrypt-nodejs');
const ObjectId = require('mongodb').ObjectID;

exports.validateId = function* validateId(id) {
  return mongoose.Types.ObjectId.isValid(id);
};

exports.create = function* userCreate(user) {
  return yield userModel.create(user);
};

exports.getByEmail = function* userGetByEmail(email) {
  return yield userModel.findOne({ email: email.toLowerCase() }).lean().exec();
};

exports.getByUsername = function* userGetByUsername(name) {
  return yield userModel.findOne({ username: name.toLowerCase() }).lean().exec();
};

exports.getById = function* userGetById(userId) {
  return yield userModel.findOne({ _id: userId }).lean().exec();
};

exports.getByName = function* userGetByName(name) {
  return yield userModel.find({ 'personalInfo.name': name }).lean().exec();
};


exports.findOneAndUpdateStatus = function* userfindOneAndUpdateStatus(id) {
  if (!id && !mongoose.Types.ObjectId.isValid(id)) {
    throw new Error('Id is invalid');
  }

  var filter = { _id: id };
  var update = { $set: { verified: true } };
  var options = { new: true };
  return yield userModel.findOneAndUpdate(filter, update, options).lean().exec();
};

exports.getUsers = function getUsers() {
  return userModel.find({}, function (err, user) {
    return user;
  });
};

exports.update = function* updateUser(idUser, update) {
  var filter = {
    _id: idUser,
  };
  var options = {
    new: true,
  };
  var update = { $set: update };
  var res = yield userModel.findOneAndUpdate(filter, update, options).lean().exec();
  return res
};
exports.updateImage = function* updateUser(image, idUser) {
  var filter = {
    _id: idUser,
  };
  var options = {
    new: true,
  };
  var update = { $set: update };
  return yield userModel.findOneAndUpdate(filter, {"personalInfo.image" : image}, options).lean().exec();
};
exports.updatePassword = function* updateUser(password, idUser) {
  var filter = {
    _id: idUser,
  };
  var options = {
    new: true,
  };
  var update = { $set: update };
  return yield userModel.findOneAndUpdate(filter, {"password" : password}, options).lean().exec();
};

exports.delete = function* newsDelete(post) {
  const query = {
    _id: post,
  };
  return yield userModel.remove(query).lean().exec();
};
