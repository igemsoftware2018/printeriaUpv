const errorType = require('../app/enums/error-type');

exports.create = function (flag, message, data) {
  var stack;
  stack = new Error().stack;
  return {
    flag: flag,
    message: message === undefined ? flag : message,
    data: data === undefined ? {} : data,
    toString: function () {
      return [
        '----- ERROR START ------------------------',
        ' flag: ' + flag,
        'message: ' + message,
        'data: ' + data,
        'stack: ' + stack,
        '----- ERROR END ------------------------',
      ].join('\n');
    },
  };
};

exports.showFront = function (req, res, type, message, data) {
  var error;
  error = parseError(req, res, type, message, data);
  return res.status(error.type).render('error', {
    error: error,
  });
};
