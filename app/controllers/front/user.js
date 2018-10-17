'use strict';
const userBll = require('../../bll/user');
var exports = module.exports = {};

exports.verifyEmail = function* userVerifyEmail(req, res) {
  let email = req.query.email;
  let token = req.query.token;
  let response = yield userBll.verifyEmail(email, token);
  res.render('vista-usuario/check-email/successful.jade', response);
};

exports.reverifyEmail = function* userVerifyEmail(req, res) {
  let email = req.query.email;
  res.render('vista-usuario/check-email/reverify.jade', { email: email });
};
