'use strict';
const mongoose = require('mongoose');
const Schema = mongoose.Schema;

exports.toMongoose = function (dto, options) {
  var schema = convert(dto);
  return new Schema(schema, options);
};

function convert(dto) {
  var schema = {};

  for (let key in dto) {
    var value = dto[key];
    var isArray = Array.isArray(value);

    if (value.virtual) {
      continue;
    }

    if (isArray) {
      value = value[0];
    }

    if (!(value.type || value.ref || value.required)) {
      value = convert(value);
    }

    if (value.ref) {
      value.type = mongoose.Schema.ObjectId;
      if (typeof value.ref !== 'string') {
        delete value.ref;
      }
    }

    if (value.type === 'Mixed') {
      value.type = Schema.Types.Mixed;
    }

    schema[key] = isArray ? [value] : value;
  }

  return schema;
}
