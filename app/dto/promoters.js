const schema = require('./util/schema');
var promoterDto = {
  idUser: {
    ref: 'User',
  },
  date: {
    type: Date,
    default: new Date(),
  },
  name: {
    type: String,
    required: true,
  },
  description: {
    type: String,
    required: true,
  },
  quantity: {
    type: Number,
    required: true,
  },
  category: {
    type: String,
    required: true,
  },
  lengthBP: {
    type: Number,
    required: true,
  },
  type: {
    type: String,
    required: true,
  },
  r: {
    type: Number,
    required: true,
  },
  dm: {
    type: Number,
    required: true,
  }
};

exports.schema = {
  mongoose: schema.toMongoose(promoterDto),
};
