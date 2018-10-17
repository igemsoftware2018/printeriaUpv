const schema = require('./util/schema');
var userDto = {
  email: {
    type: String,
    required: true,
  },
  username: {
    type: String,
    required: true,
  },
  password: {
    type: String,
    required: true,
  },
  verified: {
    type: Boolean,
    default: false,
  },
  admin: {
    type: Boolean,
    default: false,
  },
  active: {
    type: Boolean,
    default: true,
  },
  creationDate: {
    type: Date,
    default: new Date,
  },
  lastLogin: {
    type: Date,
    default: new Date,
  },
  personalInfo: {
    name: {
      type: String,
      required: false,
    },
    lastname: {
      type: String,
      required: false,
    },
  },
  configuration: {
    coldzoneTemperature:{  type:Number, default: 16,},
    coldzoneTime:{         type:Number, default: 4,},
    hotzoneTemperature:{   type:Number, default: 37,},
    hotzoneTime:{          type:Number, default: 3,},
  },
};

exports.schema = {
  mongoose: schema.toMongoose(userDto),
};
