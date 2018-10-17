const schema = require('./util/schema');

var activityDto = {
  idUser: {       ref: 'Use ', },
  time: {         type: Date, required: true, },
  table: {         type: String, required: true, },
  action: {         type: String, required: true, },
  description: {  type: String, default: '', },
  readed: {       type: Boolean,  default: false, }
};

exports.schema = {
  mongoose: schema.toMongoose(activityDto),
};
