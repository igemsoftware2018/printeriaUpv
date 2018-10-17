window.t = function (k, replaces) {
  try {
    var keys = k.split('.');
    var translated;
    for (var i = 0; i < keys.length; i++) {
      if (i === 0) {
        translated = window.translations[keys[i]];
      } else {
        translated = translated[keys[i]];
      }

      if (typeof (translated) === 'string') {
        if (replaces !== undefined && typeof (replaces) === 'object') {
          for (var key in replaces) {
            if (replaces.hasOwnProperty(key)) {
              var textToReplace = replaces[key];
              translated = translated.replace('__' + key + '__', textToReplace);
            }
          }
        }

        return translated;
      }
    }

    console.warn('Key not found to translate:', k);
    return k;
  }
  catch (e) {
    console.error(e.message);
    return k;
  }
};
