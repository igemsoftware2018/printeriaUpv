const schema = require('./util/schema');
var chassisDto = {
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
  genotype: {
    type: String,
    required: true
  }
};

exports.schema = {
  mongoose: schema.toMongoose(chassisDto),
};
