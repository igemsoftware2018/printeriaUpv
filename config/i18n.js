var i18n = require('i18next');
var i18nextMiddleware = require('i18next-express-middleware');
var FilesystemBackend = require('i18next-node-fs-backend');

module.exports = function (app, config) {
  i18n
    .use(i18nextMiddleware.LanguageDetector)
    .use(FilesystemBackend)
    .init({
      detection: {
        order: ['cookie'],
        lookupCookie: 'lang',
        caches: ['cookie'],
      },
      debug: false,
      saveMissing: true,
      sendMissingTo: 'fallback',
      fallbackLng: config.language,
      backend: {
        loadPath: 'locales/{{lng}}/{{ns}}.json',
      },
      preload: ['en-US', 'es-ES'],
    });
};
