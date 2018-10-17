'use strict';
const mongoose = require('mongoose');
const jobsModel = mongoose.model('Jobs');

exports.create = function* jobsCreate(jobs) {
  return jobsModel.create(jobs);
};

exports.getAll = function* getAll(user) {
  return yield jobsModel.find({}).lean().exec();
};

exports.getById = function* getById(id) {
  return yield jobsModel.findOne({ _id: id }).lean().exec();
};

exports.deleteJob = function* deleteJob(id){
	return yield jobsModel.remove({_id: id}).lean().exec();
};

exports.update = function* updateUser(jobId, job) {
	var filter = {
	_id: jobId,
	};
	var options = {
	new: true,
	};
	var update = { $set: job };
	return yield jobsModel.findOneAndUpdate(filter, update, options).lean().exec();
};
