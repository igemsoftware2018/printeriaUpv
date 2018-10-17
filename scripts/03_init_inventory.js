'use strict';

const log4js = require('log4js');
const mongoose = require('mongoose');
const bcrypt = require('bluebird').promisifyAll(require('bcrypt-nodejs'));
const logger = log4js.getLogger();

function* method() {

  // Cargamos el modelo para trabajar con el
  const inventoryModel = mongoose.model('Inventories');

  // Completamos los datos
  var inventory = {};
  inventory.c1 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c2 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c3 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c4 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c5 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c6 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c7 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c8 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c9 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c10 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c11 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c12 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  inventory.c13 = {
    typePart: 'bacteria',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c14 = {
    typePart: 'bacteria',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c15 = {
    typePart: 't4DnaLigase',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c16 = {
    typePart: 't4DnaLigase',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c17 = {
    typePart: 'bsaIEndonuclease',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c18 = {
    typePart: 'bsaIEndonuclease',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c19 = {
    typePart: 'reactionBuffer',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c20 = {
    typePart: 'reactionBuffer',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c21 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c22 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c23 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c24 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  inventory.c25 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };

  // Persistimos el usuario en base de datos
  yield inventoryModel.create(inventory);

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
