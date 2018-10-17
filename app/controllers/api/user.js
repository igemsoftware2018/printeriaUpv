'use strict';
var exports = module.exports = {};
const co = require('co');
const handleError = require('../../../helpers/controller').handleError;

const userBll = require('../../bll/user');


exports.contador = function blogGetAll(req, res) {
  co(function* () {
    const result = yield userBll.getUsers();
    var reslength = result.length
    res.send({value:reslength});
  }).catch(handleError(req, res));
};

exports.create = function* userCreate(req, res) {
    const email = req.body.email;
    const username = req.body.personalInfo.name;
    const userByEmail = yield userBll.getByEmail(email);
    const userByUsername = yield userBll.getByUsername(email);

    if (userByEmail === null && userByUsername == null) {
      const user = req.body;
      const result = yield userBll.create(user);
      res.send(result);
    } else {
      res.send({
        error: true,
        data: 'IN_USE',
        hola:"hola"
      });
    }
};

exports.update = function* userUpdate(req, res) {
  const userId = req.params.id;
  const user = req.body.user;
  const result = yield userBll.update(userId, user);
  res.send(result);
};
exports.updatePassword = function* userUpdate(req, res) {
  const password = req.body.password;
  const result = yield userBll.updatePassword(password, req.user);
  res.send(result);
};

exports.delete = function* userDelete(req, res) {
  const user = req.params.id;
  const result = yield userBll.delete(user);
  res.send(result);
};

exports.getUsers = function* userGet(req, res) {
  const result = yield userBll.getUsers(req.user);
  res.send(result);
};

exports.getByName = function* userGet(req, res) {
  const name = req.params.username;
  const result = yield userBll.getByUsername(name);
  delete result.password;
  delete result.notebooks
  delete result.admin
  delete result.verified
  delete result.email
  delete result.creationDate
  res.send(result);
};


exports.reverifyEmail = function* userGet(req, res) {
  const email = req.params.email;
  const result = yield userBll.reverifyEmail(email);
  res.send(result);
};

var fs = require("fs");
var util = require("util");
var mime = require("mime");

function base64Image(src) {
  var data = fs.readFileSync(src).toString("base64");
  return util.format("data:%s;base64,%s", mime.lookup(src), data);
}

exports.editPhoto = function* userGet(req, res) {
  var dataUri = base64Image(req.files.file.path);
  const result = yield userBll.updateImage(dataUri, req.user);
  res.send(dataUri);
};
