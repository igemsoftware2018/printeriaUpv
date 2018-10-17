'use strict';

const log4js = require('log4js');
const mongoose = require('mongoose');
const bcrypt = require('bluebird').promisifyAll(require('bcrypt-nodejs'));
const logger = log4js.getLogger();

function* method() {


  // Cargamos el Usuario administrador para crear las recetas
  const userModel = mongoose.model('User');
  let user = yield userModel.findOne({ username: 'admin' }).lean().exec();

  // Cargamos el modelo para trabajar con el
  const recipesModel = mongoose.model('Jobs-recipes');

  // Cargamos el modelo de las partes para trabajar con el
  const promoterModel = mongoose.model('Promoters');
  const cdsModel = mongoose.model('Cdss');
  const rbsModel = mongoose.model('Rbss');
  const terminatorModel = mongoose.model('Terminators');

  // RECETA 1 (REPETIR PARA CADA RECETA)

  objPromoters = yield promoterModel.find(name: "",).lean().exec();
  objRBS = yield rbsModel.find(name: "",).lean().exec();
  objCDS = yield cdsModel.find(name: "",).lean().exec();
  objTerminators = yield terminatorModel.find(name: "",).lean().exec();

  var recipe = {
    idUser : user._id,
    name: '',
    description: '',
    Promoters: objPromoters._id,
    RBS: objRBS._id,
    CDS: objCDS._id,
    Terminators: objTerminators._id,
    coldzoneTemperature: 50,
    coldzoneTime: 50,
    hotzoneTemperature: 50,
    hotzoneTime: 50,
  };

  // Persistimos en base de datos
  yield recipesModel.create(recipe);

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
