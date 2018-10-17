'use strict';

const datapool = require('../datapool');
const rbssRepository = datapool.getRepository('rbss');
const userBll = require('./user');


exports.save = function* save(obj, user) {
  obj.idUser = user._id
  return yield rbssRepository.create(obj);
};

exports.getAll = function* getAll() {
  var rbss = yield rbssRepository.getAll();
  var user ={};
  for(var index = 0; index < rbss.length; ++index) {
    var user = yield userBll.getById(rbss[[index]].idUser);
    if(user){
      rbss[[index]].owner =  user.username;
    }else{
      rbss[[index]].owner = 'UNKOWN'
    }
  }
  return rbss;
};

exports.getById = function* getById(rbsId) {
  var rbs = yield rbssRepository.getById(rbsId);
  var user ={};
  var user = yield userBll.getById(rbs.idUser);
  if(user){
    rbs.owner = user.username
  }else{
    rbs.owner = 'UNKNOWN'
  }
  return rbs;
};
