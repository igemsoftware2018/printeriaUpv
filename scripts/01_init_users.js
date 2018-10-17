'use strict';

const log4js = require('log4js');
const mongoose = require('mongoose');
const bcrypt = require('bluebird').promisifyAll(require('bcrypt-nodejs'));
const logger = log4js.getLogger();

function* method() {

  // Cargamos el modelo de Usuario para trabajar con el
  const userModel = mongoose.model('User');

  // Comprobamos que no existe un usuario con ese username
  let user = yield userModel.findOne({ username: 'admin' }).lean().exec();
  if (user) {
    return;
  }

  // Creamos la password en formato hash
  var password = 'admin';
  var passwordHash = yield bcrypt.hashAsync(password, bcrypt.genSaltSync(8), null);

  // Completamos los datos de usuario
  user = {};
  user.email                      =   'admin@printeria.com';
  user.username                   =   'admin';
  user.password                   =   passwordHash;
  user.verified                   =   true;
  user.admin                      =   true;
  user.active                     =   true;
  user.personalInfo               =   {};
  user.personalInfo.name          =   "Administrador"
  user.personalInfo.lastname      =   "Printeria"

  // Persistimos el usuario en base de datos
  yield userModel.create(user);


  // Creamos la password en formato hash
  password = 'user';
  passwordHash = yield bcrypt.hashAsync(password, bcrypt.genSaltSync(8), null);

  // Completamos los datos de usuario
  user = {};
  user.email                      =   'user@printeria.com';
  user.username                   =   'user';
  user.password                   =   passwordHash;
  user.verified                   =   true;
  user.admin                      =   false;
  user.active                     =   true;
  user.personalInfo               =   {};
  user.personalInfo.name          =   "Usuario"
  user.personalInfo.lastname      =   "Printeria"

  // Persistimos el usuario en base de datos
  yield userModel.create(user);
}

//*****************************************************************************//
//*********************** L A N Z A D E R A ***********************************//
//*****************************************************************************//

if (module.parent) {
  module.exports = create;
} else {
  const co = require('co');
  (function initialize() {
    const config = require('../config/config');
    const db = require('../app/database/connection');
    const datapool = require('../app/datapool');
    db.connect(config);
    datapool.initialize(config);
  })();

  co(function* () {
    yield method();
    logger.info('Good-bye');
    process.exit();
  }).catch(function (err) {
    logger.error(err);
    process.exit(err.code || 1);
  });
}
