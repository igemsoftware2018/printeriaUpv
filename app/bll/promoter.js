'use strict';

const datapool = require('../datapool');
const promotersRepository = datapool.getRepository('promoters');
const userBll = require('./user');


exports.save = function* save(obj, user) {
  obj.idUser = user._id
  console.log(obj)
  return yield promotersRepository.create(obj);
};

exports.getAll = function* getAll() {
  var promoters = yield promotersRepository.getAll();
  var user ={};
  for(var index = 0; index < promoters.length; ++index) {
    var user = yield userBll.getById(promoters[[index]].idUser);
    if(user){
      promoters[[index]].owner =  user.username;
    }else{
      promoters[[index]].owner = 'UNKOWN'
    }
  }
  return promoters;
};

exports.getById = function* getById(promoterId) {
  var promoter = yield promotersRepository.getById(promoterId);
  var user ={};
  var user = yield userBll.getById(promoter.idUser);
  if(user){
    promoter.owner = user.username
  }else{
    promoter.owner = 'UNKNOWN'
  }
  return promoter;
};
