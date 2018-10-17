'use strict';

const datapool = require('../datapool');
const activitiesRepository = datapool.getRepository('activities');

exports.create = function* activitiesCreate(activity, user) {
  activity.idUser = user._id;
  activity.time = new Date();
  console.log(activity)
  return yield activitiesRepository.create(activity);
};

exports.getAll = function* activitiesGet(user) {
  return yield activitiesRepository.get(user);
};

exports.markAsRead = function* activitiesMarkAsRead(type, user) {
  return yield activitiesRepository.markAsRead(type, user);
};
