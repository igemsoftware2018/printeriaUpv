var error;
var isValidObjectId;
var isValidOracleId;
var moment;
indexOf = [].indexOf || function (item) {
  for (var i = 0, l = this.length; i < l; i++) {
  if (i in this && this[i] === item) return i; } return -1;
};

error = require('./error');

moment = require('moment');

isValidObjectId = function (id) {
  if (id) {
    return id.toString().match(/^[0-9a-fA-F]{24}$/) != null;
  } else {
    return false;
  }
};

exports.isValidArrayObjectId = function (array) {
  var isValid;
  isValid = Object.prototype.toString.call(array) === '[object Array]' && array.length > 0;
  if (isValid) {
    array.forEach(function (objectId) {
      return isValid = isValid && isValidObjectId(objectId);
    });
  }

  return isValid;
};

exports.isValidArrayOracleId = function (array) {
  var isValid;
  return isValid = array.every(isValidOracleId);
};

isValidOracleId = function (id) {
  if (typeof (parseInt(id)) !== NaN) {
    return true;
  } else {
    return false;
  }
};

exports.isValidDate = function (date) {
  if (!(date && date.length === 8)) {
    return false;
  }

  return moment(date, 'YYYYMMDD', true).isValid();
};

exports.isValidDate2 = function (date) {
  if (Object.prototype.toString.call(date) !== '[object Date]') {
    return false;
  }

  return !(Number.isNaN(date.getTime()));
};

exports.isValidWeight = function (weight) {
  return (weight != null) && typeof weight === 'number' && weight >= 0 && weight <= 100;
};

exports.isValidEmail = function (email) {
  var regexp;
  regexp = /^(([^<>()[\]\\.,;:\s@\']+(\.[^<>()[\]\\.,;:\s@\']+)*)|(\'.+\'))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
  return regexp.test(email);
};

exports.validateRoleOperate = function (client) {
  var ref;
  var userCanOperate;
  userCanOperate = indexOf.call((ref = client.credentials) != null
  ? ref.roles : void 0, 'OPERATE') >= 0;
  if (!userCanOperate) {
    throw error.create(401, 'OrderNotSupported');
  }
};

exports.isValidObjectId = isValidObjectId;

exports.isValidOracleId = isValidOracleId;
