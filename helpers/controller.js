const error = require('./error');

exports.handleError = function (req, res) {
  return function (err) {
    console.error(err.stack != null ? err.stack : err.message, err.data);
    error.sendError(req, res, err);
  };
};
