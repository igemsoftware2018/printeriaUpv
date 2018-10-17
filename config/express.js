/**
* Express configuration file
*/

var compression = require('compression');
var favicon = require('serve-favicon');
var serveStatic = require('serve-static');
var morgan = require('morgan');
var session = require('express-session');
var sessionStore = require('./middlewares/session-store');
var bodyParser = require('body-parser');
var multer = require('./multer');
var passport = require('passport');
var log4js = require('log4js');
var flash = require('connect-flash');
var expressValidator = require('express-validator');
var cors = require('cors');
var i18n = require('i18next');
var i18nMiddleware = require('i18next-express-middleware');
var logger = log4js.getLogger('access');

/**
* Middleware - set in jade useful data
*/
function jadeLocals(config) {
  return function (req, res, next) {
    res.locals.loggedUser = req.user;

    // Translation and culture object
    var lang = (req.user && req.user.configuration && req.user.configuration.language)
    ? req.user.configuration.language
    : config.language;
    var translationPath = '../locales/' + lang + '/translation.json';

    try {
      res.locals.translations = JSON.stringify(require(translationPath))
      .replace(/'/g, '&#39')
      .replace(/\\n/g, '<br>');
    } catch (e) {
      console.error(e.stack);
      res.locals.translations = '{}';
    }

    res.locals.culture = JSON.stringify({
      language: lang,
      shortLanguage: lang.split('-')[0],
    });

    next();
  };
}

/**
* Module exports - Configure function
*/
module.exports = function (app, config) {
  app.use(cors({ origin: '*' }));
  app.options('*', cors());

  mySessionStore = sessionStore(config, session);

  // Port
  app.set('port', config.port);

  // Views and engine
  app.set('views', config.root + '/app/views');
  app.set('view engine', 'jade');
  app.use(compression());
  app.use(serveStatic(config.root + '/public'));
  app.use(serveStatic(config.root + '/template_2018'));
  app.use(serveStatic(config.root + '/python'));
  app.use(serveStatic(config.root + '/locales'));
  app.use(favicon(config.root + '/public/images/favicon.png'));
  app.disable('x-powered-by');

  morgan.format('mydate', function () {
    var df = require('console-stamp/node_modules/dateformat');
    return df(new Date(), 'dd/mm/yyyy HH:MM:ss');
  });

  morgan.format('user', function (req) {
    var user = req.user ? req.user.email : '';
    return user;
  });

  morgan.format('statusColored', function (req, res) {
    var status = res.statusCode ? res.statusCode : null;
    var color = 32;

    if (status >= 500) color = 31;
    else if (status >= 400) color = 33;
    else if (status >= 300) color = 36;

    return '\x1b[' + color + 'm' + status;
  });

  morgan.format('size', function (req, res) {
    var len = parseInt(res.getHeader('Content-Length'), 10);
    len = isNaN(len) ? '' : len = bytesToSize(len);

    return len;
  });

  function bytesToSize(bytes) {
    var sizes = ['Bytes', 'KB', 'MB', 'GB', 'TB'];
    if (bytes === 0) return 'n/a';
    var i = parseInt(Math.floor(Math.log(bytes) / Math.log(1024)));
    if (i === 0) return bytes + ' ' + sizes[i];
    return (bytes / Math.pow(1024, i)).toFixed(1) + ' ' + sizes[i];
  }

  morgan.format('ip', function (req, res) {
    var ip = req.headers['x-forwarded-for'] ||
    req.connection.remoteAddress ||
    req.socket.remoteAddress || '';

    return ip;
  });

  app.use(morgan('\x1b[90m:method :url :statusColored \x1b[35m:size :response-time ms - \x1b[37m:ip :user',  {
    format: 'default',
    stream: {
      write: function (data) {
        logger.info(data.trim());
      },
    },
  }));

  app.use(session({
    secret: config.cookie.secret,
    resave: false,
    saveUninitialized: false,
    store: mySessionStore,
    cookie: {
      secure: false, // TODO set to true when only HTTPS access
      maxAge: 1 * 24 * 60 * 60 * 1000,
    },
  }));

  app.use(bodyParser.json({ limit: '50mb' }));
  app.use(bodyParser.urlencoded({ extended: true, limit: '50mb' }));
  app.use(expressValidator());
  app.use(passport.initialize());
  app.use(passport.session());
  // app.use(multer(config));
  app.use(i18nMiddleware.handle(i18n));
  app.use(flash());
  app.use(jadeLocals(config));

  // i18n middleware
  app.use(function (req, res, next) {
    var language;

    if (req.user && req.user.configuration && req.user.configuration.language) {
      language = req.user.configuration.language;
    } else {
      language = config.language;
    }

    req.i18n.changeLanguage(language);

    next();
  });

  app.use(function (req, res, next) {
    if (req.user && req.session && req.session.currentClientInfo) {
      res.locals.currentClientInfo = req.session.currentClientInfo;
    }

    next();
  });
};
