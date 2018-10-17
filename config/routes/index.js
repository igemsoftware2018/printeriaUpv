'use strict';

const fs = require('fs');
const path = require('path');

function requireFiles(files, filesPath, app) {
  for (let file of files) {
    if (file.indexOf('.js') !== -1) {
      let filePath = path.join(filesPath, file);
      const route = require('./' + filePath);
      route(app);
    }
  }
}

module.exports = function (app) {
  const routesPath = './';

  const apiRoutesPath = path.join(routesPath, 'api');
  const frontRoutesPath = path.join(routesPath, 'front');
  const errorRoutesPath = path.join(routesPath, 'error');

  const apiRoutesFiles = fs.readdirSync(path.join(__dirname, apiRoutesPath));
  const frontRoutesFiles = fs.readdirSync(path.join(__dirname, frontRoutesPath));
  const errorRoutesFiles = fs.readdirSync(path.join(__dirname, errorRoutesPath));

  requireFiles(apiRoutesFiles.reverse(), apiRoutesPath, app);
  requireFiles(frontRoutesFiles, frontRoutesPath, app);
  requireFiles(errorRoutesFiles, errorRoutesPath, app);
};
