var multer = require('multer');
var tempDir = require('os').tmpdir();

var defaults = {
  fieldSize: 10 * 1024 * 1024,
  tempDir: tempDir,
};

module.exports = function (config) {
  var multerOptions = {
    dest: config.tempDir || defaults.tempDir,
    limits: {
      fieldSize: config.fieldSize || defaults.fieldSize,
    },
  };

  return function (req, res, next) {
    var isPost;
    isPost = req.method === 'POST';
    if (req.isAuthenticated() && isPost) {
      return multer(multerOptions)(req, res, next);
    } else {
      return next();
    }
  };
};
