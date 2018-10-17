'use strict';

const datapool = require('../datapool');
const chassisRepository = datapool.getRepository('chassis');
const userBll = require('./user');


exports.save = function* save(obj, user) {
  obj.idUser = user._id
  return yield chassisRepository.create(obj);
};

exports.getAll = function* getAll() {
  var chassis = yield chassisRepository.getAll();
  var user ={};
  for(var index = 0; index < chassis.length; ++index) {
    var user = yield userBll.getById(chassis[[index]].idUser);
    if(user){
      chassis[[index]].owner =  user.username;
    }else{
      chassis[[index]].owner = 'UNKOWN'
    }
  }
  return chassis;
};

exports.getById = function* getById(chassisId) {
  var chassis = yield chassissRepository.getById(chassisId);
  return chassis;
};
