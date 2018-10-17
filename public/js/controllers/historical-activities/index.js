printeriaApp.controller('historicalController', function (
  $scope,
  $http,
  $window,
  jobService,
  promoterService,
  rbsService,
  cdsService,
  terminatorService
) {
  
  function serverError() {
    toastr.error("Server error");
  }
  
  $scope.actualPage
  $scope.show_avanzado = false;
  $scope.searchValue = ""
  $scope.dateValue
  $scope.jobToCancel;
  //Advanced Values
  $scope.advancedName = ""
  $scope.advancedDescription = ""
  $scope.advancedAuthor = ""
  //Advanced Promoter
  $scope.advancedPromoter = ""
  $scope.advancedPromoterCategory = ""
  $scope.advancedPromoterType = ""
  $scope.advancedPromoterLengthBP = ""
  //Advanced Rbs
  $scope.advancedRbs = ""
  $scope.advancedRbsCategory = ""
  $scope.advancedRbsLengthBP = ""
  //Advanced Cds
  $scope.advancedCds = ""
  $scope.advancedCdsType = ""
  $scope.advancedCdsLengthBP = ""
  //Advanced Terminator
  $scope.advancedTerminator = ""
  $scope.advancedTerminatorCategory = ""
  $scope.advancedTerminatorLengthBP = ""
  $scope.jobToDelete = {
    name:"",
    description:"",
    Promoters:"",
    RBS:"",
    CDS:"",
    Terminators:"",
    coldzone: 16,
    hotzone: 37
  };

  
  $scope.init = function () {
    jobService.getJobs()
    .then(function (data) {
      $scope.jobs = data;
      $scope.allJobs = data;
      $scope.visibleJobs = data.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil(data.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    })
    .catch(serverError);

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
    .catch(serverError);
  };

  $scope.toCancel = function(idjob){
    for(var i=0; i<$scope.allJobs.length; i++){
      if(idjob == $scope.allJobs[i]._id){
        $scope.jobToCancel = $scope.allJobs[i];
      }
    }
  }

  $scope.cancelJob = function(){
    // for(var i=0; i<$scope.visibleJobs.length; i++){
    //   if(idjob == $scope.visibleJobs[i]._id){
    //     $scope.visibleJobs[i].status='cancelled';
    //   }
    // }

    msg = $scope.jobToCancel;
    msg.status = 'cancelled'
    jobService.updateJob(msg)
    .then(function(data){
      $window.location.reload();
    })
  }
  
  $scope.getStatus = function(job){
    var res = 0
    switch(job.status) {
    case 'doing':
        res = 1
        break;
    case 'toDo':
        res = 2
        break;
    case 'missing':
        res = 3
        break;
    case 'done':
        res = 4
        break;
    case 'cancelled':
        res = 5
        break;
    default:
        res = 0
    }
    return res;
  }

  $scope.showJob = function (idjob) {
    $window.location.href = $window.location.href + "/" + idjob
  }

  $scope.editJob = function (idjob) {
    $window.location.href = $window.location.href.replace('historical-activities', 'new-job') + "/" + idjob
  }

  $scope.deleteJob = function (idjob) {
    for(var i=0; i<$scope.allJobs.length; i++){
      console.log($scope.allJobs[i].creationDate)
      if($scope.allJobs[i]._id == idjob){
        $scope.jobToDelete._id = $scope.allJobs[i]._id
        $scope.jobToDeletePrueba = $scope.allJobs[i];
        $scope.jobToDelete.name = $scope.allJobs[i].name;
        $scope.jobToDelete.description = $scope.allJobs[i].description;
        $scope.jobToDelete.Promoters = $scope.allJobs[i].Promoters;
        $scope.jobToDelete.RBS = $scope.allJobs[i].RBS;
        $scope.jobToDelete.CDS = $scope.allJobs[i].CDS;
        $scope.jobToDelete.Terminators = $scope.allJobs[i].Terminators;
        $scope.jobToDelete.coldzone = $scope.allJobs[i].coldzone;
        $scope.jobToDelete.hotzone = $scope.allJobs[i].hotzone;
      }
    }
    msg = $scope.jobToDelete._id;
    jobService.deleteJob(msg)
    .then(function(data){
      $window.location.reload();
    })
  }

  $scope.changePage = function(page_number) {
    $scope.actualPage = page_number ;
    if($scope.actualPage > $scope.numPages.length-1){
      $scope.actualPage = $scope.numPages.length-1;
    }
    if($scope.actualPage < 0){
      $scope.actualPage = 0;
    }
    var btm = $scope.actualPage * 10;
    var top = ($scope.actualPage + 1) * 10;
    $scope.visibleJobs = $scope.jobs.slice(btm, top);
  }

  $scope.search = function(){
    if($scope.searchValue == ""){
      $scope.jobs = $scope.allJobs
      $scope.visibleJobs = $scope.jobs.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    }
    else{
      $scope.jobs = [];
      var puntero = 0
      for(var i=0; i<$scope.allJobs.length; i++){
        console.log($scope.allJobs[i].creationDate)
        console.log($scope.allJobs[i].promoterObj.type)
        console.log($scope.allJobs[i].rbsObj.type)
        console.log($scope.allJobs[i].cdsObj.type)
        console.log($scope.allJobs[i].terminatorObj.type)    
        if($scope.allJobs[i].name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].description.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].owner.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           //Promotores
           $scope.allJobs[i].promoterObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].promoterObj.category.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].promoterObj.type.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].promoterObj.lengthBP.toString().includes($scope.searchValue) ||
           //Rbss
           $scope.allJobs[i].rbsObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].rbsObj.category.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].rbsObj.lengthBP.toString().includes($scope.searchValue) ||
           //Cdss
           $scope.allJobs[i].cdsObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].cdsObj.type.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].cdsObj.lengthBP.toString().includes($scope.searchValue) ||
           //Terminadores
           $scope.allJobs[i].terminatorObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].terminatorObj.category.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.allJobs[i].terminatorObj.lengthBP.toString().includes($scope.searchValue)){
          $scope.jobs[puntero] = $scope.allJobs[i];
          puntero = puntero +1
        }
      }
      $scope.visibleJobs = $scope.jobs.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
      };
    }

  $scope.advancedSearch = function(){
    if($scope.advancedName == "" &&
       $scope.advancedDescription == "" &&
       $scope.advancedAuthor == "" &&
       $scope.advancedPromoter == "" &&
       $scope.advancedPromoterCategory == "" &&
       $scope.advancedPromoterType == "" &&
       $scope.advancedPromoterLengthBP == "" &&
       $scope.advancedRbs == "" &&
       $scope.advancedRbsCategory == "" &&
       $scope.advancedRbsLengthBP == "" &&
       $scope.advancedCds == "" &&
       $scope.advancedCdsType == "" &&
       $scope.advancedCdsLengthBP == "" &&
       $scope.advancedTerminator == "" &&
       $scope.advancedTerminatorCategory == "" &&
       $scope.advancedTerminatorLengthBP == ""){
      $scope.jobs = $scope.allJobs
      $scope.visibleJobs = $scope.jobs.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    }
    else{
    $scope.jobs = [];
    var puntero = 0
    for(var i=0; i<$scope.allJobs.length; i++){
      if($scope.allJobs[i].name.toLowerCase().includes($scope.advancedName.toLowerCase()) &&
         $scope.allJobs[i].description.toLowerCase().includes($scope.advancedDescription.toLowerCase()) &&
         $scope.allJobs[i].owner.toLowerCase().includes($scope.advancedAuthor.toLowerCase()) &&
         //Promotores
         $scope.allJobs[i].promoterObj.name.toLowerCase().includes($scope.advancedPromoter.toLowerCase()) &&
         $scope.allJobs[i].promoterObj.category.toLowerCase().includes($scope.advancedPromoterCategory.toLowerCase()) &&
         $scope.allJobs[i].promoterObj.type.toLowerCase().includes($scope.advancedPromoterType.toLowerCase()) &&
         $scope.allJobs[i].promoterObj.lengthBP.toString().includes($scope.advancedPromoterLengthBP) &&
         //Rbss
         $scope.allJobs[i].rbsObj.name.toLowerCase().includes($scope.advancedRbs.toLowerCase()) &&
         $scope.allJobs[i].rbsObj.category.toLowerCase().includes($scope.advancedRbsCategory.toLowerCase()) &&
         $scope.allJobs[i].rbsObj.lengthBP.toString().includes($scope.advancedRbsLengthBP) &&
         //Cdss
         $scope.allJobs[i].cdsObj.name.toLowerCase().includes($scope.advancedCds.toLowerCase()) &&
         $scope.allJobs[i].cdsObj.type.toLowerCase().includes($scope.advancedCdsType.toLowerCase()) &&
         $scope.allJobs[i].cdsObj.lengthBP.toString().includes($scope.advancedCdsLengthBP) &&
         //Terminadores
         $scope.allJobs[i].terminatorObj.name.toLowerCase().includes($scope.advancedTerminator.toLowerCase()) &&
         $scope.allJobs[i].terminatorObj.category.toLowerCase().includes($scope.advancedTerminatorCategory.toLowerCase()) &&
         $scope.allJobs[i].terminatorObj.lengthBP.toString().includes($scope.advancedTerminatorLengthBP)){
        $scope.jobs[puntero] = $scope.allJobs[i];
        puntero = puntero +1
      }
    }
    $scope.visibleJobs = $scope.jobs.slice(0,10);
    $scope.numPages = [];
    for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
      $scope.numPages[aux] = aux;
    }
    $scope.actualPage = 0;
    };
  }

  $scope.searchDate = function(){
      var auxDate = document.getElementById('dateBar').value
      if(auxDate == ""){
      $scope.jobs = $scope.allJobs
      $scope.visibleJobs = $scope.jobs.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    }
    else{
      auxDate = new Date(auxDate)
      auxDate = auxDate.toDateString();
      $scope.dateValue = auxDate
      $scope.dateValue = new Date($scope.dateValue.toString())
      $scope.jobs = [];
      var puntero = 0
      for(var i=0; i<$scope.allJobs.length; i++){
        var jobDate = new Date($scope.allJobs[i].creationDate)
        //console.log(jobDate)
        //console.log(jobDate.getDay())
        //console.log($scope.dateValue.getDay())
        if(jobDate.getDate() == $scope.dateValue.getDate() &&
           jobDate.getMonth() == $scope.dateValue.getMonth() &&
           jobDate.getFullYear() == $scope.dateValue.getFullYear()){
          $scope.jobs[puntero] = $scope.allJobs[i];
          puntero = puntero +1
        }
      }
      $scope.visibleJobs = $scope.jobs.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
      };
    /*else{
      $scope.jobs = [];
      var puntero = 0
      for(var i=0; i<$scope.allJobs.length; i++){
        if($scope.allJobs[i].creationDate.includes($scope.dateValue){
          $scope.jobs[puntero] = $scope.allJobs[i];
          puntero = puntero +1
        }
      }
      $scope.visibleJobs = $scope.jobs.slice(0,10);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/10); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    };*/
  }
});
