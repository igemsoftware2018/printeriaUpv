'use strict';

const validator = require('validator');
const errorHelper = require('../../helpers/error');
const datapool = require('../datapool');
const tokenRepository = datapool.getRepository('token');
const userRepository = datapool.getRepository('user');
const bcrypt = require('bluebird').promisifyAll(require('bcrypt-nodejs'));
const co = require('co');
const FIVE_MINUTES = 5 * 60 * 1000;
var error;

function generateHash(password) {
  return bcrypt.hashSync(password, bcrypt.genSaltSync(8), null);
}

function validateId(id, error) {
  var validLength = id && validator.isLength(id, {
    min:1,
    max: undefined,
  });
  var validId = id && tokenRepository.validateId(id);
  var isIdValid = validLength && validId;
  if (!isIdValid) {
    error.data.id = 'IdIsRequired';
  }
}

function isValidId(id) {
  var validLength = id && validator.isLength(id, {
    min:1,
    max: undefined,
  });
  var validId = id && tokenRepository.validateId(id);
  var isIdValid = validLength && validId;
  return isIdValid;
}

exports.isValidId = isValidId;

function validateIdUser(idUser, error) {
  var validLength = idUser && validator.isLength(idUser.toString(), {
    min:1,
    max: undefined,
  });
  var validId = idUser && userRepository.validateId(idUser);
  var isIdValid = validLength && validId;
  if (!isIdValid) {
    error.data.idUser = 'IdUserIsRequired';
  }
}

function validatePassword(password, error) {
  if (password) {
    var isPasswordValid = password &&
    validator.isLength(password, { min:1, max: undefined });
    if (!isPasswordValid) {
      error.data.password = 'PasswordIsRequired';
    }else {
      isPasswordValid = validator.isLength(password, {
        min:6,
        max: undefined,
      })
      && validator.isAlphanumeric(password)
      && !validator.isAlpha(password)
      && !validator.isNumeric(password);
      if (!isPasswordValid) {
        error.data.password = 'PasswordIsWrong';
      }
    }
  } else {
    error.data.password = 'PasswordIsRequired';
  }
}

exports.create = function* create(token) {
  error = errorHelper.create('ValidationFailed', 'Token BLL validation failed');

  validateIdUser(token.idUser, error);
  token.time = new Date().getTime();

  if (Object.keys(error.data).length) {
    throw error;
  }

  token = yield tokenRepository.create(token);
  return token;
};

exports.getById = function* tokenGetById(id) {
  var error = errorHelper.create('ValidationFailed', 'Token BLL validation failed');
  validateId(id, error);
  if (Object.keys(error.data).length) {
    throw error;
  };

  let token = yield tokenRepository.getById(id);
  return token;
};

exports.isTokenTimeout = function* isTokenTimeout(idToken) {
  let tokenExpired;
  var error = errorHelper.create('ValidationFailed', 'Token BLL validation failed');
  validateId(idToken, error);
  if (Object.keys(error.data).length) {
    tokenExpired = true;
    return tokenExpired;
  };

  let token = yield tokenRepository.getById(idToken);

  if (!token) {
    tokenExpired = true;
    return tokenExpired;
  }

  var currentTime = new Date().getTime();
  tokenExpired = (currentTime - token.time.getTime()) > FIVE_MINUTES;
  return tokenExpired;
};

exports.newPassword = function* tokenNewPassword(idToken, password) {
  var error = errorHelper.create('ValidationFailed', 'Token BLL idToken validation failed');
  validateId(idToken, error);
  if (Object.keys(error.data).length) {
    throw error;
  };

  var error = errorHelper.create('ValidationFailed', 'Token BLL password validation failed');
  validatePassword(password, error);
  if (Object.keys(error.data).length) {
    throw error;
  };

  let token = yield tokenRepository.getById(idToken);

  if (!token) {
    error = errorHelper.create('TokenNotFound', 'Token for id not found');
    error.data.token = idToken;
    throw error;
  }

  let user = yield userRepository.getById(token.idUser);
  if (!user) {
    error = errorHelper.create('UserNotFound', 'User for id not found');
    error.data.user = token.idUser;
    throw error;
  }

  let update = {
    password: generateHash(password),
  };

  user = yield userRepository.updateUser(user._id, update);

  return user;
};
