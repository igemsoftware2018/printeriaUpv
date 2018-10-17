'use strict';

const wrap = require('co-express');
const co = require('co');
const passport = require('passport');
const userController = require('../../../app/controllers/front/user');
const handleError = require('../../../helpers/controller').handleError;

function isLoggedIn(req, res, next) {
  if (req.isAuthenticated()) {return next();}
  res.redirect('/');
}

function isCorrectUser(req, res, next) {
  if (req.params.idUser.toString() === req.user._id.toString()) {return next();}
  res.redirect('/log-out');
}

function isVerified(req, res, next) {
  if (req.user.verified) {return next();}
  res.redirect('/activate-account-reverify?email=' + req.user.email + '&token=false');
}

function setTimeSession(req, res, next) {
  if (req.body.remCredentials === true) {
    req.session.cookie.maxAge = 100 * 365 * 24 * 60 * 60 * 1000;
  } else {
    req.session.cookie.expires = false;
  }
  return next();
}

//Redireccion de rutas
module.exports = function (app, config) {

  app.get('/defaultsite', function (req, res) {
    res.redirect('/');
  });
  app.get('/', function (req, res) {
    res.render('vista-usuario/login/index.jade', {
    });
  });
  app.get('/login', function (req, res) {
    res.render('vista-usuario/login/index.jade', {
    });
  });
  app.post('/login', setTimeSession, passport.authenticate('local-login'), function (req, res) {
    res.send({
      userId: req.user._id
    });
  });

  //Log in aux
  app.get('/activate-account', wrap(userController.verifyEmail));
  app.get('/activate-account-reverify', wrap(userController.reverifyEmail));

  //LogOut
  app.get('/log-out', isLoggedIn, function (req, res) {
    req.logout();
    res.redirect('/');
  });

  // RUTAS PRINTERIA
  app.get('/users/:idUser/historical-activities', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/historical-activities/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/historical-activities/:idJob', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/historical-activities-results/index.jade', {
      user: req.user,
      idJob: req.params.idJob
    });
  });
  app.get('/users/:idUser/new-job', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/new-job/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/new-job/:idJob', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/new-job/index.jade', {
      user: req.user,
      idJob: req.params.idJob
    });
  });
  app.get('/users/:idUser/modeling/:idJob', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/modeling/index.jade', {
      user: req.user,
      idJob: req.params.idJob
    });
  });
  app.get('/users/:idUser/modeling/', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/modeling/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/recipe', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/recipe/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/recipe/:idRecipe', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/recipe-details/index.jade', {
      user: req.user,
      idRecipe: req.params.idRecipe
    });
  });
  app.get('/users/:idUser/inventory', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/inventory/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/profile', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/profile/index', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/activities', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-usuario/activities/index', {
      user: req.user,
    });
  });


  app.get('/users/:idUser/parts', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-administrador/parts/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/statics', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-administrador/statics/index.jade', {
      user: req.user,
    });
  });
  app.get('/users/:idUser/admin-users', isLoggedIn, isVerified, isCorrectUser, function (req, res) {
    res.render('vista-administrador/admin-users/index.jade', {
      user: req.user,
    });
  });

};
