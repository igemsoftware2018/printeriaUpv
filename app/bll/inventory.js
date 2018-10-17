'use strict';

const datapool = require('../datapool');
const inventoriesRepository = datapool.getRepository('inventories');
const userBll = require('./user');
const promoterBll = require('./promoter');
const cdsBll = require('./cds');
const rbsBll = require('./rbs');
const terminatorBll = require('./terminator');

exports.update = function* update(obj, user) {
  return yield inventoriesRepository.update(obj);
};

exports.getById = function* getById() {
  var inventory = yield inventoriesRepository.getById();
  for(var index = 1; index < 26; ++index) {
    inventory['c' + index].void = true;
    if(inventory['c' + index].typePart == 'promoter'){
      inventory['c' + index].obj = yield promoterBll.getById(inventory['c' + index].idPart)
      inventory['c' + index].type = 'promoter'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'cds'){
      inventory['c' + index].obj = yield cdsBll.getById(inventory['c' + index].idPart)
      inventory['c' + index].type = 'cds'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'rbs'){
      inventory['c' + index].obj = yield rbsBll.getById(inventory['c' + index].idPart)
      inventory['c' + index].type = 'rbs'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'terminator'){
      inventory['c' + index].obj = yield terminatorBll.getById(inventory['c' + index].idPart)
      inventory['c' + index].type = 'terminator'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'bacteria'){
      var bacteria = {
        name: 'Bacteria'
      }
      inventory['c' + index].obj = bacteria
      inventory['c' + index].type = 'bacteria'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 't4DnaLigase'){
      var t4DnaLigase = {
        name: 'T4 DNA Ligase'
      }
      inventory['c' + index].obj = t4DnaLigase
      inventory['c' + index].type = 't4DnaLigase'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'bsaIEndonuclease'){
      var bsaIEndonuclease = {
        name: 'BsaI Endonuclease'
      }
      inventory['c' + index].obj = bsaIEndonuclease
      inventory['c' + index].type = 'bsaIEndonuclease'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'reactionBuffer'){
      var reactionBuffer = {
        name: 'Reaction Buffer'
      }
      inventory['c' + index].obj = reactionBuffer
      inventory['c' + index].type = 'reactionBuffer'
      inventory['c' + index].void = false;
    }
    if(inventory['c' + index].typePart == 'cleaning'){
      var cleaning = {
        name: 'Cleaning Cartridge'
      }
      inventory['c' + index].obj = cleaning
      inventory['c' + index].type = 'cleaning'
      inventory['c' + index].void = false;
    }
  }
  return inventory;

};


exports.uploadCSV = function* uploadCSV(msg, reqUser) {
      return new Promise(function(resolve, reject) {
      var argString = msg.value
      console.log("VALOR DE ARGSTRING "+argString)
      var util = require('util')
      var exec = require('child_process').exec;
      var child;
      var str = 'python ~/Desktop/printeria2018/python/partsToLoad/loadPartsFromUI.py'+' '+argString;
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
        console.log("VALOR DE RES")
        console.log(res)
        return resolve(res);
      }, 2000);
    })
};




