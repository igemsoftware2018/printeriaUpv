'use strict';
const wrap = require('co-express');
const ObjectID = require('mongodb').ObjectID

module.exports = function (app, config) {

  const userController = require('../../../app/controllers/api/user');
  const fileUpload = require('express-fileupload');

  // default options
  app.use(fileUpload());

  app.post('/api/users/contador', wrap(userController.contador));


  app.put('/api/users/:id', wrap(userController.update));
  app.get('/api/users', wrap(userController.getUsers));
  app.delete('/api/users/:id', wrap(userController.delete));
  app.post('/api/users/uploadphoto', function editPhoto(req, res) {
    if (!req.files){
      return res.status(400).send('No files were uploaded.');
    }
    let sampleFile = req.files.image_file;
    var direction = __dirname.substring(0, __dirname.indexOf('config')) + '/public/images_plantlabco/users/';
    var name = new ObjectID() + "-" + req.files.image_file.name;
    sampleFile.mv(direction + name, function(err) {
      if (err){
        return res.status(500).send(err);
      }
      res.send('/images_plantlabco/users/'+name);
    });
  });
  app.get('/api/users/name/:username', wrap(userController.getByName));
  app.post('/api/users/reverifyEmail/:email', wrap(userController.reverifyEmail));
  app.post('/api/users', wrap(userController.create));
  app.post('/api/users/update-password', wrap(userController.updatePassword));
};
