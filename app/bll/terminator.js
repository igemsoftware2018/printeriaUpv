'use strict';

const datapool = require('../datapool');
const terminatorsRepository = datapool.getRepository('terminators');
const userBll = require('./user');


exports.save = function* save(obj, user) {
  obj.idUser = user._id
  return yield terminatorsRepository.create(obj);
};

exports.getAll = function* getAll() {
  var terminators = yield terminatorsRepository.getAll();
  var user ={};
  for(var index = 0; index < terminators.length; ++index) {
    var user = yield userBll.getById(terminators[[index]].idUser);
    if(user){
      terminators[[index]].owner =  user.username;
    }else{
      terminators[[index]].owner = 'UNKOWN'
    }
  }
  return terminators;
};

exports.getById = function* getById(terminatorId) {
  var terminator = yield terminatorsRepository.getById(terminatorId);
  var user ={};
  var user = yield userBll.getById(terminator.idUser);
  if(user){
    terminator.owner = user.username
  }else{
    terminator.owner = 'UNKNOWN'
  }
  return terminator;
};
