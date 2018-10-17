printeriaApp.controller('inventoryController', function(
  $scope,
  $http,
  $window,
  promoterService,
  rbsService,
  cdsService,
  terminatorService,
  inventoryService,
  chassisService
) {

  function serverError() {
    toastr.error("Server error");
  }

  $scope.changeelementPromoter = function(b){
    $scope.promoter = b
  }
  $scope.changeelementRbs = function(b){
    $scope.rbs = b
  }
  $scope.changeelementCds = function(b){
    $scope.cds = b
  }
  $scope.changeelementTerminator = function(b){
    $scope.terminator = b
  }

  
  $scope.promoter = {
    name: '',
    description: '',
    category: '',
    lengthBP: 200,
    type: 't',
    quantity: 0.3,
    r: 600,
    dm: 0.256
  }

  $scope.rbs = {
    name: '',
    description: '',
    category: '',
    lengthBP: 0,
    quantity: 0.3
  }

  $scope.cds = {
    name: '',
    description: '',
    type: '',
    lengthBP: 720,
    quantity: 0.3,
    dp: 0.006,
    p: 3
  }

  $scope.terminator = {
    name: '',
    description: '',
    category: '',
    lengthBP: 0,
    quantity: 0.3
  }

  $scope.chassis = {
    name: 'chassisPrueba',
    description: 'chassisPrueba',
    genotype: []
  }

  $scope.csvTest
  $scope.show_guidelines = false;

  $scope.promUploaded = false;
  $scope.rbsUploaded = false;
  $scope.cdsUploaded = false;
  $scope.termUploaded = false;
  $scope.recipeUploaded = false;

  $scope.show_waiting

  $scope.modalPromoter = function(idPromoter) {
    for(var i = 0; i < $scope.allPromoters.length; i++){
      if(idPromoter == $scope.allPromoters[i]._id){
        $scope.modalPartPromoter = $scope.allPromoters[i];
      }
    }
  }

  $scope.modalRbs = function(idRbs) {
    for(var i = 0; i < $scope.allRbss.length; i++){
      if(idRbs == $scope.allRbss[i]._id){
        $scope.modalPartRbs = $scope.allRbss[i];
      }
    }
  }

  $scope.modalCds = function(idCds) {
    for(var i = 0; i < $scope.allCdss.length; i++){
      if(idCds == $scope.allCdss[i]._id){
        $scope.modalPartCds = $scope.allCdss[i];
      }
    }
  }

  $scope.modalTerminator = function(idTerminator) {
    for(var i = 0; i < $scope.allTerminators.length; i++){
      if(idTerminator == $scope.allTerminators[i]._id){
        $scope.modalPartTerminator = $scope.allTerminators[i];
      }
    }
  }


  $scope.init = function() {
    $scope.isANewPartInACartucho = false;
    inventoryService.getInventory()
    .then(function(data) {
      $scope.inventory = data;
      $scope.editableCartuchoId = 'c1';
      $scope.editableCartucho = $scope.inventory['c1']
    })
    promoterService.getPromoters()
    .then(function (data) {
      $scope.promoters = data
      $scope.allPromoters = data
      $scope.visiblePromoters = data
    })
    .catch(serverError);

    rbsService.getRbss()
    .then(function (data) {
      $scope.rbss = data
      $scope.allRbss = data
      $scope.visibleRbss = data
    })
    .catch(serverError);

    cdsService.getCdss()
    .then(function (data) {
      $scope.cdss = data
      $scope.allCdss = data
      $scope.visibleCdss = data
    })
    .catch(serverError);

    terminatorService.getTerminators()
    .then(function (data) {
      $scope.terminators = data
      $scope.allTerminators = data
      $scope.visibleTerminators = data
    })
    .catch(serverError)

    chassisService.getChassis()
    .then(function (data) {
      $scope.chassises = data
      $scope.allChassis = data
      $scope.visibleChassis = data
    })
    .catch(serverError)
  }

  $scope.resetInventory = function() {
  var defaultInventory = {};
  defaultInventory.c1 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c2 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c3 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c4 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c5 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c6 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c7 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c8 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c9 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c10 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c11 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c12 = {
    typePart: '',
    idPart: '',
    filled : false,
  };
  defaultInventory.c13 = {
    typePart: 'bacteria',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c14 = {
    typePart: 'bacteria',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c15 = {
    typePart: 't4DnaLigase',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c16 = {
    typePart: 't4DnaLigase',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c17 = {
    typePart: 'bsaIEndonuclease',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c18 = {
    typePart: 'bsaIEndonuclease',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c19 = {
    typePart: 'reactionBuffer',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c20 = {
    typePart: 'reactionBuffer',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c21 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c22 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c23 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c24 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };
  defaultInventory.c25 = {
    typePart: 'cleaning',
    idPart: '',
    filled : true,
    void: false
  };

  console.log(defaultInventory)

  inventoryService.saveInventory(defaultInventory)
          .then(function(data) {
            $window.location.reload();
          })
          .catch(serverError);
}


  $scope.setcartucho = function(id) {
    $scope.editableCartuchoId = id;
    $scope.editableCartucho = $scope.inventory[id]
  }

  $scope.createPromoter = function() {
    if ($scope.promoter.name != "" &&
    $scope.promoter.description != "" &&
    $scope.promoter.quantity != 0) {
      $scope.show_error = false;
      msg = $scope.promoter
      promoterService.savePromoter(msg)
      .then(function(data) {
        if($scope.isANewPartInACartucho){
          $scope.inventory[$scope.editableCartuchoId].idPart = data._id
          $scope.inventory[$scope.editableCartuchoId].typePart = 'promoter'
          $scope.inventory[$scope.editableCartuchoId].filled = true
          inventoryService.saveInventory($scope.inventory)
          .then(function(data) {
            $window.location.reload();
          })
          .catch(serverError);
        }
        $window.location.reload();
      })
      .catch(serverError);
    } else {
      $scope.show_error = true;
    }

  }

  $scope.createRbs = function() {
    if ($scope.rbs.name != "" &&
    $scope.rbs.description != "" &&
    $scope.rbs.quantity != 0) {
      $scope.show_error = false;
      msg = $scope.rbs
      rbsService.saveRbs(msg)
      .then(function(data) {
        if($scope.isANewPartInACartucho){
          $scope.inventory[$scope.editableCartuchoId].idPart = data._id
          $scope.inventory[$scope.editableCartuchoId].typePart = 'rbs'
          $scope.inventory[$scope.editableCartuchoId].filled = true
          inventoryService.saveInventory($scope.inventory)
          .then(function(data) {
            $window.location.reload();
          })
          .catch(serverError);
        }
        $window.location.reload();
      })
      .catch(serverError);
    } else {
      $scope.show_error = true;
    }
  }



  $scope.createCds = function() {
    if ($scope.cds.name != "" &&
    $scope.cds.description != "" &&
    $scope.cds.quantity != 0) {
      $scope.show_error = false;
      msg = $scope.cds
      cdsService.saveCds(msg)
      .then(function(data) {
        if($scope.isANewPartInACartucho){
          $scope.inventory[$scope.editableCartuchoId].idPart = data._id
          $scope.inventory[$scope.editableCartuchoId].typePart = 'cds'
          $scope.inventory[$scope.editableCartuchoId].filled = true
          inventoryService.saveInventory($scope.inventory)
          .then(function(data) {
            $window.location.reload();
          })
          .catch(serverError);
        }
        $window.location.reload();
      })
      .catch(serverError);
    } else {
      $scope.show_error = true;
    }
  }

  $scope.createTerminator = function() {
    if ($scope.terminator.name != "" &&
    $scope.terminator.description != "" &&
    $scope.terminator.quantity != 0) {
      $scope.show_error = false;
      msg = $scope.terminator
      terminatorService.saveTerminator(msg)
      .then(function(data) {
        if($scope.isANewPartInACartucho){
          $scope.inventory[$scope.editableCartuchoId].idPart = data._id
          $scope.inventory[$scope.editableCartuchoId].typePart = 'terminator'
          $scope.inventory[$scope.editableCartuchoId].filled = true
          inventoryService.saveInventory($scope.inventory)
          .then(function(data) {
            $window.location.reload();
          })
          .catch(serverError);
        }
        $window.location.reload();
      })
      .catch(serverError);
    } else {
      $scope.show_error = true;
    }
  }



   $scope.createChassis = function() {
    debugger;
    if ($scope.chassis.name != "" &&
    $scope.chassis.description != "" &&
    $scope.chassis.genotype != "") {
      $scope.show_error = false;
      msg = $scope.chassis
      console.log("ESTE ES EL CHASSIS "+msg)
      chassisService.saveChassis(msg)
      .then(function(data) {
        if($scope.isANewPartInACartucho){
          $scope.inventory[$scope.editableCartuchoId].idPart = data._id
          $scope.inventory[$scope.editableCartuchoId].typePart = 'chassis'
          $scope.inventory[$scope.editableCartuchoId].filled = true
          inventoryService.saveInventory($scope.inventory)
          .then(function(data) {
            $window.location.reload();
          })
          .catch(serverError);
        }
        $window.location.reload();
      })
      .catch(serverError);
    } else {
      $scope.show_error = true;
    }

  }

  $scope.addToGenotype = function() {
    $scope.chassis.genotype.push('');
  }

  $scope.searchPromotor = function(){
    if($scope.searchValuePromotor == ""){
      $scope.promoters = $scope.allPromoters
      $scope.visiblePromoters = $scope.promoters;
    }
    else{
      $scope.promoters = [];
      var puntero = 0
      for(var i=0; i<$scope.allPromoters.length; i++){
        if($scope.allPromoters[i].name.toLowerCase().includes($scope.searchValuePromotor.toLowerCase()) || $scope.allPromoters[i].category.toLowerCase().includes($scope.searchValuePromotor.toLowerCase())){
          $scope.promoters[puntero] = $scope.allPromoters[i];
          puntero = puntero +1
        }
      }
      $scope.visiblePromoters = $scope.promoters;
    };
  }

  $scope.searchRBS = function(){
    debugger;
    if($scope.searchValueRBS == ""){
      $scope.rbss = $scope.allRbss
      $scope.visibleRbss = $scope.rbss;
    }
    else{
      $scope.rbss = [];
      var puntero = 0
      for(var i=0; i<$scope.allRbss.length; i++){
        if($scope.allRbss[i].name.toLowerCase().includes($scope.searchValueRBS.toLowerCase()) || $scope.allRbss[i].category.toLowerCase().includes($scope.searchValueRBS.toLowerCase())){
          $scope.rbss[puntero] = $scope.allRbss[i];
          puntero = puntero +1
        }
      }
      $scope.visibleRbss = $scope.rbss;
    };
  }

  $scope.searchCDS = function(){
    if($scope.searchValueCDS == ""){
      $scope.cdss = $scope.allCdss
      $scope.visibleCdss = $scope.cdss;
    }
    else{
      $scope.cdss = [];
      var puntero = 0
      for(var i=0; i<$scope.allCdss.length; i++){
        if($scope.allCdss[i].name.toLowerCase().includes($scope.searchValueCDS.toLowerCase()) || $scope.allCdss[i].category.toLowerCase().includes($scope.searchValueCDS.toLowerCase())){
          $scope.cdss[puntero] = $scope.allCdss[i];
          puntero = puntero +1
        }
      }
      $scope.visibleCdss = $scope.cdss;
    };
  }

  $scope.searchTerminator = function(){
    if($scope.searchValueTerminator == ""){
      $scope.terminators = $scope.allTerminators
      $scope.visibleTerminators = $scope.terminators;
    }
    else{
      $scope.terminators = [];
      var puntero = 0
      for(var i=0; i<$scope.allTerminators.length; i++){
        if($scope.allTerminators[i].name.toLowerCase().includes($scope.searchValueTerminator.toLowerCase()) || $scope.allTerminators[i].category.toLowerCase().includes($scope.searchValueTerminator.toLowerCase())){
          $scope.terminators[puntero] = $scope.allTerminators[i];
          puntero = puntero +1
        }
      }
      $scope.visibleTerminators = $scope.terminators;
    };
  }


  $scope.choosePromoter = function() {
    if ($scope.promoter != "") {
      $scope.show_error = false;
      msg = $scope.promoter;
      if($scope.isANewPartInACartucho){
        $scope.inventory[$scope.editableCartuchoId].idPart = msg._id;
        $scope.inventory[$scope.editableCartuchoId].typePart = 'promoter'
        $scope.inventory[$scope.editableCartuchoId].filled = true
        inventoryService.saveInventory($scope.inventory)
        $window.location.reload();
      }
    } else {
      $scope.show_error = true;
    }

  }

  $scope.chooseCds = function() {
    if ($scope.cds != "") {
      $scope.show_error = false;
      msg = $scope.cds;
      if($scope.isANewPartInACartucho){
        $scope.inventory[$scope.editableCartuchoId].idPart = msg._id;
        $scope.inventory[$scope.editableCartuchoId].typePart = 'cds'
        $scope.inventory[$scope.editableCartuchoId].filled = true
        inventoryService.saveInventory($scope.inventory)
        $window.location.reload();
      }
    } else {
      $scope.show_error = true;
    }

  }

  $scope.chooseRbs = function() {
    if ($scope.rbs != "") {
      $scope.show_error = false;
      msg = $scope.rbs;
      if($scope.isANewPartInACartucho){
        $scope.inventory[$scope.editableCartuchoId].idPart = msg._id;
        $scope.inventory[$scope.editableCartuchoId].typePart = 'rbs'
        $scope.inventory[$scope.editableCartuchoId].filled = true
        inventoryService.saveInventory($scope.inventory)
        $window.location.reload();
      }
    } else {
      $scope.show_error = true;
    }

  }

  $scope.chooseTerminator = function() {
    if ($scope.terminator != "") {
      $scope.show_error = false;
      msg = $scope.terminator;
      if($scope.isANewPartInACartucho){
        $scope.inventory[$scope.editableCartuchoId].idPart = msg._id;
        $scope.inventory[$scope.editableCartuchoId].typePart = 'terminator'
        $scope.inventory[$scope.editableCartuchoId].filled = true
        inventoryService.saveInventory($scope.inventory)
        $window.location.reload();
      }
    } else {
      $scope.show_error = true;
    }

  }


  $scope.recharge = function() {
    $scope.inventory[$scope.editableCartuchoId].filled = true
    inventoryService.saveInventory($scope.inventory)
    .then(function(data) {
      $window.location.reload();
    })
    .catch(serverError);
  }

  $scope.delete = function() {
    $scope.inventory[$scope.editableCartuchoId].idPart = ""
    $scope.inventory[$scope.editableCartuchoId].typePart = ""
    $scope.inventory[$scope.editableCartuchoId].filled = false
    inventoryService.saveInventory($scope.inventory)
    .then(function(data) {
      $window.location.reload();
    })
    .catch(serverError);
  }

  $scope.editablePart = function() {
    if($scope.editableCartucho.type == 'promoter'){
      $scope.promoter = $scope.editableCartucho.obj;
    }

    if($scope.editableCartucho.type == 'rbs'){
      $scope.rbs = $scope.editableCartucho.obj;
    }

    if($scope.editableCartucho.type == 'cds'){
      $scope.cds = $scope.editableCartucho.obj;
    }

    if($scope.editableCartucho.type == 'terminator'){
      $scope.terminator = $scope.editableCartucho.obj;
    }
  }

// $scope.assignCSV = function(type){
//   switch(type) {
//     case 'prom':
//         $scope.radioCSV = 'promotercsv_file'
//         break;
//     case 'rbs':
//         $scope.radioCSV = 'rbscsv_file'
//         break;
//     case 'cds':
//         $scope.radioCSV = 'cdscsv_file'
//         break;
//     case 'term':
//         $scope.radioCSV = 'terminatorcsv_file'
//         break;
//     case 'rec':
//         $scope.radioCSV = 'recipecsv_file'
//         break;
//     default:
//         $scope.radioCSV = 'recipecsv_file'
//   }
// }

$scope.uploadCSV = function(type){
  debugger;
  var checkType = ""
  var content = ""

  switch(type) {
  case "p":
      checkType = 'promotercsv_file'
      content = $scope.fileContent1
      break;
  case "r":
      checkType = 'rbscsv_file'
      content = $scope.fileContent2
      break;
  case "c":
      checkType = 'cdscsv_file'
      content = $scope.fileContent3
      break;
  case "t":
      checkType = 'terminatorcsv_file'
      content = $scope.fileContent4
      break;
  case "rec":
      checkType = 'recipecsv_file'
      content = $scope.fileContent5
      break;
  default:
      console.log("none")
  }


  if(content != undefined){
    $scope.show_waiting = true;
    csvValue = content
    csvValue = csvValue.replace(/;/g,"comma");
    csvValue = csvValue.replace(/\(/g,'leftP');
    csvValue = csvValue.replace(/\)/g, 'rightP');
    csvValue = csvValue.split('\n');
    auxString = ""
    for(var i=0; i<csvValue.length; i++){
      if(i==0){
        auxString = checkType + auxString + (csvValue[i]+"lineBreak")
      }
      else{
      auxString = auxString + (csvValue[i]+"lineBreak")
      }
    }
    auxString = auxString.replace(/\s/g,"space")
    console.log(auxString)
    var msg = {
      value: auxString
    }


    inventoryService.uploadCSV(msg)
    .then(function(data) {
      var aux = data.trim()
      if(aux=="doneProm"){
        $scope.show_waiting = false;
        toastr.info("Promoters are being uploaded, please wait");
        $scope.uploadCSV("r")
      }
      if(aux=="doneRbs"){
      $scope.show_waiting = false;
        toastr.info("RBSs are being uploaded, please wait");
        $scope.uploadCSV("c")
      }
      if(aux=="doneCds"){
      $scope.show_waiting = false;
        toastr.info("CDSs are being uploaded, please wait");
        $scope.uploadCSV("t")
      }
      if(aux=="doneTerm"){
      $scope.show_waiting = false;
        toastr.info("Terminators are being uploaded, please wait");
        $scope.uploadCSV("rec")
      }
      if(aux=="doneRec"){
      $scope.show_waiting = false;
        toastr.info("Recipes are being uploaded, please wait");
      }
      else{
        $scope.csvTest = data.trim()
      }
    })
  }
  else{
    if(checkType == 'promotercsv_file'){
      $scope.uploadCSV("r")
    }
    if(checkType == 'rbscsv_file'){
      $scope.uploadCSV("c")
    }
    if(checkType == 'cdscsv_file'){
      $scope.uploadCSV("t")
    }
    if(checkType == 'terminatorcsv_file'){
      $scope.uploadCSV("rec")
    }
    if(checkType == 'recipecsv_file'){
      console.log("recipe")
    }
  }


  // csvValue = content
  // csvValue = csvValue.replace(/;/g,"comma");
  // csvValue = csvValue.replace(/\(/,'leftP');
  // csvValue = csvValue.replace(/\)/, 'rightP');
  // csvValue = csvValue.split('\n');
  // auxString = ""
  // for(var i=0; i<csvValue.length; i++){
  //   if(i==0){
  //     auxString = checkType + auxString + (csvValue[i]+"lineBreak")
  //   }
  //   else{
  //   auxString = auxString + (csvValue[i]+"lineBreak")
  //   }
  // }
  // auxString = auxString.replace(/\s/g,"space")
  // console.log(auxString)
  // var msg = {
  //   value: auxString
  // }



  // csvArray = []

  // for(var i=1; i<6; i++){
    // if($scope['fileContent'+i] != undefined){
    //   csvArray[i] = $scope['fileContent'+i]
    //   csvArray[i] = csvArray[i].replace(/;/g,"comma");
    //   csvArray[i] = csvArray[i].replace(/\(/,'leftP');
    //   csvArray[i] = csvArray[i].replace(/\)/, 'rightP');
    //   csvArray[i] = csvArray[i].split('\n');

    //   var auxString = ""
    //   var checkType = ""

      // switch(i) {
      //   case 1:
      //       checkType = 'promotercsv_file'
      //       break;
      //   case 2:
      //       checkType = 'rbscsv_file'
      //       break;
      //   case 3:
      //       checkType = 'cdscsv_file'
      //       break;
      //   case 4:
      //       checkType = 'terminatorcsv_file'
      //       break;
      //   case 5:
      //       checkType = 'recipecsv_file'
      //       break;
      //   default:
      //       console.log("none")
      // }



      // for(var j=0; j<csvArray[i].length; j++){
      //   if(j==0){
      //     auxString = checkType + auxString + (csvArray[i][j]+"lineBreak")
      //   }
      //   else{
      //   auxString = auxString + (csvArray[i][j]+"lineBreak")
      //   }
      // }
      // auxString = auxString.replace(/\s/g,"space")
      // console.log(auxString)
      // var msg = {
      //   value: auxString
      // }

      // inventoryService.uploadCSV(msg)
      // .then(function(data) {
      //   var aux = data.trim()
      //   if(aux=="doneProm"){
      //     toastr.info("Promoters are being uploaded, please wait");
      //     semaphore = false;
      //   }
      //   if(aux=="doneRbs"){
      //     toastr.info("RBSs are being uploaded, please wait");
      //     semaphore = false;
      //   }
      //   if(aux=="doneCds"){
      //     toastr.info("CDSs are being uploaded, please wait");
      //     semaphore = false;
      //   }
      //   if(aux=="doneTerm"){
      //     toastr.info("Terminators are being uploaded, please wait");
      //     semaphore = false;
      //   }
      //   if(aux=="doneRec"){
      //     toastr.info("Recipes are being uploaded, please wait");
      //     semaphore = false;
      //   }
      //   else{
      //     $scope.csvTest = data.trim()
      //   }
      // })


  //   }

  // }





  // csvValue = $scope.fileContent
  // csvValue = csvValue.replace(/;/g,"comma");
  // csvValue = csvValue.replace(/\(/,'leftP');
  // csvValue = csvValue.replace(/\)/, 'rightP');
  // csvValue = csvValue.split('\n');
  // auxString = ""
  // for(var i=0; i<csvValue.length; i++){
  //   if(i==0){
  //     auxString = $scope.radioCSV + auxString + (csvValue[i]+"lineBreak")
  //   }
  //   else{
  //   auxString = auxString + (csvValue[i]+"lineBreak")
  //   }
  // }
  // auxString = auxString.replace(/\s/g,"space")
  // console.log(auxString)
  // var msg = {
  //   value: auxString
  // }





    // inventoryService.uploadCSV(msg)
    // .then(function(data) {
    //   var aux = data.trim()
    //   if(aux=="doneProm"){
    //     toastr.info("Promoters are being uploaded, please wait");
    //     uploadCSV("r")
    //   }
    //   if(aux=="doneRbs"){
    //     toastr.info("RBSs are being uploaded, please wait");
    //     uploadCSV("c")
    //   }
    //   if(aux=="doneCds"){
    //     toastr.info("CDSs are being uploaded, please wait");
    //     uploadCSV("t")
    //   }
    //   if(aux=="doneTerm"){
    //     toastr.info("Terminators are being uploaded, please wait");
    //     uploadCSV("rec")
    //   }
    //   if(aux=="doneRec"){
    //     toastr.info("Recipes are being uploaded, please wait");
    //   }
    //   else{
    //     $scope.csvTest = data.trim()
    //   }
    // })



}


});



printeriaApp.directive('fileReader', function() {
  return {
    scope: {
      fileReader:"="
    },
    link: function(scope, element) {
      $(element).on('change', function(changeEvent) {
        var files = changeEvent.target.files;
        if (files.length) {
          var r = new FileReader();
          r.onload = function(e) {
              var contents = e.target.result;
              scope.$apply(function () {
                scope.fileReader = contents;
                scope.testing = contents;
              });
          };
          
          r.readAsText(files[0]);
        }
      });
    }
  };
});

