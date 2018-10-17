const schema = require('./util/schema');
var jobsrecipesDTO = {
  idUser: {
    ref: 'User',
  },
  creationDate: {
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
  multicycle:{
    // cycle0:{
    //   hotzoneTemperature: 37, 
    //   hotzoneTime: 10,
    //   cycleType: 'hot'
    // },
    // cycle1:{
    //   repetitions: 25,
    //   hotzoneTemperature: 37, 
    //   hotzoneTime: 3,
    //   coldzoneTemperature: 16,
    //   coldzoneTime: 4,
    //   cycleType: 'full'
    // },
    // cycle2:{
    //   hotzoneTemperature: 50,
    //   hotzoneTime: 10,
    //   cycleType: 'hot'
    // }
  }
};

exports.schema = {
  mongoose: schema.toMongoose(jobsrecipesDTO),
};
