printeriaApp.controller('partsController', function (
  $scope,
  $http,
  $window,
  promoterService,
  rbsService,
  cdsService,
  terminatorService
) {

  function serverError() {
    toastr.error("Server error");
  }

  
  $scope.activePart = "Promotor"
  $scope.init = function () {
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

  $scope.changeelement = function(a,b){
    $scope.job[a] = b._id
  }

  $scope.printJob = function() {
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzone != ""
    && $scope.job.hotzone != ""){
      $scope.show_error = false;
      msg = $scope.job
      jobService.saveJob(msg)
      .then(function (data) {
        $window.location.href = $window.location.href.replace("new-job", "historical-activities");
      })
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }

  $scope.saveRecipe = function() {
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzone != ""
    && $scope.job.hotzone != ""){
      $scope.show_error = false;
      msg = $scope.job
      recipesService.saveJob(msg)
      .then(function (data) {
        $window.location.href = $window.location.href.replace("new-job", "recipe");
      })
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }

  $scope.saveRecipeAndPrintJob = function() {
    if($scope.job.name != ""
    && $scope.job.description != ""
    && $scope.job.Promoters != ""
    && $scope.job.RBS != ""
    && $scope.job.CDS != ""
    && $scope.job.Terminators != ""
    && $scope.job.coldzone != ""
    && $scope.job.hotzone != ""){
      $scope.show_error = false;
      msg = $scope.job
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
        if($scope.allPromoters[i].name.toLowerCase().includes($scope.searchValuePromotor)){
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
        if($scope.allRbss[i].name.toLowerCase().includes($scope.searchValueRBS)){
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
      if($scope.allCdss[i].name.toLowerCase().includes($scope.searchValueCDS)){
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
      if($scope.allTerminators[i].name.toLowerCase().includes($scope.searchValueTerminator)){
        $scope.terminators[puntero] = $scope.allTerminators[i];
        puntero = puntero +1
      }
    }
    $scope.visibleTerminators = $scope.terminators;
    };
  }

  $scope.createPromoter = function() {
    if($scope.promoter.name != ""
    && $scope.promoter.description != ""
    && $scope.promoter.quantity != 0){
      $scope.show_error = false;
      msg = $scope.promoter
      promoterService.savePromoter(msg)
      .then(function (data) {
        $window.location.reload();})
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }

$scope.rbs={
  name: '',
  description: '',
  quantity: 0.3
}

$scope.createRbs = function() {
    if($scope.rbs.name != ""
      && $scope.rbs.description != ""
      && $scope.rbs.quantity != 0){
        $scope.show_error = false;
        msg = $scope.rbs
        rbsService.saveRbs(msg)
        .then(function (data) {
          $window.location.reload();})
        .catch(serverError);
      }else{
        $scope.show_error = true;
      }
}



$scope.createCds = function() {
    if($scope.cds.name != ""
    && $scope.cds.description != ""
    && $scope.cds.quantity != 0){
      $scope.show_error = false;
      msg = $scope.cds
      cdsService.saveCds(msg)
      .then(function (data) {
        $window.location.reload();})
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }


$scope.createTerminator = function() {
    if($scope.terminator.name != ""
    && $scope.terminator.description != ""
    && $scope.terminator.quantity != 0){
      $scope.show_error = false;
      msg = $scope.terminator
      terminatorService.saveTerminator(msg)
      .then(function (data) {
        $window.location.reload();})
      .catch(serverError);
    }else{
      $scope.show_error = true;
    }
  }


});
