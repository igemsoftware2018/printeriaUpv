const nodemailer = require('nodemailer');
const smtpTransport = require('nodemailer-smtp-transport');
const mailConfig = require('../../config/config/config.json').mail;
const endPromise = require('../../helpers/promise').end;

const BluebirdPromise = require('bluebird');

exports.sendEmail = function* (mailOptions) {
  const transport = nodemailer.createTransport(
    smtpTransport({
      host: mailConfig.host,
      port: mailConfig.port,
      auth: {
        user: mailConfig.username,
        pass: mailConfig.password,
      },
    })
  );
  return new BluebirdPromise(function (resolve, reject) {
    transport.sendMail(mailOptions, endPromise(resolve, reject));
  });
};//sendEmail
