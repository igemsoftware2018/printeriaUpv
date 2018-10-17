'use strict';

const datapool = require('../datapool');
const jobsRepository = datapool.getRepository('jobs');
const userRepository = datapool.getRepository('user');
const userBll = require('./user');
const promoterBll = require('./promoter');
const rbsBll = require('./rbs.js');
const cdsBll = require('./cds.js');
const terminatorBll = require('./terminator.js');
const Promise = require('bluebird');
const activitiesBll = require('./activities');


exports.save = function* save(obj, user) {
    obj.idUser = user._id
    obj.executable = false
    obj.multicycle = obj.multicycle

    var today = new Date();
    var finish = new Date();

    obj.creationDate = today;
    Date.prototype.addHours = function(h) {    
    this.setTime(this.getTime() + (h*60*60*1000)); 
    return this;   
    }
    finish.addHours(3.5)
    obj.finishTime = finish;

    return yield jobsRepository.create(obj);
};

function compareDate(a, b) {
    if (a.creationDate > b.creationDate)
        return -1;
    if (a.creationDate < b.creationDate)
        return 1;
    return 0;
}

exports.getAll = function* getAll() {
    // toDo: método que valida si en el inventario puede hacerse
    var jobs = yield jobsRepository.getAll();
    jobs = jobs.sort(compareDate);
    var user = {};
    for (var index = 0; index < jobs.length; ++index) {
        var user = yield userBll.getById(jobs[[index]].idUser);
        if (user) {
            jobs[[index]].owner = user.username;
        } else {
            jobs[[index]].owner = 'UNKOWN'
        }
        //Asignar el objeto promoter a la variable promoterObj
        var promoterObj = yield promoterBll.getById(jobs[[index]].Promoters);
        if (promoterObj) {
            jobs[[index]].promoterObj = promoterObj;
        } else {
            jobs[[index]].promoterObj = 'UNKNOWN'
        }
        //Asignar el objeto rbs a la variable rbsObj
        var rbsObj = yield rbsBll.getById(jobs[[index]].RBS);
        if (rbsObj) {
            jobs[[index]].rbsObj = rbsObj;
        } else {
            jobs[[index]].rbsObj = 'UNKNOWN'
        }
        //Asignar el objeto cds a la variable cdsObj
        var cdsObj = yield cdsBll.getById(jobs[[index]].CDS);
        if (cdsObj) {
            jobs[[index]].cdsObj = cdsObj;
        } else {
            jobs[[index]].cdsObj = 'UNKNOWN'
        }
        //Asignar el objeto terminator a la variable terminatorObj
        var terminatorObj = yield terminatorBll.getById(jobs[[index]].Terminators);
        if (terminatorObj) {
            jobs[[index]].terminatorObj = terminatorObj;
        } else {
            jobs[[index]].terminatorObj = 'UNKNOWN'
        }
    }

    return jobs;
};

exports.getById = function* getById(jobId) {
    var job = yield jobsRepository.getById(jobId);
    var user = yield userBll.getById(job.idUser);
    if (user) {
        job.owner = user.username;
    } else {
        job.owner = 'UNKOWN'
    }
    //Asignar el objeto promoter a la variable promoterObj
    var promoterObj = yield promoterBll.getById(job.Promoters);
    if (promoterObj) {
        job.promoterObj = promoterObj;
    } else {
        job.promoterObj = 'UNKNOWN'
    }
    //Asignar el objeto rbs a la variable rbsObj
    var rbsObj = yield rbsBll.getById(job.RBS);
    if (rbsObj) {
        job.rbsObj = rbsObj;
    } else {
        job.rbsObj = 'UNKNOWN'
    }
    //Asignar el objeto cds a la variable cdsObj
    var cdsObj = yield cdsBll.getById(job.CDS);
    if (cdsObj) {
        job.cdsObj = cdsObj;
    } else {
        job.cdsObj = 'UNKNOWN'
    }
    //Asignar el objeto terminator a la variable terminatorObj
    var terminatorObj = yield terminatorBll.getById(job.Terminators);
    if (terminatorObj) {
        job.terminatorObj = terminatorObj;
        //console.log(job.terminatorObj)
    } else {
        job.terminatorObj = 'UNKNOWN'
    }
    return job;
};


exports.modelling = function* modeling(msg, reqUser) {
    return new Promise(function(resolve, reject) {
      if(msg.modelingParams.modelingType == "mc"){
        var argString = msg.Promoters+','+msg.RBS+','+msg.CDS+','+msg.Terminators+','+msg.modelingParams.mu+','+msg.modelingParams.cn+','+msg.modelingParams.kmax
      }
      if(msg.modelingParams.modelingType == "araC"){
        var argString = msg.Promoters+','+msg.RBS+','+msg.CDS+','+msg.Terminators+','+msg.modelingParams.mu+','+msg.modelingParams.cn+','+msg.modelingParams.kmax+','+msg.modelingParams.lArabinose
      }
      if(msg.modelingParams.modelingType == "luxR"){
        var argString = msg.Promoters+','+msg.RBS+','+msg.CDS+','+msg.Terminators+','+msg.modelingParams.mu+','+msg.modelingParams.cn+','+msg.modelingParams.kmax+','+msg.modelingParams.ahl
      }
      console.log(argString)
      var util = require('util')
      var exec = require('child_process').exec;
      var child;
      var str = 'python ~/Desktop/printeria2018/python/modeling/simulate.py'+' '+argString;
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
        res = res.trim();
        res = res.replace( /\r?\n|\r/g,",");
        console.log(res)
        return resolve(res);
      }, 2000);
    })
};

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


 // return new Promise(function(resolve, reject) {
 //    // Execute the command, reject if we exit non-zero (i.e. error)
 //    sh.exec(cmd, opts, function(code, stdout, stderr) {
 //      if (code != 0) return reject(new Error(stderr));
 //      return resolve(stdout);
 //    });
 //  });


exports.deleteJob = function* deleteJob(jobId) {
    var job = yield jobsRepository.getById(jobId);
    return yield jobsRepository.deleteJob(job._id);
}



exports.update = function* update(jobId, job) {


    var newJob = yield jobsRepository.update(jobId, job);

    var usuario = yield userRepository.getById(newJob.idUser);

    // - Se registra la actividad de la tarea realizada
    var activity = {
    table: 'jobs',
    action: 'update'
    };
    yield activitiesBll.create(activity, usuario);

    return newJob;
};
