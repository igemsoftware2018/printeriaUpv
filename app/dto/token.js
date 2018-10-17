const schema = require('./util/schema');
var tokenPasswordDto = {
  idUser: {
    type: String,
    required: true,
  },
  time: {
    type: Date,
    required: true,
  },
};

exports.schema = {
  mongoose: schema.toMongoose(tokenPasswordDto),
};
