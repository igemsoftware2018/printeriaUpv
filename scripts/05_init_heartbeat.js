var util = require('util')
var exec = require('child_process').exec;
var child;

/* SET INTERVAL */

setInterval(function(){ 

/* CHECK EVERY MINUTE */

	/* JOB CHECKING */
	/////////////////////////////////////////////////////
	// - If there are jobs in execution, do nothing
	// - else, pop next job changing its status to doing
	// taking into account that the parts are available
	/////////////////////////////////////////////////////

	var res = ''
	var str = 'python ~/Desktop/printeria2018/python/printJob/checkJobs.py'
	child = exec(str, function (error, stdout, stderr) {
	  util.print('stdout: ' + stdout);
	  util.print('stderr: ' + stderr);
	  if (error !== null) {
	    console.log('exec error: ' + error);
	  }
	});

	

}, 5000);




setInterval(function test(){
	var res = ''
	var str = 'python ~/Desktop/printeria2018/python/printJob/finishJob.py'
	child = exec(str, function (error, stdout, stderr) {
	  util.print('stdout: ' + stdout);
	  util.print('stderr: ' + stderr);
	  if (error !== null) {
	    console.log('exec error: ' + error);
	  }
	});
},5000)


