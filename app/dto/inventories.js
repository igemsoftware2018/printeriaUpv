const schema = require('./util/schema');
var inventoryDto = {
  c1: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c2: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c3: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c4: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c5: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c6: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c7: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c8: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c9: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c10: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c11: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c12: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c13: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c14: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c15: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c16: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c17: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c18: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c19: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c20: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c21: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c22: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c23: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c24: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  },
  c25: {
    typePart:{
      type: String,
      default: ''
    },
    idPart:{
      type: String,
      default: ''
    },
    filled:{
      type: Boolean,
      default: false
    }
  }
};

exports.schema = {
  mongoose: schema.toMongoose(inventoryDto),
};
