'use strict';
const mongoose = require('mongoose');
const recipesModel = mongoose.model('Jobs-recipes');

exports.create = function* recipesCreate(recipes) {
  console.log(recipes)
  return recipesModel.create(recipes);
};

exports.getAll = function* getAll(user) {
  return yield recipesModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield recipesModel.findOne({ _id: id }).lean().exec();
};

exports.deleteJob = function* deleteJob(id){
	return yield recipesModel.remove({_id: id}).lean().exec();
};
