'use strict';
const path = require('path');
var fs = require('fs');
var error = require('../helpers/error');
var validator = require('../helpers/validator');

var PERSISTENCES = {
  MONGO: 'mongo',
  ORACLE: 'oracle',
  ROSETTA: 'rosetta',
};

exports.initialize = function (config) {
  var dtoPath;
  var validateArrayId;
  var validateId;

  validateId = null;
  validateArrayId = null;
  const objectsConfig = config.objects;
  dtoPath = path.join(__dirname, 'dto');
  fs.readdirSync(dtoPath).forEach(function (fileName) {
    var mongoose;
    var name;
    var schema;
    var schemaName;

    name = getName(fileName);
    if (!name) {
      return;
    }

    schemaName = capitaliseFirstLetter(name);
    switch (config.persistence) {
      case PERSISTENCES.MONGO:
        mongoose = require('mongoose');
        schema = require(dtoPath + '/' + fileName).schema;

        if (schema) {
          return mongoose.model(schemaName, schema.mongoose);
        }
    }
  });

  switch (config.persistence) {
    case PERSISTENCES.MONGO: validateId = validator.isValidObjectId; validateArrayId =
    validator.isValidArrayObjectId;
    break;
    case PERSISTENCES.ORACLE:
      validateId = validator.isValidOracleId;
      validateArrayId = validator.isValidArrayOracleId;
    break;
    default:
      throw new Error('Persistence not supported: ' + config.persistence);
  }
  exports.getRepository = function (name) {
    if (!objectsConfig[name]) {
      throw new error.create(400, 'NoRepository', name);
    }

    if (objectsConfig[name] === PERSISTENCES.ROSETTA) {
      return require('./repository/rosetta/' + name);
    }

    switch (config.persistence) {
      case PERSISTENCES.MONGO:
        return require('./repository/mongo/' + name);
      case PERSISTENCES.ORACLE:
        return require('./repository/oracle/' + name);
      default:
        throw new Error('Persistence not supported: ' + config.persistence);
    }
  };

  exports.validateArrayId = validateArrayId;
  return exports.validateId = validateId;
};

var capitaliseFirstLetter = function (value) {
  return value.charAt(0).toUpperCase() + value.slice(1);
};

var getName = function (fileName) {
  var extension;
  var extensions;
  var i;
  var len;
  var name;
  var pos;
  extensions = ['.js', '.coffee'];
  for (i = 0, len = extensions.length; i < len; i++) {
    extension = extensions[i];
    pos = fileName.indexOf(extension);
    if (pos >= 0 && fileName.length === (pos + extension.length)) {
      name = fileName.slice(0, pos);
      break;
    }
  }

  return name;
};
