'use strict';

const log4js = require('log4js');
const mongoose = require('mongoose');
const bcrypt = require('bluebird').promisifyAll(require('bcrypt-nodejs'));
const logger = log4js.getLogger();
var fs = require('fs');


function* method() {

  //Cargamos el Usuario administrador para crear las partes
  const userModel = mongoose.model('User');
  let user = yield userModel.findOne({ username: 'admin' }).lean().exec();

  //Cargamos el modelo de las partes para trabajar con el
  const promoterModel = mongoose.model('Promoters');
  const cdsModel = mongoose.model('Cdss');
  const rbsModel = mongoose.model('Rbss');
  const terminatorModel = mongoose.model('Terminators');


  //PROMOTOR 1 (REPETIR PARA CADA PARTE)
  var part = {
    idUser : user._id,
    name : 'Promotor01',
    description : 'El primer promotor de la base de datos',
    quantity : '0.2',
    category : 'Categoria1',
    lengthBP : '100',
    type : 'Constitutivos',
    r : '20',
    dm : '20',
  };

  //Persistimos en base de datos
  yield promoterModel.create(part);

  //PROMOTOR 2 (REPETIR PARA CADA PARTE)
  var part = {
    idUser : user._id,
    name : 'Promotor02',
    description : 'El segundo promotor de la base de datos',
    quantity : '0.2',
    category : 'Categoria1',
    lengthBP : '100',
    type : 'Constitutivos',
    r : '20',
    dm : '20',
  };

  //Persistimos en base de datos
  yield promoterModel.create(part);
  

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

