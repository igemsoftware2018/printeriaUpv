printeriaApp.controller('recipesController', function (
  $scope,
  $http,
  $window,
  recipesService,
  jobService
) {

  function serverError() {
    toastr.error("Server error");
  }

  $scope.show_avanzado = false;
  $scope.recipe = {
    name:"",
    description:"",
    Promoters:"",
    RBS:"",
    CDS:"",
    Terminators:"",
  }
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

  $scope.state = false;

  $scope.init = function () {
    recipesService.getJobs()
    .then(function (data) {
      $scope.recipes = data;
      $scope.allRecipes = data;
      $scope.visibleRecipes = data.slice(0,5);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil(data.length/5); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    })
    .catch(serverError);

  };

  $scope.showRecipe = function (idjob) {
    $window.location.href = $window.location.href + "/" + idjob
  }

  $scope.deleteJob = function (idjob) {
    debugger;
    for(var i=0; i<$scope.visibleRecipes.length; i++){
      console.log($scope.visibleRecipes[i].creationDate)
      if($scope.visibleRecipes[i]._id == idjob){
        $scope.jobToDelete._id = $scope.visibleRecipes[i]._id
        $scope.jobToDeletePrueba = $scope.visibleRecipes[i];
        $scope.jobToDelete.name = $scope.visibleRecipes[i].name;
        $scope.jobToDelete.description = $scope.visibleRecipes[i].description;
        $scope.jobToDelete.Promoters = $scope.visibleRecipes[i].Promoters;
        $scope.jobToDelete.RBS = $scope.visibleRecipes[i].RBS;
        $scope.jobToDelete.CDS = $scope.visibleRecipes[i].CDS;
        $scope.jobToDelete.Terminators = $scope.visibleRecipes[i].Terminators;
        $scope.jobToDelete.coldzone = $scope.visibleRecipes[i].coldzone;
        $scope.jobToDelete.hotzone = $scope.visibleRecipes[i].hotzone;
      }
    }
    msg = $scope.jobToDelete._id;
    recipesService.deleteJob(msg)
    .then(function(data){
      $window.location.reload();
    })
  }

  $scope.changePage = function(page_number){
    $scope.actualPage = page_number;
    if($scope.actualPage > $scope.numPages.length-1){
      $scope.actualPage = $scope.numPages.length-1;
    }
    if($scope.actualPage < 0){
      $scope.actualPage = 0;
    }
    var btm = $scope.actualPage * 5;
    var top = ($scope.actualPage + 1) * 5;
    $scope.visibleRecipes = $scope.recipes.slice(btm, top);
  }

  $scope.search = function(){
    if($scope.searchValue.toLowerCase() == ""){
      $scope.recipes = $scope.allRecipes
      $scope.visibleRecipes = $scope.recipes.slice(0,5);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.recipes.length/5); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    }
    else{
      $scope.recipes = [];
      var puntero = 0
      for(var i=0; i<$scope.allRecipes.length; i++){
        if($scope.allRecipes[i].name.toLowerCase().includes($scope.searchValue.toLowerCase())){
          $scope.recipes[puntero] = $scope.allRecipes[i];
          puntero = puntero +1
        }
      }
      $scope.visibleRecipes = $scope.recipes.slice(0,5);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.recipes.length/5); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
      };
    }

    $scope.printRecipe = function(idRecipe) {
    debugger;
    for(var i=0; i<$scope.recipes.length; i++){
      if(idRecipe == $scope.recipes[i]._id){
        $scope.auxRecipe = $scope.recipes[i];
      }
    }
    //FECHA DE HOY
    var today = new Date();
    var dd = today.getDate();
    var mm = today.getMonth()+1; //January is 0!
    var yyyy = today.getFullYear();
    var hour = today.getHours();
    var min = today.getMinutes();
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
    today = dd + "-" + mm + " | " + hour + ":" + min;
    $scope.recipe.name = $scope.auxRecipe.name+" "+today
    $scope.recipe.description = $scope.auxRecipe.description
    $scope.recipe.Promoters = $scope.auxRecipe.Promoters
    $scope.recipe.RBS = $scope.auxRecipe.RBS
    $scope.recipe.CDS = $scope.auxRecipe.CDS
    $scope.recipe.Terminators = $scope.auxRecipe.Terminators
    $scope.recipe.coldzoneTemperature = $scope.auxRecipe.coldzoneTemperature
    $scope.recipe.hotzoneTemperature = $scope.auxRecipe.hotzoneTemperature
    $scope.recipe.coldzoneTime = $scope.auxRecipe.coldzoneTime
    $scope.recipe.hotzoneTime = $scope.auxRecipe.hotzoneTime
    console.log($scope.recipe)

    if($scope.recipe.name != ""
    && $scope.recipe.description != ""
    && $scope.recipe.Promoters != ""
    && $scope.recipe.RBS != ""
    && $scope.recipe.CDS != ""
    && $scope.recipe.Terminators != ""
    && $scope.recipe.coldzone != ""
    && $scope.recipe.hotzone != ""){
      // $scope.show_error = false;
      // msg = $scope.recipe
      // jobService.saveJob(msg)
      // .then(function (data) {
      //   $window.location.href = $window.location.href.replace("recipe", "historical-activities");
      // })
      // .catch(serverError);
      $window.location.href = $window.location.href.replace('recipe', 'new-job') + "/" + idRecipe
    }else{
      $scope.show_error = true;
    }
  }



});
