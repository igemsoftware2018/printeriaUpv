'use strict';

const datapool = require('../datapool');
const recipesRepository = datapool.getRepository('jobs-recipes');
const userBll = require('./user');
const promoterBll = require('./promoter');
const rbsBll = require('./rbs.js');
const cdsBll = require('./cds.js');
const terminatorBll = require('./terminator.js');


exports.save = function* save(obj, user) {
  obj.idUser = user._id
  return yield recipesRepository.create(obj);
};

exports.deleteJob = function* deleteJob(jobId) {
    var job = yield recipesRepository.getById(jobId);
    return yield recipesRepository.deleteJob(job._id);
}

exports.results = function* results(msg, reqUser) {
    return new Promise(function(resolve, reject) {
      var argString = msg
      console.log(argString)
      var util = require('util')
      var exec = require('child_process').exec;
      var child;
      var str = 'python ~/Desktop/printeria2018/python/printJob/getCSVResults.py'+' '+argString;
      var res = ""
      child = exec(str, function (error, stdout, stderr) {
        util.print('stdout: ' + stdout);
        util.print('stderr: ' + stderr);
        if (error != null) {
          console.log('exec error: ' + error);
        }
        res = stdout;
      });
      setTimeout(function(){
        return resolve(res);
      }, 5000);
    })
};

function compareDate(a, b) {
  if (a.creationDate > b.creationDate)
  return -1;
  if (a.creationDate < b.creationDate)
  return 1;
  return 0;
}

exports.getAll = function* getAll() {
  var recipes = yield recipesRepository.getAll();
  recipes = recipes.sort(compareDate);
  var user ={};
  for(var index = 0; index < recipes.length; ++index) {
    var user = yield userBll.getById(recipes[[index]].idUser);
    if(user){
      console.log("Usuario"+index)
      console.log(user.username)
      recipes[[index]].owner =  user.username;
    }else{
      recipes[[index]].owner = 'UNKOWN'
    }
    //Asignar el objeto promoter a la variable promoterObj
    var promoterObj = yield promoterBll.getById(recipes[[index]].Promoters);
    if(promoterObj){
      recipes[[index]].promoterObj =  promoterObj;
    }else{
      recipes[[index]].promoterObj = 'UNKNOWN'
    }
    //Asignar el objeto rbs a la variable rbsObj
    var rbsObj = yield rbsBll.getById(recipes[[index]].RBS);
    if(rbsObj){
      recipes[[index]].rbsObj =  rbsObj;
    }else{
      recipes[[index]].rbsObj = 'UNKNOWN'
    }
    //Asignar el objeto cds a la variable cdsObj
    var cdsObj = yield cdsBll.getById(recipes[[index]].CDS);
    if(cdsObj){
      recipes[[index]].cdsObj =  cdsObj;
    }else{
      recipes[[index]].cdsObj = 'UNKNOWN'
    }
    //Asignar el objeto terminator a la variable terminatorObj
    var terminatorObj = yield terminatorBll.getById(recipes[[index]].Terminators);
    if(terminatorObj){
      recipes[[index]].terminatorObj =  terminatorObj;
    }else{
      recipes[[index]].terminatorObj = 'UNKNOWN'
    }
  }
  return recipes;
};

exports.getById = function* getById(recipeId) {
  var recipe = yield recipesRepository.getById(recipeId);
  var user = yield userBll.getById(recipe.idUser);
  if(user){
      console.log(user.username)
      recipe.owner =  user.username;
    }else{
      recipe.owner = 'UNKOWN'
    }
   //Asignar el objeto promoter a la variable promoterObj
    var promoterObj = yield promoterBll.getById(recipe.Promoters);
    if (promoterObj) {
        recipe.promoterObj = promoterObj;
    } else {
        recipe.promoterObj = 'UNKNOWN'
    }
    //Asignar el objeto rbs a la variable rbsObj
    var rbsObj = yield rbsBll.getById(recipe.RBS);
    if (rbsObj) {
        recipe.rbsObj = rbsObj;
    } else {
        recipe.rbsObj = 'UNKNOWN'
    }
    //Asignar el objeto cds a la variable cdsObj
    var cdsObj = yield cdsBll.getById(recipe.CDS);
    if (cdsObj) {
        recipe.cdsObj = cdsObj;
    } else {
        recipe.cdsObj = 'UNKNOWN'
    }
    //Asignar el objeto terminator a la variable terminatorObj
    var terminatorObj = yield terminatorBll.getById(recipe.Terminators);
    if (terminatorObj) {
        recipe.terminatorObj = terminatorObj;
    } else {
        recipe.terminatorObj = 'UNKNOWN'
    }

  return recipe;
};
