'use strict';
const CronJob = require('cron').CronJob;
const logger = require('log4js').getLogger();

function createCronJob(config) {
  if (!config) {
    throw new Error('Tried to create CronJob without config');
  }

  try {
    new CronJob(config);
  } catch (err) {
    throw err;
  }
}

function createCronJobGateKeeper(config) {
  try {
    const gatekeeper = config.gatekeeper;
    if (gatekeeper.enabled !== true) {
      return;
    }

    const jobConfig = {
      onTick: require('./scripts/workerbatch/gateKeeper'),
      cronTime: gatekeeper.exechour,
      onComplete: null,
      start: true,
      timeZone: null,
      context: null,
    };
    createCronJob(jobConfig);
    logger.debug('Cron: Job "gatekeeper" created ok. Time: "' + gatekeeper.exechour + '"');
  } catch (err) {
    logger.error('Cron: Error creating "gatekeeper" job. Error is: ' + err.stack);
  }
}

function createConfigJob(job) {
  const name = job.name;
  if (job.disabled === true) {
    logger.debug('Cron: Job "' + name + '" disabled');
    return;
  }

  let handler = job.handler;
  const time = job.time;
  const prop = job.prop;
  const args = job.args;
  if (prop) {
    handler = require(handler)[prop];
  } else {
    handler = require(handler);
  }

  if (args) {
    const _handler = handler;
    handler = function () {
      const _job = job;
      try {
        _handler.apply(null, args);
      } catch (e) {
        logger.error(_job);
        logger.error(e);
      }
    };
  }

  const jobConfig = {
    onTick: handler,
    cronTime: time,
    onComplete: null,
    start: true,
    timeZone: null,
    context: null,
  };
  return jobConfig;
}

function main(config) {
  const jobs = config.jobs;
  logger.debug('Cron: Are ' + jobs.length + ' jobs for cron. Creating...');
  for (let job of jobs) {
    try {
      const jobConfig = createConfigJob(job);
      createCronJob(jobConfig);
      logger.debug('Cron: Job "' + job.name + '" created ok. Time: "' + jobConfig.cronTime + '"');
    } catch (error) {
      logger.error('Cron: Error creating "' + job.name + '" job. Error is: ' + error.stack);
    }
  }

  logger.debug('Cron: All jobs created');
}

module.exports = main;
