const schema = require('./util/schema');
var activityDto = {
  idUser: {
    ref: 'User',
  },
  creationDate: {
    type: Date,
    default: new Date,
  },
  startTime: {
    type: Date,
    default: new Date,
  },
  finishTime: {
    type: Date,
    default: new Date,
  },
  name: {
    type: String,
    required: true,
  },
  description: {
    type: String,
    required: true,
  },
  Promoters: {
    ref: 'Promoters',
  },
  RBS: {
    ref: 'RBS',
  },
  CDS: {
    ref: 'CDS',
  },
  Terminators: {
    ref: 'Terminators',
  },
  coldzoneTemperature:{  type:Number, required: true,},
  coldzoneTime:{         type:Number, required: true,},
  hotzoneTemperature:{   type:Number, required: true,},
  hotzoneTime:{          type:Number, required: true,},
  multicycle:{},
  idRecipe: {
    ref: 'Recipes'
  },
  status: {
    type: String,
    default: 'toDo'
  },
   executable: {
    type: Boolean,
    required: true
  }
};

exports.schema = {
  mongoose: schema.toMongoose(activityDto),
};
