'use strict';
const mongoose = require('mongoose');
const inventoriesModel = mongoose.model('Inventories');

exports.update = function* inventoriesUpdate(update) {
  var filter = {  };
  var options = {
    new: true,
  };
  var update = { $set: update };
  return yield inventoriesModel.findOneAndUpdate(filter, update, options).lean().exec();
};

exports.getById = function* getById() {
  return yield inventoriesModel.findOne({}).lean().exec();
};
