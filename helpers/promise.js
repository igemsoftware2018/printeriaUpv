exports.end = function endPromise(resolve, reject) {
  return function endPromiseIterator(err, res) {
    if (err) {
      reject(err);
    } else {
      resolve(res);
    }
  };
};
