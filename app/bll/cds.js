'use strict';

const datapool = require('../datapool');
const cdssRepository = datapool.getRepository('cdss');
const userBll = require('./user');
const activitiesBll = require('./activities');

exports.save = function* save(obj, user) {

    // - Se registra la actividad de la tarea realizada
  var activity = {
    table: 'cds',
    action: 'create',
  };
  yield activitiesBll.create(activity, user);

  obj.idUser = user._id
  return yield cdssRepository.create(obj);
};


exports.getAll = function* getAll() {
  var cdss = yield cdssRepository.getAll();
  var user ={};
  for(var index = 0; index < cdss.length; ++index) {
    var user = yield userBll.getById(cdss[[index]].idUser);
    if(user){
      cdss[[index]].owner =  user.username;
    }else{
      cdss[[index]].owner = 'UNKOWN'
    }
  }
  return cdss;
};

exports.getById = function* getById(cdsId) {
  var cds = yield cdssRepository.getById(cdsId);
  var user ={};
  var user = yield userBll.getById(cds.idUser);
  if(user){
    cds.owner = user.username
  }else{
    cds.owner = 'UNKNOWN'
  }
  return cds;
};
