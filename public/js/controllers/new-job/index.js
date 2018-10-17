printeriaApp.controller('newjobController', function (
  $scope,
  $http,
  $window,
  jobService,
  recipesService,
  promoterService,
  rbsService,
  cdsService,
  terminatorService,
  inventoryService
) {

  function serverError() {
    toastr.error("Server Error");
  }
$scope.cartridgeProm = ''
$scope.cartridgeRbs = ''
$scope.cartridgeCds = ''
$scope.cartridgeTerm = ''

  $scope.promoters
  $scope.rbss
  $scope.cdss
  $scope.terminators
  $scope.show_edit_job = false;
  $scope.show_edit_recipe = false;
  $scope.recipe_modal_name = ""
  $scope.show_error = false;
  $scope.show_error_modeling = false;
  $scope.show_avanzado = false;
  $scope.show_modeling = false;
  $scope.show_SBOL_promoter = false;
  $scope.show_SBOL_rbs = false;
  $scope.show_SBOL_cds = false;
  $scope.show_SBOL_terminator = false;
  $scope.job = {
    name:"",
    description:"",
    Promoters:"",
    RBS:"",
    CDS:"",
    Terminators:"",
  };
  $scope.modalPartPromoter = {
    name: '',
    description: '',
    category: '',
    lengthBP: '',
    type: '',
    quantity: '',
    r: '',
    dm: ''
  }
  $scope.modalPartRbs = {
    name: '',
    description: '',
    category: '',
    lengthBP: '',
    quantity: ''
  }
  $scope.modalPartCds = {
    name: '',
    description: '',
    type: '',
    lengthBP: '',
    quantity: '',
    dp: '',
    p: ''
  }
  $scope.modalPartTerminator = {
    name: '',
    description: '',
    category: '',
    lengthBP: '',
    quantity: ''
  }

  $scope.modelingAraC = {}
  $scope.modelingLuxR = {}
  $scope.modeling_mu = 0.017
  $scope.modeling_cn = 500
  var a = Math.pow(10, 8);
  var b = 1.6
  var c = b*a
  $scope.modeling_kmax = c
  $scope.modeling_arabinose = 0.002
  $scope.modeling_ahl = 50



  $scope.numCycles = 0;

  $scope.chassis = {
    name: 'chassisPrueba',
    description: 'chassisPrueba',
    genotype: []
  }

    $scope.auxPromoter = {
    name: '',
    description: '',
    category: '',
    lengthBP: 200,
    type: 't',
    quantity: 0.3,
    r: 600,
    dm: 0.247
  }

  $scope.auxRbs = {
    name: '',
    description: '',
    category: '',
    lengthBP: 0,
    quantity: 0.3
  }

  $scope.auxCds = {
    name: '',
    description: '',
    type: '',
    lengthBP: 720,
    quantity: 0.3,
    dp: 0.156,
    p: 3
  }

  $scope.auxTerminator = {
    name: '',
    description: '',
    category: '',
    lengthBP: 0,
    quantity: 0.3
  }

  $scope.missingP = false;
  $scope.missingR = false;
  $scope.missingC = false;
  $scope.missingT = false;
  $scope.show_missing = false;

  checkMulticycleZero = 0;



  $scope.init = function (idJob) {

    $scope.show_job_cycle = true;

    checkMulticycleZero = 0;
    $scope.numCycles = 0;

    promoterService.getPromoters()
    .then(function (data) {
      $scope.promoters = data
      $scope.allPromoters = data
      $scope.visiblePromoters = data
      
    })
    .catch(serverError);

    inventoryService.getInventory()
    .then(function (data) {
      $scope.inventory = data
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
    .catch(serverError);

    if(idJob){



      jobService.getJobs()
      .then(function (data) {
        var jobArray = data;
        for(var i=0; i<jobArray.length; i++){
          if(idJob == jobArray[i]._id){
            $scope.show_edit_job = true;

            jobService.getById(idJob)
            .then(function (data) {
              $scope.job = data;

              //Select Promoter
              promoterService.getById($scope.job.Promoters)
              .then(function (data) {
                var auxProm = data
                $scope.changeelement('Promoters', auxProm)
              })
              .catch(serverError);

              //Select Rbs
              rbsService.getById($scope.job.RBS)
              .then(function (data) {
                var auxRbs = data
                $scope.changeelement('RBS', auxRbs)
              })
              .catch(serverError);

              //Select Cds
              cdsService.getById($scope.job.CDS)
              .then(function (data) {
                var auxCds = data
                $scope.changeelement('CDS', auxCds)
              })
              .catch(serverError);

              //Select Termianator
              terminatorService.getById($scope.job.Terminators)
              .then(function (data) {
                var auxTerm = data
                $scope.changeelement('Terminators', auxTerm)
              })
              .catch(serverError);

            })
            .catch(serverError);

          }
        
        }

      })
      .catch(serverError);

      recipesService.getJobs()
      .then(function (data) {
        var recipeArray = data;
        for(var i=0; i<recipeArray.length; i++){
          if(idJob == recipeArray[i]._id){
            $scope.show_edit_recipe = true;

            recipesService.getById(idJob)
            .then(function (data) {
              $scope.job = data;

              //Select Promoter
              promoterService.getById($scope.job.Promoters)
              .then(function (data) {
                var auxProm = data
                $scope.changeelement('Promoters', auxProm)
              })
              .catch(serverError);

              //Select Rbs
              rbsService.getById($scope.job.RBS)
              .then(function (data) {
                var auxRbs = data
                $scope.changeelement('RBS', auxRbs)
              })
              .catch(serverError);

              //Select Cds
              cdsService.getById($scope.job.CDS)
              .then(function (data) {
                var auxCds = data
                $scope.changeelement('CDS', auxCds)
              })
              .catch(serverError);

              //Select Termianator
              terminatorService.getById($scope.job.Terminators)
              .then(function (data) {
                var auxTerm = data
                $scope.changeelement('Terminators', auxTerm)
              })
              .catch(serverError);

            })
            .catch(serverError);

          }
        
        }          
        
      })
      .catch(serverError);

    }else{
      $scope.job.coldzoneTemperature = $scope.user.configuration.coldzoneTemperature;
      $scope.job.coldzoneTime = $scope.user.configuration.coldzoneTime;
      $scope.job.hotzoneTemperature = $scope.user.configuration.hotzoneTemperature;
      $scope.job.hotzoneTime = $scope.user.configuration.hotzoneTime;
      $scope.job.multicycle = []

      $scope.job.multicycle[0] = {}
      $scope.job.multicycle[1] = {}
      $scope.job.multicycle[2] = {}

      
      $scope.job.multicycle[0]['hotzoneTemperature'] = 37
      $scope.job.multicycle[0]['hotzoneTime'] = 10
      $scope.job.multicycle[0]['cycleType'] = 'hot';
      // $scope.job.multicycle['cycle0']['name'] = 'cycle0';


      $scope.job.multicycle[1]['repetitions'] = 25;
      $scope.job.multicycle[1]['coldzoneTemperature'] = 16;
      $scope.job.multicycle[1]['coldzoneTime'] = 4;
      $scope.job.multicycle[1]['hotzoneTemperature'] = 37;
      $scope.job.multicycle[1]['hotzoneTime'] = 3;
      $scope.job.multicycle[1]['cycleType'] = 'full'; 
      // $scope.job.multicycle['cycle1']['name'] = 'cycle1';


      $scope.job.multicycle[2]['hotzoneTemperature'] = 50
      $scope.job.multicycle[2]['hotzoneTime'] = 10
      $scope.job.multicycle[2]['cycleType'] = 'hot';
      // $scope.job.multicycle['cycle2']['name'] = 'cycle2';


    }
  };

  $scope.changeelement = function(a,b){
    if(a == 'Promoters'){
      $scope.auxPromoter.name = b.name;
      $scope.auxPromoter.type = b.type;
      $scope.show_SBOL_promoter = true;
    }
    else if(a == 'RBS'){
      $scope.auxRbs.name = b.name;
      $scope.show_SBOL_rbs = true;
    }
    else if(a == 'CDS'){
      $scope.show_SBOL_cds = true;
      $scope.auxCds.name = b.name;
    }
    else if(a == 'Terminators'){
      $scope.show_SBOL_terminator = true;
      $scope.auxTerminator.name = b.name;
    }
    $scope.job[a] = b._id
  }


  $scope.checkInventory = function(promoterId, rbsId, cdsId, terminatorId){
    var promFound = false, rbsFound = false, cdsFound = false, termFound = false;
    var resError = ""
    var size = Object.keys($scope.inventory).length;
    for(var i=0; i<size; i++){
      if($scope.inventory['c'+i]){
        if($scope.inventory['c'+i].typePart != ""){
          var idPart = $scope.inventory['c'+i].idPart
          if(idPart == promoterId && $scope.inventory['c'+i].filled==true){
            promFound = true;
            $scope.cartridgeProm = 'c'+i
          }
          else if(idPart == rbsId && $scope.inventory['c'+i].filled==true){
            rbsFound = true;
            $scope.cartridgeRbs = 'c'+i
          }
          else if(idPart == cdsId && $scope.inventory['c'+i].filled==true){
            cdsFound = true;
            $scope.cartridgeCds = 'c'+i
          }
          else if(idPart == terminatorId && $scope.inventory['c'+i].filled==true){
            termFound = true;
            $scope.cartridgeTerm = 'c'+i
          }
          }
        }
      }
     if(promFound == false){
        resError += "p"
      }
      if(rbsFound == false){
        resError += "r"
      }
      if(cdsFound == false){
        resError += "c" 
      }
      if(termFound == false){
        resError += "t"
      }
      console.log(promFound+" "+rbsFound+" "+cdsFound+" "+termFound)
      console.log(resError)
      return resError;
    }


  function isEmpty(obj) {
    for(var key in obj) {
        if(obj.hasOwnProperty(key))
            return false;
    }
    return true;
  }

  $scope.printJob = function() {
    debugger;
    console.log("llega1")
    console.log($scope.job);
    var checkString = $scope.checkInventory($scope.job.Promoters, $scope.job.RBS, $scope.job.CDS, $scope.job.Terminators)

    $scope.show_missing = false;
    if (checkString.includes('p')){
      $scope.missingP = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('r')){
      $scope.missingR = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('c')){
      $scope.missingC = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('t')){
      $scope.missingT = true;
      $scope.show_missing = true;
    }
    // var size = Object.keys($scope.job.multicycle).length;
    // for(var i = 0; i<size; i++){
    //   for(var j=0; j<5; j++){
    //     console.log($scope.job.multicycle["cycle"+i])
    //   }
    // }
    if($scope.job.name != ""
      && $scope.job.description != ""
      && $scope.job.Promoters != ""
      && $scope.job.RBS != ""
      && $scope.job.CDS != ""
      && $scope.job.Terminators != ""
      && $scope.job.coldzoneTemperature != 0
      && $scope.job.coldzoneTime != 0
      && $scope.job.hotzoneTemperature != 0
      && $scope.job.hotzoneTime != 0
  ){
      if($scope.show_missing == false){

        // inventoryService.saveInventory($scope.inventory)
        // .then(function(data) {
        //   console.log("Partes limpiadas")
        // })
        // .catch(serverError);





        // if(isEmpty($scope.job.multicycle)){
        //   $scope.job.multicycle['cycle0'] = {}
        //   $scope.job.multicycle['cycle1'] = {}
        //   $scope.job.multicycle['cycle2'] = {}

        //   $scope.job.multicycle['cycle0']['hotzoneTemperature'] = 37
        //   $scope.job.multicycle['cycle0']['hotzoneTime'] = 10
        //   $scope.job.multicycle['cycle0']['cycleType'] = 'hot';


        //   $scope.job.multicycle['cycle1']['repetitions'] = 25;
        //   $scope.job.multicycle['cycle1']['coldzoneTemperature'] = 16;
        //   $scope.job.multicycle['cycle1']['coldzoneTime'] = 4;
        //   $scope.job.multicycle['cycle1']['hotzoneTemperature'] = 37;
        //   $scope.job.multicycle['cycle1']['hotzoneTime'] = 3;
        //   $scope.job.multicycle['cycle1']['cycleType'] = 'full'; 


        //   $scope.job.multicycle['cycle2']['hotzoneTemperature'] = 50
        //   $scope.job.multicycle['cycle2']['hotzoneTime'] = 10
        //   $scope.job.multicycle['cycle2']['cycleType'] = 'hot';



        // }

        $scope.show_error = false;
        msg = $scope.job
        jobService.saveJob(msg)
        .then(function (data) {
          $window.location.href = $window.location.href.replace("new-job", "historical-activities");
        })
        .catch(serverError);
      }
    }else{
      $scope.show_error = true;
      console.log($scope.job.description)
    }
  }

  $scope.printJobFromRecipe = function() {
    debugger;
    console.log($scope.job);
    var checkString = $scope.checkInventory($scope.job.Promoters, $scope.job.RBS, $scope.job.CDS, $scope.job.Terminators)

    $scope.show_missing = false;
    if (checkString.includes('p')){
      $scope.missingP = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('r')){
      $scope.missingR = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('c')){
      $scope.missingC = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('t')){
      $scope.missingT = true;
      $scope.show_missing = true;
    }
    // var size = Object.keys($scope.job.multicycle).length;
    // for(var i = 0; i<size; i++){
    //   for(var j=0; j<5; j++){
    //     console.log($scope.job.multicycle["cycle"+i])
    //   }
    // }

    if($scope.job.name != ""
      && $scope.job.description != ""
      && $scope.job.Promoters != ""
      && $scope.job.RBS != ""
      && $scope.job.CDS != ""
      && $scope.job.Terminators != ""
      && $scope.job.coldzoneTemperature != 0
      && $scope.job.coldzoneTime != 0
      && $scope.job.hotzoneTemperature != 0
      && $scope.job.hotzoneTime != 0
  ){
      var today = new Date();
      var dd = today.getDate();
      var mm = today.getMonth()+1; //January is 0!
      var yyyy = today.getFullYear();
      var hour = today.getHours();
      var min = today.getMinutes();
      var sec = today.getSeconds();
      if(dd<10) {
          dd = '0'+dd
      } 
      if(mm<10) {
          mm = '0'+mm
      }
      if(hour<10) {
          hour = '0'+hour
      }
      if(min<10) {
          min = '0'+min
      }
      if(sec<10) {
          sec = '0'+sec
      }
      today = dd + "-" + mm + " | " + hour + ":" + min + ":" + sec;
      $scope.newJob = {}
      $scope.newJob.name = $scope.job.name + " " + today
      $scope.newJob.description = $scope.job.description
      $scope.newJob.Promoters = $scope.job.Promoters
      $scope.newJob.RBS = $scope.job.RBS
      $scope.newJob.CDS = $scope.job.CDS
      $scope.newJob.Terminators = $scope.job.Terminators
      $scope.newJob.coldzoneTemperature = $scope.job.coldzoneTemperature
      $scope.newJob.coldzoneTime = $scope.job.coldzoneTime
      $scope.newJob.hotzoneTemperature = $scope.job.hotzoneTemperature
      $scope.newJob.hotzoneTime = $scope.job.hotzoneTime

      $scope.job.multicycle[0] = {}
      $scope.job.multicycle[1] = {}
      $scope.job.multicycle[2] = {}

      $scope.job.multicycle[0]['hotzoneTemperature'] = 37
      $scope.job.multicycle[0]['hotzoneTime'] = 10
      $scope.job.multicycle[0]['cycleType'] = 'hot';
      // $scope.job.multicycle['cycle0']['name'] = 'cycle0';


      $scope.job.multicycle[1]['repetitions'] = 25;
      $scope.job.multicycle[1]['coldzoneTemperature'] = 16;
      $scope.job.multicycle[1]['coldzoneTime'] = 4;
      $scope.job.multicycle[1]['hotzoneTemperature'] = 37;
      $scope.job.multicycle[1]['hotzoneTime'] = 3;
      $scope.job.multicycle[1]['cycleType'] = 'full'; 
      // $scope.job.multicycle['cycle1']['name'] = 'cycle1';


      $scope.job.multicycle[2]['hotzoneTemperature'] = 50
      $scope.job.multicycle[2]['hotzoneTime'] = 10
      $scope.job.multicycle[2]['cycleType'] = 'hot';
      // $scope.job.multicycle['cycle2']['name'] = 'cycle2';




      $scope.newJob.multicycle = $scope.job.multicycle

      // if(isEmpty($scope.job.multicycle)){
      //     $scope.job.multicycle['cycle0'] = {}
      //     $scope.job.multicycle['cycle1'] = {}
      //     $scope.job.multicycle['cycle2'] = {}

      //     $scope.job.multicycle['cycle2']['hotzoneTemperature'] = 50
      //     $scope.job.multicycle['cycle2']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle2']['cycleType'] = 'hot';

      //     $scope.job.multicycle['cycle1']['repetitions'] = 25;
      //     $scope.job.multicycle['cycle1']['coldzoneTemperature'] = 16;
      //     $scope.job.multicycle['cycle1']['coldzoneTime'] = 4;
      //     $scope.job.multicycle['cycle1']['hotzoneTemperature'] = 37;
      //     $scope.job.multicycle['cycle1']['hotzoneTime'] = 3;
      //     $scope.job.multicycle['cycle1']['cycleType'] = 'full'; 

      //     $scope.job.multicycle['cycle0']['hotzoneTemperature'] = 37
      //     $scope.job.multicycle['cycle0']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle0']['cycleType'] = 'hot';  
      // }
      // else{
      //   //$scope.newJob.multicycle[]
      // }

      if($scope.show_missing == false){



        $scope.show_error = false;
        msg = $scope.newJob
        jobService.saveJob(msg)
        .then(function (data) {
          var auxUrl = $window.location.href.split("/")
          var url = auxUrl[0] + "/" + auxUrl[1] + "/" + auxUrl[2] + "/" + auxUrl[3] + "/" + auxUrl[4] +"/" + "historical-activities"
          $window.location.href = url
        })
        .catch(serverError);
      }
    }else{
      $scope.show_error = true;
      console.log($scope.job.description)
    }
  }

  $scope.showModelingResults = function() {
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzoneTemperature != 0
    && $scope.job.coldzoneTime != 0
    && $scope.job.hotzoneTemperature != 0
    && $scope.job.hotzoneTime != 0
  ){
      $scope.show_error_modeling = false;
      $scope.show_modeling = true;

      //PARA MANYANA


      jobToModel = {
        name: $scope.job.name,
        description: $scope.job.description,
        Promoters: $scope.job.Promoters,
        RBS: $scope.job.RBS,
        CDS: $scope.job.CDS,
        Terminators: $scope.job.Terminators
      };

      if($scope.auxPromoter.type == "mc"){
        $scope.modelingLuxR = {
          modelingType: "mc",
          mu: $scope.modeling_mu,
          cn: $scope.modeling_cn,
          kmax: $scope.modeling_kmax
        }
        jobToModel['modelingParams'] = $scope.modelingLuxR
      }

      if($scope.auxPromoter.type == "mi_araC"){
        $scope.modelingAraC = {
          modelingType: "araC",
          lArabinose: $scope.modeling_arabinose,
          mu: $scope.modeling_mu,
          cn: $scope.modeling_cn,
          kmax: $scope.modeling_kmax
        }
        jobToModel['modelingParams'] = $scope.modelingAraC
      }

      if($scope.auxPromoter.type == "mi_luxR"){
        $scope.modelingLuxR = {
          modelingType: "luxR",
          ahl: $scope.modeling_ahl,
          mu: $scope.modeling_mu,
          cn: $scope.modeling_cn,
          kmax: $scope.modeling_kmax
        }
        jobToModel['modelingParams'] = $scope.modelingLuxR
      }

      console.log(jobToModel)


      msg = jobToModel
      jobService.modelJob(msg)
      .then(function (data) {
        console.log(data);
        
        show_graphs(data)
      })
      .catch(serverError);
    }else{
      $scope.show_error_modeling = true;
    }
  }


  show_graphs = function(data){
    var arrayURL = data.split(",")
    console.log(arrayURL)
    console.log(arrayURL[1])
    console.log($window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[1])
    console.log($window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[2])
    console.log($window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[3])
    var url = $window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[1]

    titleGraph = ""
    if($scope.auxPromoter.type=="mc" || $scope.auxPromoter.type=="mi_araC"){
      titleGraph = "mRNA"
    }
    else if($scope.auxPromoter.type=="mi_luxR"){
      titleGraph = "LuxR"
    }


  Highcharts.setOptions({
   chart: {
           marginTop: 70
    },
   title: {
      style: {
         fontWeight: 'bold',
         fontSize: '16px',
         margin: 10
      }
   }, 
   xAxis: {
      title: {
         style: {
            fontWeight: 'bold',
            fontSize: '12px',
         }            
      }
   },
   yAxis: {
      title: {
         style: {
            fontWeight: 'bold',
            fontSize: '12px',
         }            
      }
   },
  });

    Highcharts.chart('container', {
    chart: {
        type: 'spline'
    },
    title: {
        text: titleGraph
    },
     yAxis: {
        title: {
            text: 'Molecules'
        }
    },
    xAxis: {
        title: {
            text: 'Time(min)'
        }
    },
    subtitle: {
        text: ''
    },
    data: {
        csvURL: $window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[1]
    },
    legend: {
      enabled: false
    },
    plotOptions: {
        series: {
            color: '#ffc600'
        }
    },
});


    Highcharts.chart('container2', {
    chart: {
        type: 'spline'
    },
    title: {
        text: 'Protein of Interest'
    },
     yAxis: {
        title: {
            text: 'Molecules'
        }
    },
    xAxis: {
        title: {
            text: 'Time(min)'
        }
    },
    subtitle: {
        text: ''
    },

    data: {
        csvURL: $window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[2]
    },
    legend: {
      enabled: false
    },
    plotOptions: {
        series: {
            color: '#fb5058'
        }
    },
});

  Highcharts.chart('container3', {
    chart: {
        type: 'spline'
    },
    title: {
        text: 'Number of cells'
    },
     yAxis: {
        title: {
            text: 'Cells'
        }
    },
    xAxis: {
        title: {
            text: 'Time(min)'
        }
    },
    subtitle: {
        text: ''
    },

    data: {
        csvURL: $window.location.origin+'/modeling/modelingResults'+'/Execution_'+arrayURL[0]+'/'+arrayURL[3]
    },
    legend: {
      enabled: false
    },
    plotOptions: {
        series: {
            color: '#3e90c5'
        }
    },
});


  }

  $scope.saveRecipe = function() {
    debugger;
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzoneTemperature != 0
    && $scope.job.coldzoneTime != 0
    && $scope.job.hotzoneTemperature != 0
    && $scope.job.hotzoneTime != 0
  ){

      $scope.newRecipe = {}
      $scope.newRecipe.name = $scope.job.name
      if($scope.show_edit_recipe == true){
        $scope.newRecipe.name = $scope.recipe_modal_name
      }
      $scope.newRecipe.description = $scope.job.description
      $scope.newRecipe.Promoters = $scope.job.Promoters
      $scope.newRecipe.RBS = $scope.job.RBS
      $scope.newRecipe.CDS = $scope.job.CDS
      $scope.newRecipe.Terminators = $scope.job.Terminators
      $scope.newRecipe.coldzoneTemperature = $scope.job.coldzoneTemperature
      $scope.newRecipe.coldzoneTime = $scope.job.coldzoneTime
      $scope.newRecipe.hotzoneTemperature = $scope.job.hotzoneTemperature
      $scope.newRecipe.hotzoneTime = $scope.job.hotzoneTime
      $scope.newRecipe.multicycle = $scope.job.multicycle
      $scope.newRecipe.creationDate = new Date();


      // if(isEmpty($scope.job.multicycle)){
      //     $scope.job.multicycle['cycle0'] = {}
      //     $scope.job.multicycle['cycle1'] = {}
      //     $scope.job.multicycle['cycle2'] = {}

      //     $scope.job.multicycle['cycle2']['hotzoneTemperature'] = 50
      //     $scope.job.multicycle['cycle2']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle2']['cycleType'] = 'hot';

      //     $scope.job.multicycle['cycle1']['repetitions'] = 25;
      //     $scope.job.multicycle['cycle1']['coldzoneTemperature'] = 16;
      //     $scope.job.multicycle['cycle1']['coldzoneTime'] = 4;
      //     $scope.job.multicycle['cycle1']['hotzoneTemperature'] = 37;
      //     $scope.job.multicycle['cycle1']['hotzoneTime'] = 3;
      //     $scope.job.multicycle['cycle1']['cycleType'] = 'full'; 

      //     $scope.job.multicycle['cycle0']['hotzoneTemperature'] = 37
      //     $scope.job.multicycle['cycle0']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle0']['cycleType'] = 'hot';  
      // }


      $scope.show_error = false;
      msg = $scope.newRecipe

      recipesService.saveJob(msg)
      .then(function (data) {
        if($scope.show_edit_recipe == true){
          var auxUrl = $window.location.href.split("/")
          var url = auxUrl[0] + "/" + auxUrl[1] + "/" + auxUrl[2] + "/" + auxUrl[3] + "/" + auxUrl[4] +"/" + "recipe"
          console.log(url)
          $window.location.href = url
        }
        else{
          $window.location.href = $window.location.href.replace("new-job", "recipe");
        }
        
      })
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }

  $scope.saveRecipeFromRecipe = function() {
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzoneTemperature != 0
    && $scope.job.coldzoneTime != 0
    && $scope.job.hotzoneTemperature != 0
    && $scope.job.hotzoneTime != 0
  ){
      $scope.newRecipe = {}
      $scope.newRecipe.name = $scope.recipe_modal_name
      $scope.newRecipe.description = $scope.job.description
      $scope.newRecipe.Promoters = $scope.job.Promoters
      $scope.newRecipe.RBS = $scope.job.RBS
      $scope.newRecipe.CDS = $scope.job.CDS
      $scope.newRecipe.Terminators = $scope.job.Terminators
      $scope.newRecipe.coldzoneTemperature = $scope.job.coldzoneTemperature
      $scope.newRecipe.coldzoneTime = $scope.job.coldzoneTime
      $scope.newRecipe.hotzoneTemperature = $scope.job.hotzoneTemperature
      $scope.newRecipe.hotzoneTime = $scope.job.hotzoneTime
      $scope.newRecipe.multicycle = $scope.job.multicycle
      $scope.newRecipe.creationDate = new Date();

      // if(isEmpty($scope.job.multicycle)){
      //     $scope.job.multicycle['cycle0'] = {}
      //     $scope.job.multicycle['cycle1'] = {}
      //     $scope.job.multicycle['cycle2'] = {}

      //     $scope.job.multicycle['cycle2']['hotzoneTemperature'] = 50
      //     $scope.job.multicycle['cycle2']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle2']['cycleType'] = 'hot';

      //     $scope.job.multicycle['cycle1']['repetitions'] = 25;
      //     $scope.job.multicycle['cycle1']['coldzoneTemperature'] = 16;
      //     $scope.job.multicycle['cycle1']['coldzoneTime'] = 4;
      //     $scope.job.multicycle['cycle1']['hotzoneTemperature'] = 37;
      //     $scope.job.multicycle['cycle1']['hotzoneTime'] = 3;
      //     $scope.job.multicycle['cycle1']['cycleType'] = 'full'; 

      //     $scope.job.multicycle['cycle0']['hotzoneTemperature'] = 37
      //     $scope.job.multicycle['cycle0']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle0']['cycleType'] = 'hot';  
      // }


      $scope.show_error = false;
      msg = $scope.newRecipe
      recipesService.saveJob(msg)
      .then(function (data) {
        var auxUrl = $window.location.href.split("/")
        var url = auxUrl[0] + "/" + auxUrl[1] + "/" + auxUrl[2] + "/" + auxUrl[3] + "/" + auxUrl[4] +"/" + "recipe"
        $window.location.href = url
      })
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }

  $scope.saveRecipeAndPrintJob = function() {

    var checkString = $scope.checkInventory($scope.job.Promoters, $scope.job.RBS, $scope.job.CDS, $scope.job.Terminators)

    $scope.show_missing = false;
    if (checkString.includes('p')){
      $scope.missingP = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('r')){
      $scope.missingR = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('c')){
      $scope.missingC = true;
      $scope.show_missing = true;
    }
    if(checkString.includes('t')){
      $scope.missingT = true;
      $scope.show_missing = true;
    }


    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzoneTemperature != ""
    && $scope.job.coldzoneTime != ""
    && $scope.job.hotzoneTemperature != ""
    && $scope.job.hotzoneTime != ""
  ){

      if($scope.show_missing == false){

      $scope.newRecipe = {}
      $scope.newRecipe.name = $scope.job.name
      $scope.newRecipe.description = $scope.job.description
      $scope.newRecipe.Promoters = $scope.job.Promoters
      $scope.newRecipe.RBS = $scope.job.RBS
      $scope.newRecipe.CDS = $scope.job.CDS
      $scope.newRecipe.Terminators = $scope.job.Terminators
      $scope.newRecipe.coldzoneTemperature = $scope.job.coldzoneTemperature
      $scope.newRecipe.coldzoneTime = $scope.job.coldzoneTime
      $scope.newRecipe.hotzoneTemperature = $scope.job.hotzoneTemperature
      $scope.newRecipe.hotzoneTime = $scope.job.hotzoneTime
      $scope.newRecipe.multicycle = $scope.job.multicycle

      // if(isEmpty($scope.job.multicycle)){
      //     $scope.job.multicycle['cycle0'] = {}
      //     $scope.job.multicycle['cycle1'] = {}
      //     $scope.job.multicycle['cycle2'] = {}

      //     $scope.job.multicycle['cycle2']['hotzoneTemperature'] = 50
      //     $scope.job.multicycle['cycle2']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle2']['cycleType'] = 'hot';

      //     $scope.job.multicycle['cycle1']['repetitions'] = 25;
      //     $scope.job.multicycle['cycle1']['coldzoneTemperature'] = 16;
      //     $scope.job.multicycle['cycle1']['coldzoneTime'] = 4;
      //     $scope.job.multicycle['cycle1']['hotzoneTemperature'] = 37;
      //     $scope.job.multicycle['cycle1']['hotzoneTime'] = 3;
      //     $scope.job.multicycle['cycle1']['cycleType'] = 'full'; 

      //     $scope.job.multicycle['cycle0']['hotzoneTemperature'] = 37
      //     $scope.job.multicycle['cycle0']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle0']['cycleType'] = 'hot';  
      // }




      $scope.show_error = false;
      msg = $scope.newRecipe
      recipesService.saveJob(msg)
      .then(function (data) {
        msg.idRecipe = data._id;
        jobService.saveJob(msg)
        .then(function (data) {
          $window.location.href = $window.location.href.replace("new-job", "historical-activities");
        })
        .catch(serverError);
      })
      .catch(serverError);
    }
    }else{
      $scope.show_error = true;
    }
  }

   $scope.saveRecipeAndPrintJobFromRecipe = function() {
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzoneTemperature != ""
    && $scope.job.coldzoneTime != ""
    && $scope.job.hotzoneTemperature != ""
    && $scope.job.hotzoneTime != ""
  ){


      $scope.newRecipe = {}
      $scope.newRecipe.name = $scope.recipe_modal_name
      $scope.newRecipe.description = $scope.job.description
      $scope.newRecipe.Promoters = $scope.job.Promoters
      $scope.newRecipe.RBS = $scope.job.RBS
      $scope.newRecipe.CDS = $scope.job.CDS
      $scope.newRecipe.Terminators = $scope.job.Terminators
      $scope.newRecipe.coldzoneTemperature = $scope.job.coldzoneTemperature
      $scope.newRecipe.coldzoneTime = $scope.job.coldzoneTime
      $scope.newRecipe.hotzoneTemperature = $scope.job.hotzoneTemperature
      $scope.newRecipe.hotzoneTime = $scope.job.hotzoneTime
      $scope.newRecipe.multicycle = $scope.job.multicycle



      // if(isEmpty($scope.newJob.multicycle)){
      //     $scope.job.multicycle['cycle0'] = {}
      //     $scope.job.multicycle['cycle1'] = {}
      //     $scope.job.multicycle['cycle2'] = {}

      //     $scope.job.multicycle['cycle2']['hotzoneTemperature'] = 50
      //     $scope.job.multicycle['cycle2']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle2']['cycleType'] = 'hot';

      //     $scope.job.multicycle['cycle1']['repetitions'] = 25;
      //     $scope.job.multicycle['cycle1']['coldzoneTemperature'] = 16;
      //     $scope.job.multicycle['cycle1']['coldzoneTime'] = 4;
      //     $scope.job.multicycle['cycle1']['hotzoneTemperature'] = 37;
      //     $scope.job.multicycle['cycle1']['hotzoneTime'] = 3;
      //     $scope.job.multicycle['cycle1']['cycleType'] = 'full'; 

      //     $scope.job.multicycle['cycle0']['hotzoneTemperature'] = 37
      //     $scope.job.multicycle['cycle0']['hotzoneTime'] = 10
      //     $scope.job.multicycle['cycle0']['cycleType'] = 'hot';  
      // }



      $scope.show_error = false;
      msg = $scope.newRecipe
      recipesService.saveJob(msg)
      .then(function (data) {
        msg.idRecipe = data._id;
        jobService.saveJob(msg)
        .then(function (data) {
          var auxUrl = $window.location.href.split("/")
          var url = auxUrl[0] + "/" + auxUrl[1] + "/" + auxUrl[2] + "/" + auxUrl[3] + "/" + auxUrl[4] +"/" + "historical-activities"
          $window.location.href = url
        })
        .catch(serverError);
      })
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }

  $scope.saveChanges = function(){
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzoneTemperature != ""
    && $scope.job.coldzoneTime != ""
    && $scope.job.hotzoneTemperature != ""
    && $scope.job.hotzoneTime != ""
  ){

      $scope.newJob = {}
      $scope.newJob._id = $scope.job._id
      $scope.newJob.name = $scope.job.name
      $scope.newJob.description = $scope.job.description
      $scope.newJob.Promoters = $scope.job.Promoters
      $scope.newJob.RBS = $scope.job.RBS
      $scope.newJob.CDS = $scope.job.CDS
      $scope.newJob.Terminators = $scope.job.Terminators
      $scope.newJob.coldzoneTemperature = $scope.job.coldzoneTemperature
      $scope.newJob.coldzoneTime = $scope.job.coldzoneTime
      $scope.newJob.hotzoneTemperature = $scope.job.hotzoneTemperature
      $scope.newJob.hotzoneTime = $scope.job.hotzoneTime
      $scope.newJob.multicycle = $scope.job.multicycle

      msg = $scope.newJob
      console.log("Llega a save changes")
      jobService.updateJob(msg)
        .then(function (data) {
          var auxUrl = $window.location.href.split("/")
          var url = auxUrl[0] + "/" + auxUrl[1] + "/" + auxUrl[2] + "/" + auxUrl[3] + "/" + auxUrl[4] +"/" + "historical-activities"
          $window.location.href = url
        })
        .catch(serverError);

  }else{
      $scope.show_error = true;
    }
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
        if($scope.allPromoters[i].name.toLowerCase().includes($scope.searchValuePromotor.toLowerCase()) || 
          $scope.allPromoters[i].category.toLowerCase().includes($scope.searchValuePromotor.toLowerCase()) ||
          $scope.allPromoters[i].type.toLowerCase().includes($scope.searchValuePromotor.toLowerCase()) ||
          $scope.allPromoters[i].lengthBP.toString().toLowerCase().includes($scope.searchValuePromotor.toLowerCase())){
          $scope.promoters[puntero] = $scope.allPromoters[i];
          puntero = puntero +1
        }
      }
      $scope.visiblePromoters = $scope.promoters;
    };
  }

  $scope.searchRBS = function(){
    if($scope.searchValueRBS == ""){
      $scope.rbss = $scope.allRbss
      $scope.visibleRbss = $scope.rbss;
    }
    else{
      $scope.rbss = [];
      var puntero = 0
      for(var i=0; i<$scope.allRbss.length; i++){
        if($scope.allRbss[i].name.toLowerCase().includes($scope.searchValueRBS.toLowerCase()) || 
          $scope.allRbss[i].category.toLowerCase().includes($scope.searchValueRBS.toLowerCase()) ||
          $scope.allRbss[i].lengthBP.toString().toLowerCase().includes($scope.searchValueRBS.toLowerCase())){
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
        if($scope.allCdss[i].name.toLowerCase().includes($scope.searchValueCDS.toLowerCase()) || 
          $scope.allCdss[i].type.toLowerCase().includes($scope.searchValueCDS.toLowerCase()) ||
          $scope.allCdss[i].lengthBP.toString().toLowerCase().includes($scope.searchValueCDS.toLowerCase())){
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
        if($scope.allTerminators[i].name.toLowerCase().includes($scope.searchValueTerminator.toLowerCase()) || 
          $scope.allTerminators[i].category.toLowerCase().includes($scope.searchValueTerminator.toLowerCase()) ||
          $scope.allTerminators[i].lengthBP.toString().toLowerCase().includes($scope.searchValueTerminator.toLowerCase())){
          $scope.terminators[puntero] = $scope.allTerminators[i];
          puntero = puntero +1
        }
      }
      $scope.visibleTerminators = $scope.terminators;
    };
  }




  ///////////////////////////////////////////////////////////////////////////////
  // ADD PARTS
  ///////////////////////////////////////////////////////////////////////////////



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

  $scope.createPromoter = function() {
    if ($scope.promoter.name != "" &&
    $scope.promoter.description != "" &&
    $scope.promoter.quantity != 0) {
      var encontrado = false;
      for(var i = 0; i < $scope.promoters.length; i++){
        if($scope.promoter.name === $scope.promoters[i].name && $scope.promoter.quantity === $scope.promoters[i].quantity){
          encontrado = true;
        }
      }
      if(!encontrado){
          $scope.show_error_part = false;
          msg = $scope.promoter
          promoterService.savePromoter(msg)
          .then(function(data) {
            //$window.location.reload();
            $scope.init();

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


          })
          .catch(serverError);
        } else {
          $scope.show_error_part = true;
        }
    } else {
      $scope.show_error = true;
    }
  }

  $scope.createRbs = function() {
    if ($scope.rbs.name != "" &&
    $scope.rbs.description != "" &&
    $scope.rbs.quantity != 0) {
      var encontrado = false;
      for(var i = 0; i < $scope.rbss.length; i++){
        if($scope.rbs.name === $scope.rbss[i].name && $scope.rbs.quantity === $scope.rbss[i].quantity){
          encontrado = true;
        }
      }
      if(!encontrado){
          $scope.show_error_part = false;
          msg = $scope.rbs
          rbsService.saveRbs(msg)
          .then(function(data) {
            //$window.location.reload();
            $scope.init();
          })
          .catch(serverError);
        } else {
          $scope.show_error_part = true;
        }
    } else {
      $scope.show_error = true;
    }
  }



  $scope.createCds = function() {
    if ($scope.cds.name != "" &&
    $scope.cds.description != "" &&
    $scope.cds.quantity != 0) {
      var encontrado = false;
      for(var i = 0; i < $scope.cdss.length; i++){
        if($scope.cds.name === $scope.cdss[i].name && $scope.cds.quantity === $scope.cdss[i].quantity){
          encontrado = true;
        }
      }
      if(!encontrado){
          $scope.show_error_part = false;
          msg = $scope.cds
          cdsService.saveCds(msg)
          .then(function(data) {
            //$window.location.reload();
            $scope.init();
          })
          .catch(serverError);
        } else {
          $scope.show_error_part = true;
        }
    } else {
      $scope.show_error = true;
    }
  }
  $scope.createTerminator = function() {
    if ($scope.terminator.name != "" &&
    $scope.terminator.description != "" &&
    $scope.terminator.quantity != 0) {
      var encontrado = false;
      for(var i = 0; i < $scope.terminators.length; i++){
        if($scope.terminator.name === $scope.terminators[i].name && $scope.terminator.quantity === $scope.terminators[i].quantity){
          encontrado = true;
        }
      }
      if(!encontrado){
          $scope.show_error_part = false;
          msg = $scope.terminator
          terminatorService.saveTerminator(msg)
          .then(function(data) {
            //$window.location.reload();
            $scope.init();
          })
          .catch(serverError);
        } else {
          $scope.show_error_part = true;
        }
    } else {
      $scope.show_error = true;
    }
  }

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


  $scope.printModeling = function(sectionName){
    var mywindow = window.open('', 'PRINT', 'height=720,width=1024');

    mywindow.document.write('<html>');
    mywindow.document.write('<head>')
    mywindow.document.write('</head>')
    mywindow.document.write('<body>');
    mywindow.document.write('<style>');
    mywindow.document.write("font-family: 'Open Sans', 'Helvetica', 'Arial', sans-serif !important;")
    mywindow.document.write('</style>');
    mywindow.document.write('<div class="row mb20 justify-content-center" style="text-align: center;"><div class="col-md-12 col-lg-12"><div><h3 style="font-size: 1.8em;">Modeling Results</h3><hr></div></div></div>')
    mywindow.document.write('<div style="padding-top: 2em;"><center>')
    mywindow.document.write(document.getElementById(sectionName).innerHTML);
    mywindow.document.write('</center></div>')
    mywindow.document.write('</body></html>');

    mywindow.document.close(); // necessary for IE >= 10
    mywindow.focus(); // necessary for IE >= 10*/

    mywindow.print();
    mywindow.close();

    return true;
  }


  $scope.addToMulticycle = function() {
    if($scope.job.multicycle[0] != null && 
      $scope.job.multicycle[1] != null &&
      $scope.job.multicycle[2] != null &&
      checkMulticycleZero == 0){
        $scope.numCycles = 3;
        checkMulticycleZero++;
      }
    //var cycles = 'cycle'+$scope.numCycles.toString()
    var cycles = $scope.numCycles.toString()
    console.log(cycles)
    $scope.job.multicycle[cycles] = {}
    // $scope['coldTemp'+$scope.numCycles.toString()] = $scope.user.configuration.coldzoneTemperature;
    // $scope['coldTime'+$scope.numCycles.toString()] = $scope.user.configuration.coldzoneTime;
    // $scope['hotTemp'+$scope.numCycles.toString()] = $scope.user.configuration.hotzoneTemperature;
    // $scope['hotTime'+$scope.numCycles.toString()] = $scope.user.configuration.hotzoneTime;
    // $scope['repetitions'+$scope.numCycles.toString()]
    $scope.job.multicycle[cycles]['repetitions'] = 1;
    $scope.job.multicycle[cycles]['coldzoneTemperature'] = $scope.user.configuration.coldzoneTemperature;
    $scope.job.multicycle[cycles]['coldzoneTime'] = $scope.user.configuration.coldzoneTime;
    $scope.job.multicycle[cycles]['hotzoneTemperature'] = $scope.user.configuration.hotzoneTemperature;
    $scope.job.multicycle[cycles]['hotzoneTime'] = $scope.user.configuration.hotzoneTime;
    $scope.job.multicycle[cycles]['cycleType'] = 'full'; 
    $scope.numCycles++;

  }

  $scope.addToMulticycleSimpleCold = function() {
      if($scope.job.multicycle[0] != null && 
        $scope.job.multicycle[1] != null &&
        $scope.job.multicycle[2] != null &&
        checkMulticycleZero == 0){
        $scope.numCycles = 3;
        checkMulticycleZero++;
      }
      //var cycles = 'cycle'+$scope.numCycles.toString()
      var cycles = $scope.numCycles.toString()
      console.log(cycles)
      $scope.job.multicycle[cycles] = {}
      // $scope['coldTemp'+$scope.numCycles.toString()] = $scope.user.configuration.coldzoneTemperature;
      // $scope['coldTime'+$scope.numCycles.toString()] = $scope.user.configuration.coldzoneTime;
      // $scope['hotTemp'+$scope.numCycles.toString()] = $scope.user.configuration.hotzoneTemperature;
      // $scope['hotTime'+$scope.numCycles.toString()] = $scope.user.configuration.hotzoneTime;
      // $scope['repetitions'+$scope.numCycles.toString()]
      $scope.job.multicycle[cycles]['coldzoneTemperature'] = $scope.user.configuration.coldzoneTemperature;
      $scope.job.multicycle[cycles]['coldzoneTime'] = $scope.user.configuration.coldzoneTime;
      $scope.job.multicycle[cycles]['cycleType'] = 'cold'; 
      $scope.numCycles++;

  }

  $scope.addToMulticycleSimpleHot = function() {
      if($scope.job.multicycle[0] != null && 
        $scope.job.multicycle[1] != null &&
        $scope.job.multicycle[2] != null &&
        checkMulticycleZero == 0) {
        $scope.numCycles = 3;
        checkMulticycleZero++;
      }
      //var cycles = 'cycle'+$scope.numCycles.toString()
      var cycles = $scope.numCycles
      console.log(cycles)
      $scope.job.multicycle[cycles] = {}
      // $scope['coldTemp'+$scope.numCycles.toString()] = $scope.user.configuration.coldzoneTemperature;
      // $scope['coldTime'+$scope.numCycles.toString()] = $scope.user.configuration.coldzoneTime;
      // $scope['hotTemp'+$scope.numCycles.toString()] = $scope.user.configuration.hotzoneTemperature;
      // $scope['hotTime'+$scope.numCycles.toString()] = $scope.user.configuration.hotzoneTime;
      // $scope['repetitions'+$scope.numCycles.toString()]
      $scope.job.multicycle[cycles]['hotzoneTemperature'] = $scope.user.configuration.hotzoneTemperature;
      $scope.job.multicycle[cycles]['hotzoneTime'] = $scope.user.configuration.hotzoneTime;
      $scope.job.multicycle[cycles]['cycleType'] = 'hot'; 
      $scope.numCycles++;

  }

  $scope.deleteFromMulticycle = function() {
    debugger;
    // if($scope.job.multicycle[0] != null && 
    //   $scope.job.multicycle[1] != null &&
    //   $scope.job.multicycle[2] != null &&
    //   checkMulticycleZero == 0){
    //     $scope.numCycles = $scope.job.multicycle.length;
    //     checkMulticycleZero++;
    // }
    $scope.numCycles = $scope.job.multicycle.length;
    if($scope.numCycles>0){
      $scope.numCycles--;
      console.log($scope.numCycles)
    }
    //var cycles = 'cycle'+$scope.numCycles.toString()
    var cycles = $scope.numCycles
    $scope.job.multicycle.pop();
  }


/*
  $scope.printModeling = function(sectionName) {
      var boton = document.getElementById("printButton");
      boton.style.display = "none";
      setTimeout(function(){
          var printContents = document.getElementById(sectionName).innerHTML;
          var originalContents = document.body.innerHTML;
          document.body.innerHTML = printContents;
          window.print();
          document.body.innerHTML = originalContents;
          $window.location.reload();
      },5);   
  }
*/


});
