printeriaApp.controller('recipeDetailsController', function (
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
  $scope.show_ejecutadas = false;
  $show_coincidencias = false;
  $scope.show_loading = true;
  $show_otras = false;
  $scope.searchValue="";
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
  var auxVar = 0;


  $scope.initController = function (idRecipe) {
    recipesService.getById(idRecipe)
    .then(function (data) {
      $scope.recipe = data;

      recipesService.getResults($scope.recipe.name)
        .then(function(data) {
            arrayGraf = data.split("lineBreak")
            data1 = arrayGraf[0]
            data2 = arrayGraf[1]
            testSplit = data2.split('\n')
            testSplit.splice(0,1)
            newText = testSplit.join('\n')
            data2 = newText
            console.log(data1)
            console.log(data2)


            var c = [],
            ranges = [],
            averages = [],
            current = [],
            reference = [],
            lines = data1.split('\n');

          for (i = 1; i < lines.length; i++) {
            var items = lines[i].split(',');

            c.push(items[0]);
            ranges.push([items[0], +items[2], +items[3]]);
            averages.push([items[0], +items[1]]);
          }

          $scope.show_loading = false;

            Highcharts.chart('container', {
            title: {
              text: 'Fluorescence (F) / Optical Density (OD)'
            },
            xAxis: {
              title: {
                text: 'time (min)'
              },
              categories: c
            },
            yAxis: {
              title: {
                text: 'FOD (RFU)'
              }
            },
            tooltip: {
              crosshairs: true,
              shared: true,
              valueSuffix: 'RFU'
            },
            legend: {},
             plotOptions: {
                series: {
                    color: '#ffc600'
                }
            },
            series: [{
              name: 'FOD (RFU)',
              data: averages,
              zIndex: 1,
              marker: {
                fillColor: 'white',
                lineWidth: 2,
                lineColor: '#ffc600'
              }
            }, {
              name: 'FOD (RFU) Max and Min.',
              data: ranges,
              type: 'arearange',
              lineWidth: 0,
              linkedTo: ':previous',
              color: '#ffc600',
              fillOpacity: 0.3,
              zIndex: 0,
              marker: {
                enabled: false
              }
            }]
          });

        var c = [],
            ranges = [],
            averages = [],
            current = [],
            reference = [],
            lines = data2.split('\n');

          for (i = 1; i < lines.length; i++) {
            var items = lines[i].split(',');

            c.push(items[0]);
            ranges.push([items[0], +items[2], +items[3]]);
            averages.push([items[0], +items[1]]);
          }
            Highcharts.chart('container2', {
            title: {
              text: 'Optical Density'
            },
            xAxis: {
              title:{
                text: 'time (min)'
              },
              categories: c
            },
            yAxis: {
              title: {
                text: 'OD'
              }
            },
            tooltip: {
              crosshairs: true,
              shared: true,
              valueSuffix: 'OD'
            },
            legend: {},
            plotOptions: {
                series: {
                    color: '#fb5058'
                }
            },
            series: [{
              name: 'OD',
              data: averages,
              zIndex: 1,
              marker: {
                fillColor: 'white',
                lineWidth: 2,
                lineColor: '#fb5058'
              }
            }, {
              name: 'OD Max and min.',
              data: ranges,
              type: 'arearange',
              lineWidth: 0,
              linkedTo: ':previous',
              color: '#fb5058',
              fillOpacity: 0.3,
              zIndex: 0,
              marker: {
                enabled: false
              }
            }]
          });
          $scope.show_loading = false;

        })
        .catch(serverError);








    })
    .catch(serverError);

    recipesService.getJobs()
    .then(function (data) {
      $scope.allRecipes = data;
    })
    .catch(serverError);

    jobService.getJobs()
    .then(function (data) {
      $scope.allJobs = data; //Todos los trabajos
      $scope.auxJobs = []; //Todos los trabajos que coinciden con la receta
      $scope.jobs = []; //Los trabajos que coinciden con la receta (variable modificable)
      $scope.visibleJobs = []; //Los trabajos que coinciden y que caben en 1 página

      $scope.coincidenciasReceta();

      $scope.visibleJobs = $scope.jobs.slice(0,5);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil(data.length/5); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;

    })
    .catch(serverError);
  };


  $scope.recetasEjecutadas = function(){
     //RECETAS EJECUTADAS
      $scope.show_ejecutadas = !$scope.show_ejecutadas;
      if($scope.show_coincidencias == true){
        $scope.show_coincidencias = false;
      }
      if($scope.show_coincidencias == true){
        $scope.show_coincidencias = false;
      }
      if($scope.show_ejecutadas == true){
        $scope.jobs = [];
        var i = 0;
        debugger;
        for(var j=0; j<$scope.allJobs.length; j++){
          if($scope.recipe.Promoters == $scope.allJobs[j].Promoters &&
             $scope.recipe.RBS == $scope.allJobs[j].RBS &&
             $scope.recipe.CDS == $scope.allJobs[j].CDS &&
             $scope.recipe.Terminators == $scope.allJobs[j].Terminators){
                $scope.jobs[i] = $scope.allJobs[j];
                console.log("Partes receta: "+$scope.recipe.Promoters+" "+$scope.recipe.RBS+" "+$scope.recipe.CDS+" "+$scope.recipe.Terminators)
                console.log("Partes receta allJobs: "+$scope.allJobs[j].Promoters+" "+$scope.allJobs[j].RBS+" "+$scope.allJobs[j].CDS+" "+$scope.allJobs[j].Terminators)
                i++;
          }
        }
         //Limpiar el array de jobs
        var index = -1,
            arr_length = $scope.jobs ? $scope.jobs.length : 0,
            resIndex = -1,
            result = [];

        while (++index < arr_length) {
            var value = $scope.jobs[index];

            if (value) {
                result[++resIndex] = value;
            }
        }
        $scope.jobs = result; //Array de coincidencias sin huecos
        $scope.auxJobs = $scope.jobs;
        $scope.visibleJobs = $scope.jobs.slice(0,5);
        $scope.numPages = [];
        for(var aux=0; aux<Math.ceil($scope.allJobs.length/5); aux++){
          $scope.numPages[aux] = aux;
        }
        $scope.actualPage = 0;
    }
  }

  $scope.coincidenciasReceta = function(){

      if(auxVar > 0){
        $scope.show_coincidencias = !$scope.show_coincidencias
      }
      auxVar++;
      if($scope.show_coincidencias == true){
        $scope.jobs = [];
        //BUSCAR TRABAJOS O RECETAS CON LOS MISMOS INGREDIENTES
        for(var i=0; i<$scope.allJobs.length; i++){
          console.log("LENGTH: "+($scope.allJobs.length+$scope.allRecipes.length) + " Valor de i: "+i)
          if($scope.recipe.Promoters == $scope.allJobs[i].Promoters || 
             $scope.recipe.RBS == $scope.allJobs[i].RBS ||
             $scope.recipe.CDS == $scope.allJobs[i].CDS ||
             $scope.recipe.Terminators == $scope.allJobs[i].Terminators){
              $scope.jobs[i] = $scope.allJobs[i]; //Rellenamos jobs con las coincidencias
              // console.log("Nombre: "+$scope.jobs[i].name+" IdPr: "+$scope.jobs[i].Promoters+" index: "+i)
              console.log("Partes receta: "+$scope.recipe.Promoters+" "+$scope.recipe.RBS+" "+$scope.recipe.CDS+" "+$scope.recipe.Terminators)
              console.log("Partes receta allJobs: "+$scope.allJobs[i].Promoters+" "+$scope.allJobs[i].RBS+" "+$scope.allJobs[i].CDS+" "+$scope.allJobs[i].Terminators)
          }
        }
        for(var j=0; j<$scope.allRecipes.length; j++){
          if($scope.recipe.Promoters == $scope.allRecipes[j].Promoters ||
             $scope.recipe.RBS == $scope.allRecipes[j].RBS ||
             $scope.recipe.CDS == $scope.allRecipes[j].CDS ||
             $scope.recipe.Terminators == $scope.allRecipes[j].Terminators){
              if($scope.recipe._id != $scope.allRecipes[j]._id){
                $scope.jobs[i] = $scope.allRecipes[j];
                console.log("Partes receta: "+$scope.recipe.Promoters+" "+$scope.recipe.RBS+" "+$scope.recipe.CDS+" "+$scope.recipe.Terminators)
                console.log("Partes receta allRecipes: "+$scope.allRecipes[j].Promoters+" "+$scope.allRecipes[j].RBS+" "+$scope.allRecipes[j].CDS+" "+$scope.allRecipes[j].Terminators)
                j++;
                i++;
              }
          }
        }
        //Limpiar el array de jobs
          var index = -1,
              arr_length = $scope.jobs ? $scope.jobs.length : 0,
              resIndex = -1,
              result = [];

          while (++index < arr_length) {
              var value = $scope.jobs[index];

              if (value) {
                  result[++resIndex] = value;
              }
          }
        $scope.jobs = result; //Array de coincidencias sin huecos
        $scope.auxJobs = $scope.jobs;
        $scope.visibleJobs = $scope.jobs.slice(0,5);
        $scope.numPages = [];
        for(var aux=0; aux<Math.ceil($scope.allJobs.length/5); aux++){
          $scope.numPages[aux] = aux;
        }
        $scope.actualPage = 0;
    }
  }

  $scope.otrasPrinterias = function(){
    console.log("Aquí aparecerán otras printerias")
  }

  $scope.changePage = function(page_number) {
    $scope.actualPage = page_number ;
    if($scope.actualPage > $scope.numPages.length-1){
      $scope.actualPage = $scope.numPages.length-1;
    }
    if($scope.actualPage < 0){
      $scope.actualPage = 0;
    }
    var btm = $scope.actualPage * 5;
    var top = ($scope.actualPage + 1) * 5;
    $scope.visibleJobs = $scope.jobs.slice(btm, top);
  }



  $scope.search = function(){
    if($scope.searchValue == ""){
      $scope.jobs = $scope.auxJobs
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
      for(var i=0; i<$scope.auxJobs.length; i++){
        if($scope.auxJobs[i].name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].description.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].owner.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           //Promotores 
           $scope.auxJobs[i].promoterObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].promoterObj.category.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].promoterObj.type.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].promoterObj.lengthBP.toString().includes($scope.searchValue) ||
           //Rbss    
           $scope.auxJobs[i].rbsObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].rbsObj.category.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].rbsObj.lengthBP.toString().includes($scope.searchValue.toLowerCase()) ||
           //Cdss
           $scope.auxJobs[i].cdsObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].cdsObj.type.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].cdsObj.lengthBP.toString().includes($scope.searchValue.toLowerCase()) ||
           //Terminadores
           $scope.auxJobs[i].terminatorObj.name.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].terminatorObj.category.toLowerCase().includes($scope.searchValue.toLowerCase()) ||
           $scope.auxJobs[i].terminatorObj.lengthBP.toString().includes($scope.searchValue)){
          $scope.jobs[puntero] = $scope.auxJobs[i];
          puntero = puntero +1
        }
      }
      $scope.visibleJobs = $scope.jobs.slice(0,5);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/5); aux++){
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
      $scope.jobs = $scope.auxJobs
      $scope.visibleJobs = $scope.jobs.slice(0,5);
      $scope.numPages = [];
      for(var aux=0; aux<Math.ceil($scope.jobs.length/5); aux++){
        $scope.numPages[aux] = aux;
      }
      $scope.actualPage = 0;
    }
    else{
    $scope.jobs = [];
    var puntero = 0
    for(var i=0; i<$scope.auxJobs.length; i++){
      if($scope.auxJobs[i].name.toLowerCase().includes($scope.advancedName.toLowerCase()) &&
         $scope.auxJobs[i].description.toLowerCase().includes($scope.advancedDescription.toLowerCase()) &&
         $scope.auxJobs[i].owner.toLowerCase().includes($scope.advancedAuthor.toLowerCase()) &&
         //Promotores
         $scope.auxJobs[i].promoterObj.name.toLowerCase().includes($scope.advancedPromoter.toLowerCase()) &&
         $scope.auxJobs[i].promoterObj.category.toLowerCase().includes($scope.advancedPromoterCategory.toLowerCase()) &&
         $scope.auxJobs[i].promoterObj.type.toLowerCase().includes($scope.advancedPromoterType.toLowerCase()) &&
         $scope.auxJobs[i].promoterObj.lengthBP.toString().includes($scope.advancedPromoterLengthBP) &&
         //Rbss
         $scope.auxJobs[i].rbsObj.name.toLowerCase().includes($scope.advancedRbs.toLowerCase()) &&
         $scope.auxJobs[i].rbsObj.category.toLowerCase().includes($scope.advancedRbsCategory.toLowerCase()) &&
         $scope.auxJobs[i].rbsObj.lengthBP.toString().includes($scope.advancedRbsLengthBP) &&
         //Cdss
         $scope.auxJobs[i].cdsObj.name.toLowerCase().includes($scope.advancedCds.toLowerCase()) &&
         $scope.auxJobs[i].cdsObj.type.toLowerCase().includes($scope.advancedCdsType.toLowerCase()) &&
         $scope.auxJobs[i].cdsObj.lengthBP.toString().includes($scope.advancedCdsLengthBP) &&
         //Terminadores
         $scope.auxJobs[i].terminatorObj.name.toLowerCase().includes($scope.advancedTerminator.toLowerCase()) &&
         $scope.auxJobs[i].terminatorObj.category.toLowerCase().includes($scope.advancedTerminatorCategory.toLowerCase()) &&
         $scope.auxJobs[i].terminatorObj.lengthBP.toString().includes($scope.advancedTerminatorLengthBP)){
        $scope.jobs[puntero] = $scope.auxJobs[i];
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













  // Highcharts.chart('container', {

  //       title: {
  //           text: 'Solar Employment Growth by Sector, 2010-2016'
  //       },

  //       subtitle: {
  //           text: 'Source: thesolarfoundation.com'
  //       },

  //       yAxis: {
  //           title: {
  //               text: 'Number of Employees'
  //           }
  //       },
  //       legend: {
  //           layout: 'vertical',
  //           align: 'right',
  //           verticalAlign: 'middle'
  //       },

  //       plotOptions: {
  //           series: {
  //               label: {
  //                   connectorAllowed: false
  //               },
  //               pointStart: 2010
  //           }
  //       },

  //       series: [{
  //           name: 'Installation',
  //           data: [43934, 52503, 57177, 69658, 97031, 119931, 137133, 154175]
  //       }, {
  //           name: 'Manufacturing',
  //           data: [24916, 24064, 29742, 29851, 32490, 30282, 38121, 40434]
  //       }, {
  //           name: 'Sales & Distribution',
  //           data: [11744, 17722, 16005, 19771, 20185, 24377, 32147, 39387]
  //       }, {
  //           name: 'Project Development',
  //           data: [null, null, 7988, 12169, 15112, 22452, 34400, 34227]
  //       }, {
  //           name: 'Other',
  //           data: [12908, 5948, 8105, 11248, 8989, 11816, 18274, 18111]
  //       }],

  //       responsive: {
  //           rules: [{
  //               condition: {
  //                   maxWidth: 500
  //               },
  //               chartOptions: {
  //                   legend: {
  //                       layout: 'horizontal',
  //                       align: 'center',
  //                       verticalAlign: 'bottom'
  //                   }
  //               }
  //           }]
  //       }

  //   });


  //   Highcharts.chart('container2', {
  //       chart: {
  //           type: 'scatter',
  //           zoomType: 'xy'
  //       },
  //       title: {
  //           text: 'Height Versus Weight of 507 Individuals by Gender'
  //       },
  //       subtitle: {
  //           text: 'Source: Heinz  2003'
  //       },
  //       xAxis: {
  //           title: {
  //               enabled: true,
  //               text: 'Height (cm)'
  //           },
  //           startOnTick: true,
  //           endOnTick: true,
  //           showLastLabel: true
  //       },
  //       yAxis: {
  //           title: {
  //               text: 'Weight (kg)'
  //           }
  //       },
  //       legend: {
  //           layout: 'vertical',
  //           align: 'left',
  //           verticalAlign: 'top',
  //           x: 100,
  //           y: 70,
  //           floating: true,
  //           backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || '#FFFFFF',
  //           borderWidth: 1
  //       },
  //       plotOptions: {
  //           scatter: {
  //               marker: {
  //                   radius: 5,
  //                   states: {
  //                       hover: {
  //                           enabled: true,
  //                           lineColor: 'rgb(100,100,100)'
  //                       }
  //                   }
  //               },
  //               states: {
  //                   hover: {
  //                       marker: {
  //                           enabled: false
  //                       }
  //                   }
  //               },
  //               tooltip: {
  //                   headerFormat: '<b>{series.name}</b><br>',
  //                   pointFormat: '{point.x} cm, {point.y} kg'
  //               }
  //           }
  //       },
  //       series: [{
  //           name: 'Female',
  //           color: 'rgba(223, 83, 83, .5)',
  //           data: [
  //               [161.2, 51.6],
  //               [167.5, 59.0],
  //               [159.5, 49.2],
  //               [157.0, 63.0],
  //               [155.8, 53.6],
  //               [170.0, 59.0],
  //               [159.1, 47.6],
  //               [166.0, 69.8],
  //               [176.2, 66.8],
  //               [160.2, 75.2],
  //               [172.5, 55.2],
  //               [170.9, 54.2],
  //               [172.9, 62.5],
  //               [153.4, 42.0],
  //               [160.0, 50.0],
  //               [147.2, 49.8],
  //               [168.2, 49.2],
  //               [175.0, 73.2],
  //               [157.0, 47.8],
  //               [167.6, 68.8],
  //               [159.5, 50.6],
  //               [175.0, 82.5],
  //               [166.8, 57.2],
  //               [176.5, 87.8],
  //               [170.2, 72.8],
  //               [174.0, 54.5],
  //               [173.0, 59.8],
  //               [179.9, 67.3],
  //               [170.5, 67.8],
  //               [160.0, 47.0],
  //               [154.4, 46.2],
  //               [162.0, 55.0],
  //               [176.5, 83.0],
  //               [160.0, 54.4],
  //               [152.0, 45.8],
  //               [162.1, 53.6],
  //               [170.0, 73.2],
  //               [160.2, 52.1],
  //               [161.3, 67.9],
  //               [166.4, 56.6],
  //               [168.9, 62.3],
  //               [163.8, 58.5],
  //               [167.6, 54.5],
  //               [160.0, 50.2],
  //               [161.3, 60.3],
  //               [167.6, 58.3],
  //               [165.1, 56.2],
  //               [160.0, 50.2],
  //               [170.0, 72.9],
  //               [157.5, 59.8],
  //               [167.6, 61.0],
  //               [160.7, 69.1],
  //               [163.2, 55.9],
  //               [152.4, 46.5],
  //               [157.5, 54.3],
  //               [168.3, 54.8],
  //               [180.3, 60.7],
  //               [165.5, 60.0],
  //               [165.0, 62.0],
  //               [164.5, 60.3],
  //               [156.0, 52.7],
  //               [160.0, 74.3],
  //               [163.0, 62.0],
  //               [165.7, 73.1],
  //               [161.0, 80.0],
  //               [162.0, 54.7],
  //               [166.0, 53.2],
  //               [174.0, 75.7],
  //               [172.7, 61.1],
  //               [167.6, 55.7],
  //               [151.1, 48.7],
  //               [164.5, 52.3],
  //               [163.5, 50.0],
  //               [152.0, 59.3],
  //               [169.0, 62.5],
  //               [164.0, 55.7],
  //               [161.2, 54.8],
  //               [155.0, 45.9],
  //               [170.0, 70.6],
  //               [176.2, 67.2],
  //               [170.0, 69.4],
  //               [162.5, 58.2],
  //               [170.3, 64.8],
  //               [164.1, 71.6],
  //               [169.5, 52.8],
  //               [163.2, 59.8],
  //               [154.5, 49.0],
  //               [159.8, 50.0],
  //               [173.2, 69.2],
  //               [170.0, 55.9],
  //               [161.4, 63.4],
  //               [169.0, 58.2],
  //               [166.2, 58.6],
  //               [159.4, 45.7],
  //               [162.5, 52.2],
  //               [159.0, 48.6],
  //               [162.8, 57.8],
  //               [159.0, 55.6],
  //               [179.8, 66.8],
  //               [162.9, 59.4],
  //               [161.0, 53.6],
  //               [151.1, 73.2],
  //               [168.2, 53.4],
  //               [168.9, 69.0],
  //               [173.2, 58.4],
  //               [171.8, 56.2],
  //               [178.0, 70.6],
  //               [164.3, 59.8],
  //               [163.0, 72.0],
  //               [168.5, 65.2],
  //               [166.8, 56.6],
  //               [172.7, 105.2],
  //               [163.5, 51.8],
  //               [169.4, 63.4],
  //               [167.8, 59.0],
  //               [159.5, 47.6],
  //               [167.6, 63.0],
  //               [161.2, 55.2],
  //               [160.0, 45.0],
  //               [163.2, 54.0],
  //               [162.2, 50.2],
  //               [161.3, 60.2],
  //               [149.5, 44.8],
  //               [157.5, 58.8],
  //               [163.2, 56.4],
  //               [172.7, 62.0],
  //               [155.0, 49.2],
  //               [156.5, 67.2],
  //               [164.0, 53.8],
  //               [160.9, 54.4],
  //               [162.8, 58.0],
  //               [167.0, 59.8],
  //               [160.0, 54.8],
  //               [160.0, 43.2],
  //               [168.9, 60.5],
  //               [158.2, 46.4],
  //               [156.0, 64.4],
  //               [160.0, 48.8],
  //               [167.1, 62.2],
  //               [158.0, 55.5],
  //               [167.6, 57.8],
  //               [156.0, 54.6],
  //               [162.1, 59.2],
  //               [173.4, 52.7],
  //               [159.8, 53.2],
  //               [170.5, 64.5],
  //               [159.2, 51.8],
  //               [157.5, 56.0],
  //               [161.3, 63.6],
  //               [162.6, 63.2],
  //               [160.0, 59.5],
  //               [168.9, 56.8],
  //               [165.1, 64.1],
  //               [162.6, 50.0],
  //               [165.1, 72.3],
  //               [166.4, 55.0],
  //               [160.0, 55.9],
  //               [152.4, 60.4],
  //               [170.2, 69.1],
  //               [162.6, 84.5],
  //               [170.2, 55.9],
  //               [158.8, 55.5],
  //               [172.7, 69.5],
  //               [167.6, 76.4],
  //               [162.6, 61.4],
  //               [167.6, 65.9],
  //               [156.2, 58.6],
  //               [175.2, 66.8],
  //               [172.1, 56.6],
  //               [162.6, 58.6],
  //               [160.0, 55.9],
  //               [165.1, 59.1],
  //               [182.9, 81.8],
  //               [166.4, 70.7],
  //               [165.1, 56.8],
  //               [177.8, 60.0],
  //               [165.1, 58.2],
  //               [175.3, 72.7],
  //               [154.9, 54.1],
  //               [158.8, 49.1],
  //               [172.7, 75.9],
  //               [168.9, 55.0],
  //               [161.3, 57.3],
  //               [167.6, 55.0],
  //               [165.1, 65.5],
  //               [175.3, 65.5],
  //               [157.5, 48.6],
  //               [163.8, 58.6],
  //               [167.6, 63.6],
  //               [165.1, 55.2],
  //               [165.1, 62.7],
  //               [168.9, 56.6],
  //               [162.6, 53.9],
  //               [164.5, 63.2],
  //               [176.5, 73.6],
  //               [168.9, 62.0],
  //               [175.3, 63.6],
  //               [159.4, 53.2],
  //               [160.0, 53.4],
  //               [170.2, 55.0],
  //               [162.6, 70.5],
  //               [167.6, 54.5],
  //               [162.6, 54.5],
  //               [160.7, 55.9],
  //               [160.0, 59.0],
  //               [157.5, 63.6],
  //               [162.6, 54.5],
  //               [152.4, 47.3],
  //               [170.2, 67.7],
  //               [165.1, 80.9],
  //               [172.7, 70.5],
  //               [165.1, 60.9],
  //               [170.2, 63.6],
  //               [170.2, 54.5],
  //               [170.2, 59.1],
  //               [161.3, 70.5],
  //               [167.6, 52.7],
  //               [167.6, 62.7],
  //               [165.1, 86.3],
  //               [162.6, 66.4],
  //               [152.4, 67.3],
  //               [168.9, 63.0],
  //               [170.2, 73.6],
  //               [175.2, 62.3],
  //               [175.2, 57.7],
  //               [160.0, 55.4],
  //               [165.1, 104.1],
  //               [174.0, 55.5],
  //               [170.2, 77.3],
  //               [160.0, 80.5],
  //               [167.6, 64.5],
  //               [167.6, 72.3],
  //               [167.6, 61.4],
  //               [154.9, 58.2],
  //               [162.6, 81.8],
  //               [175.3, 63.6],
  //               [171.4, 53.4],
  //               [157.5, 54.5],
  //               [165.1, 53.6],
  //               [160.0, 60.0],
  //               [174.0, 73.6],
  //               [162.6, 61.4],
  //               [174.0, 55.5],
  //               [162.6, 63.6],
  //               [161.3, 60.9],
  //               [156.2, 60.0],
  //               [149.9, 46.8],
  //               [169.5, 57.3],
  //               [160.0, 64.1],
  //               [175.3, 63.6],
  //               [169.5, 67.3],
  //               [160.0, 75.5],
  //               [172.7, 68.2],
  //               [162.6, 61.4],
  //               [157.5, 76.8],
  //               [176.5, 71.8],
  //               [164.4, 55.5],
  //               [160.7, 48.6],
  //               [174.0, 66.4],
  //               [163.8, 67.3]
  //           ]

  //       }, {
  //           name: 'Male',
  //           color: 'rgba(119, 152, 191, .5)',
  //           data: [
  //               [174.0, 65.6],
  //               [175.3, 71.8],
  //               [193.5, 80.7],
  //               [186.5, 72.6],
  //               [187.2, 78.8],
  //               [181.5, 74.8],
  //               [184.0, 86.4],
  //               [184.5, 78.4],
  //               [175.0, 62.0],
  //               [184.0, 81.6],
  //               [180.0, 76.6],
  //               [177.8, 83.6],
  //               [192.0, 90.0],
  //               [176.0, 74.6],
  //               [174.0, 71.0],
  //               [184.0, 79.6],
  //               [192.7, 93.8],
  //               [171.5, 70.0],
  //               [173.0, 72.4],
  //               [176.0, 85.9],
  //               [176.0, 78.8],
  //               [180.5, 77.8],
  //               [172.7, 66.2],
  //               [176.0, 86.4],
  //               [173.5, 81.8],
  //               [178.0, 89.6],
  //               [180.3, 82.8],
  //               [180.3, 76.4],
  //               [164.5, 63.2],
  //               [173.0, 60.9],
  //               [183.5, 74.8],
  //               [175.5, 70.0],
  //               [188.0, 72.4],
  //               [189.2, 84.1],
  //               [172.8, 69.1],
  //               [170.0, 59.5],
  //               [182.0, 67.2],
  //               [170.0, 61.3],
  //               [177.8, 68.6],
  //               [184.2, 80.1],
  //               [186.7, 87.8],
  //               [171.4, 84.7],
  //               [172.7, 73.4],
  //               [175.3, 72.1],
  //               [180.3, 82.6],
  //               [182.9, 88.7],
  //               [188.0, 84.1],
  //               [177.2, 94.1],
  //               [172.1, 74.9],
  //               [167.0, 59.1],
  //               [169.5, 75.6],
  //               [174.0, 86.2],
  //               [172.7, 75.3],
  //               [182.2, 87.1],
  //               [164.1, 55.2],
  //               [163.0, 57.0],
  //               [171.5, 61.4],
  //               [184.2, 76.8],
  //               [174.0, 86.8],
  //               [174.0, 72.2],
  //               [177.0, 71.6],
  //               [186.0, 84.8],
  //               [167.0, 68.2],
  //               [171.8, 66.1],
  //               [182.0, 72.0],
  //               [167.0, 64.6],
  //               [177.8, 74.8],
  //               [164.5, 70.0],
  //               [192.0, 101.6],
  //               [175.5, 63.2],
  //               [171.2, 79.1],
  //               [181.6, 78.9],
  //               [167.4, 67.7],
  //               [181.1, 66.0],
  //               [177.0, 68.2],
  //               [174.5, 63.9],
  //               [177.5, 72.0],
  //               [170.5, 56.8],
  //               [182.4, 74.5],
  //               [197.1, 90.9],
  //               [180.1, 93.0],
  //               [175.5, 80.9],
  //               [180.6, 72.7],
  //               [184.4, 68.0],
  //               [175.5, 70.9],
  //               [180.6, 72.5],
  //               [177.0, 72.5],
  //               [177.1, 83.4],
  //               [181.6, 75.5],
  //               [176.5, 73.0],
  //               [175.0, 70.2],
  //               [174.0, 73.4],
  //               [165.1, 70.5],
  //               [177.0, 68.9],
  //               [192.0, 102.3],
  //               [176.5, 68.4],
  //               [169.4, 65.9],
  //               [182.1, 75.7],
  //               [179.8, 84.5],
  //               [175.3, 87.7],
  //               [184.9, 86.4],
  //               [177.3, 73.2],
  //               [167.4, 53.9],
  //               [178.1, 72.0],
  //               [168.9, 55.5],
  //               [157.2, 58.4],
  //               [180.3, 83.2],
  //               [170.2, 72.7],
  //               [177.8, 64.1],
  //               [172.7, 72.3],
  //               [165.1, 65.0],
  //               [186.7, 86.4],
  //               [165.1, 65.0],
  //               [174.0, 88.6],
  //               [175.3, 84.1],
  //               [185.4, 66.8],
  //               [177.8, 75.5],
  //               [180.3, 93.2],
  //               [180.3, 82.7],
  //               [177.8, 58.0],
  //               [177.8, 79.5],
  //               [177.8, 78.6],
  //               [177.8, 71.8],
  //               [177.8, 116.4],
  //               [163.8, 72.2],
  //               [188.0, 83.6],
  //               [198.1, 85.5],
  //               [175.3, 90.9],
  //               [166.4, 85.9],
  //               [190.5, 89.1],
  //               [166.4, 75.0],
  //               [177.8, 77.7],
  //               [179.7, 86.4],
  //               [172.7, 90.9],
  //               [190.5, 73.6],
  //               [185.4, 76.4],
  //               [168.9, 69.1],
  //               [167.6, 84.5],
  //               [175.3, 64.5],
  //               [170.2, 69.1],
  //               [190.5, 108.6],
  //               [177.8, 86.4],
  //               [190.5, 80.9],
  //               [177.8, 87.7],
  //               [184.2, 94.5],
  //               [176.5, 80.2],
  //               [177.8, 72.0],
  //               [180.3, 71.4],
  //               [171.4, 72.7],
  //               [172.7, 84.1],
  //               [172.7, 76.8],
  //               [177.8, 63.6],
  //               [177.8, 80.9],
  //               [182.9, 80.9],
  //               [170.2, 85.5],
  //               [167.6, 68.6],
  //               [175.3, 67.7],
  //               [165.1, 66.4],
  //               [185.4, 102.3],
  //               [181.6, 70.5],
  //               [172.7, 95.9],
  //               [190.5, 84.1],
  //               [179.1, 87.3],
  //               [175.3, 71.8],
  //               [170.2, 65.9],
  //               [193.0, 95.9],
  //               [171.4, 91.4],
  //               [177.8, 81.8],
  //               [177.8, 96.8],
  //               [167.6, 69.1],
  //               [167.6, 82.7],
  //               [180.3, 75.5],
  //               [182.9, 79.5],
  //               [176.5, 73.6],
  //               [186.7, 91.8],
  //               [188.0, 84.1],
  //               [188.0, 85.9],
  //               [177.8, 81.8],
  //               [174.0, 82.5],
  //               [177.8, 80.5],
  //               [171.4, 70.0],
  //               [185.4, 81.8],
  //               [185.4, 84.1],
  //               [188.0, 90.5],
  //               [188.0, 91.4],
  //               [182.9, 89.1],
  //               [176.5, 85.0],
  //               [175.3, 69.1],
  //               [175.3, 73.6],
  //               [188.0, 80.5],
  //               [188.0, 82.7],
  //               [175.3, 86.4],
  //               [170.5, 67.7],
  //               [179.1, 92.7],
  //               [177.8, 93.6],
  //               [175.3, 70.9],
  //               [182.9, 75.0],
  //               [170.8, 93.2],
  //               [188.0, 93.2],
  //               [180.3, 77.7],
  //               [177.8, 61.4],
  //               [185.4, 94.1],
  //               [168.9, 75.0],
  //               [185.4, 83.6],
  //               [180.3, 85.5],
  //               [174.0, 73.9],
  //               [167.6, 66.8],
  //               [182.9, 87.3],
  //               [160.0, 72.3],
  //               [180.3, 88.6],
  //               [167.6, 75.5],
  //               [186.7, 101.4],
  //               [175.3, 91.1],
  //               [175.3, 67.3],
  //               [175.9, 77.7],
  //               [175.3, 81.8],
  //               [179.1, 75.5],
  //               [181.6, 84.5],
  //               [177.8, 76.6],
  //               [182.9, 85.0],
  //               [177.8, 102.5],
  //               [184.2, 77.3],
  //               [179.1, 71.8],
  //               [176.5, 87.9],
  //               [188.0, 94.3],
  //               [174.0, 70.9],
  //               [167.6, 64.5],
  //               [170.2, 77.3],
  //               [167.6, 72.3],
  //               [188.0, 87.3],
  //               [174.0, 80.0],
  //               [176.5, 82.3],
  //               [180.3, 73.6],
  //               [167.6, 74.1],
  //               [188.0, 85.9],
  //               [180.3, 73.2],
  //               [167.6, 76.3],
  //               [183.0, 65.9],
  //               [183.0, 90.9],
  //               [179.1, 89.1],
  //               [170.2, 62.3],
  //               [177.8, 82.7],
  //               [179.1, 79.1],
  //               [190.5, 98.2],
  //               [177.8, 84.1],
  //               [180.3, 83.2],
  //               [180.3, 83.2]
  //           ]
  //       }]
  //   });


  //   Highcharts.chart('container3', {

  //       title: {
  //           text: 'Solar Employment Growth by Sector, 2010-2016'
  //       },

  //       subtitle: {
  //           text: 'Source: thesolarfoundation.com'
  //       },

  //       yAxis: {
  //           title: {
  //               text: 'Number of Employees'
  //           }
  //       },
  //       legend: {
  //           layout: 'vertical',
  //           align: 'right',
  //           verticalAlign: 'middle'
  //       },

  //       plotOptions: {
  //           series: {
  //               label: {
  //                   connectorAllowed: false
  //               },
  //               pointStart: 2010
  //           }
  //       },

  //       series: [{
  //           name: 'Installation',
  //           data: [43934, 52503, 57177, 69658, 97031, 119931, 137133, 154175]
  //       }, {
  //           name: 'Manufacturing',
  //           data: [24916, 24064, 29742, 29851, 32490, 30282, 38121, 40434]
  //       }, {
  //           name: 'Sales & Distribution',
  //           data: [11744, 17722, 16005, 19771, 20185, 24377, 32147, 39387]
  //       }, {
  //           name: 'Project Development',
  //           data: [null, null, 7988, 12169, 15112, 22452, 34400, 34227]
  //       }, {
  //           name: 'Other',
  //           data: [12908, 5948, 8105, 11248, 8989, 11816, 18274, 18111]
  //       }],

  //       responsive: {
  //           rules: [{
  //               condition: {
  //                   maxWidth: 500
  //               },
  //               chartOptions: {
  //                   legend: {
  //                       layout: 'horizontal',
  //                       align: 'center',
  //                       verticalAlign: 'bottom'
  //                   }
  //               }
  //           }]
  //       }

  //   });


  //   Highcharts.chart('container4', {
  //       chart: {
  //           type: 'scatter',
  //           zoomType: 'xy'
  //       },
  //       title: {
  //           text: 'Height Versus Weight of 507 Individuals by Gender'
  //       },
  //       subtitle: {
  //           text: 'Source: Heinz  2003'
  //       },
  //       xAxis: {
  //           title: {
  //               enabled: true,
  //               text: 'Height (cm)'
  //           },
  //           startOnTick: true,
  //           endOnTick: true,
  //           showLastLabel: true
  //       },
  //       yAxis: {
  //           title: {
  //               text: 'Weight (kg)'
  //           }
  //       },
  //       legend: {
  //           layout: 'vertical',
  //           align: 'left',
  //           verticalAlign: 'top',
  //           x: 100,
  //           y: 70,
  //           floating: true,
  //           backgroundColor: (Highcharts.theme && Highcharts.theme.legendBackgroundColor) || '#FFFFFF',
  //           borderWidth: 1
  //       },
  //       plotOptions: {
  //           scatter: {
  //               marker: {
  //                   radius: 5,
  //                   states: {
  //                       hover: {
  //                           enabled: true,
  //                           lineColor: 'rgb(100,100,100)'
  //                       }
  //                   }
  //               },
  //               states: {
  //                   hover: {
  //                       marker: {
  //                           enabled: false
  //                       }
  //                   }
  //               },
  //               tooltip: {
  //                   headerFormat: '<b>{series.name}</b><br>',
  //                   pointFormat: '{point.x} cm, {point.y} kg'
  //               }
  //           }
  //       },
  //       series: [{
  //           name: 'Female',
  //           color: 'rgba(223, 83, 83, .5)',
  //           data: [
  //               [161.2, 51.6],
  //               [167.5, 59.0],
  //               [159.5, 49.2],
  //               [157.0, 63.0],
  //               [155.8, 53.6],
  //               [170.0, 59.0],
  //               [159.1, 47.6],
  //               [166.0, 69.8],
  //               [176.2, 66.8],
  //               [160.2, 75.2],
  //               [172.5, 55.2],
  //               [170.9, 54.2],
  //               [172.9, 62.5],
  //               [153.4, 42.0],
  //               [160.0, 50.0],
  //               [147.2, 49.8],
  //               [168.2, 49.2],
  //               [175.0, 73.2],
  //               [157.0, 47.8],
  //               [167.6, 68.8],
  //               [159.5, 50.6],
  //               [175.0, 82.5],
  //               [166.8, 57.2],
  //               [176.5, 87.8],
  //               [170.2, 72.8],
  //               [174.0, 54.5],
  //               [173.0, 59.8],
  //               [179.9, 67.3],
  //               [170.5, 67.8],
  //               [160.0, 47.0],
  //               [154.4, 46.2],
  //               [162.0, 55.0],
  //               [176.5, 83.0],
  //               [160.0, 54.4],
  //               [152.0, 45.8],
  //               [162.1, 53.6],
  //               [170.0, 73.2],
  //               [160.2, 52.1],
  //               [161.3, 67.9],
  //               [166.4, 56.6],
  //               [168.9, 62.3],
  //               [163.8, 58.5],
  //               [167.6, 54.5],
  //               [160.0, 50.2],
  //               [161.3, 60.3],
  //               [167.6, 58.3],
  //               [165.1, 56.2],
  //               [160.0, 50.2],
  //               [170.0, 72.9],
  //               [157.5, 59.8],
  //               [167.6, 61.0],
  //               [160.7, 69.1],
  //               [163.2, 55.9],
  //               [152.4, 46.5],
  //               [157.5, 54.3],
  //               [168.3, 54.8],
  //               [180.3, 60.7],
  //               [165.5, 60.0],
  //               [165.0, 62.0],
  //               [164.5, 60.3],
  //               [156.0, 52.7],
  //               [160.0, 74.3],
  //               [163.0, 62.0],
  //               [165.7, 73.1],
  //               [161.0, 80.0],
  //               [162.0, 54.7],
  //               [166.0, 53.2],
  //               [174.0, 75.7],
  //               [172.7, 61.1],
  //               [167.6, 55.7],
  //               [151.1, 48.7],
  //               [164.5, 52.3],
  //               [163.5, 50.0],
  //               [152.0, 59.3],
  //               [169.0, 62.5],
  //               [164.0, 55.7],
  //               [161.2, 54.8],
  //               [155.0, 45.9],
  //               [170.0, 70.6],
  //               [176.2, 67.2],
  //               [170.0, 69.4],
  //               [162.5, 58.2],
  //               [170.3, 64.8],
  //               [164.1, 71.6],
  //               [169.5, 52.8],
  //               [163.2, 59.8],
  //               [154.5, 49.0],
  //               [159.8, 50.0],
  //               [173.2, 69.2],
  //               [170.0, 55.9],
  //               [161.4, 63.4],
  //               [169.0, 58.2],
  //               [166.2, 58.6],
  //               [159.4, 45.7],
  //               [162.5, 52.2],
  //               [159.0, 48.6],
  //               [162.8, 57.8],
  //               [159.0, 55.6],
  //               [179.8, 66.8],
  //               [162.9, 59.4],
  //               [161.0, 53.6],
  //               [151.1, 73.2],
  //               [168.2, 53.4],
  //               [168.9, 69.0],
  //               [173.2, 58.4],
  //               [171.8, 56.2],
  //               [178.0, 70.6],
  //               [164.3, 59.8],
  //               [163.0, 72.0],
  //               [168.5, 65.2],
  //               [166.8, 56.6],
  //               [172.7, 105.2],
  //               [163.5, 51.8],
  //               [169.4, 63.4],
  //               [167.8, 59.0],
  //               [159.5, 47.6],
  //               [167.6, 63.0],
  //               [161.2, 55.2],
  //               [160.0, 45.0],
  //               [163.2, 54.0],
  //               [162.2, 50.2],
  //               [161.3, 60.2],
  //               [149.5, 44.8],
  //               [157.5, 58.8],
  //               [163.2, 56.4],
  //               [172.7, 62.0],
  //               [155.0, 49.2],
  //               [156.5, 67.2],
  //               [164.0, 53.8],
  //               [160.9, 54.4],
  //               [162.8, 58.0],
  //               [167.0, 59.8],
  //               [160.0, 54.8],
  //               [160.0, 43.2],
  //               [168.9, 60.5],
  //               [158.2, 46.4],
  //               [156.0, 64.4],
  //               [160.0, 48.8],
  //               [167.1, 62.2],
  //               [158.0, 55.5],
  //               [167.6, 57.8],
  //               [156.0, 54.6],
  //               [162.1, 59.2],
  //               [173.4, 52.7],
  //               [159.8, 53.2],
  //               [170.5, 64.5],
  //               [159.2, 51.8],
  //               [157.5, 56.0],
  //               [161.3, 63.6],
  //               [162.6, 63.2],
  //               [160.0, 59.5],
  //               [168.9, 56.8],
  //               [165.1, 64.1],
  //               [162.6, 50.0],
  //               [165.1, 72.3],
  //               [166.4, 55.0],
  //               [160.0, 55.9],
  //               [152.4, 60.4],
  //               [170.2, 69.1],
  //               [162.6, 84.5],
  //               [170.2, 55.9],
  //               [158.8, 55.5],
  //               [172.7, 69.5],
  //               [167.6, 76.4],
  //               [162.6, 61.4],
  //               [167.6, 65.9],
  //               [156.2, 58.6],
  //               [175.2, 66.8],
  //               [172.1, 56.6],
  //               [162.6, 58.6],
  //               [160.0, 55.9],
  //               [165.1, 59.1],
  //               [182.9, 81.8],
  //               [166.4, 70.7],
  //               [165.1, 56.8],
  //               [177.8, 60.0],
  //               [165.1, 58.2],
  //               [175.3, 72.7],
  //               [154.9, 54.1],
  //               [158.8, 49.1],
  //               [172.7, 75.9],
  //               [168.9, 55.0],
  //               [161.3, 57.3],
  //               [167.6, 55.0],
  //               [165.1, 65.5],
  //               [175.3, 65.5],
  //               [157.5, 48.6],
  //               [163.8, 58.6],
  //               [167.6, 63.6],
  //               [165.1, 55.2],
  //               [165.1, 62.7],
  //               [168.9, 56.6],
  //               [162.6, 53.9],
  //               [164.5, 63.2],
  //               [176.5, 73.6],
  //               [168.9, 62.0],
  //               [175.3, 63.6],
  //               [159.4, 53.2],
  //               [160.0, 53.4],
  //               [170.2, 55.0],
  //               [162.6, 70.5],
  //               [167.6, 54.5],
  //               [162.6, 54.5],
  //               [160.7, 55.9],
  //               [160.0, 59.0],
  //               [157.5, 63.6],
  //               [162.6, 54.5],
  //               [152.4, 47.3],
  //               [170.2, 67.7],
  //               [165.1, 80.9],
  //               [172.7, 70.5],
  //               [165.1, 60.9],
  //               [170.2, 63.6],
  //               [170.2, 54.5],
  //               [170.2, 59.1],
  //               [161.3, 70.5],
  //               [167.6, 52.7],
  //               [167.6, 62.7],
  //               [165.1, 86.3],
  //               [162.6, 66.4],
  //               [152.4, 67.3],
  //               [168.9, 63.0],
  //               [170.2, 73.6],
  //               [175.2, 62.3],
  //               [175.2, 57.7],
  //               [160.0, 55.4],
  //               [165.1, 104.1],
  //               [174.0, 55.5],
  //               [170.2, 77.3],
  //               [160.0, 80.5],
  //               [167.6, 64.5],
  //               [167.6, 72.3],
  //               [167.6, 61.4],
  //               [154.9, 58.2],
  //               [162.6, 81.8],
  //               [175.3, 63.6],
  //               [171.4, 53.4],
  //               [157.5, 54.5],
  //               [165.1, 53.6],
  //               [160.0, 60.0],
  //               [174.0, 73.6],
  //               [162.6, 61.4],
  //               [174.0, 55.5],
  //               [162.6, 63.6],
  //               [161.3, 60.9],
  //               [156.2, 60.0],
  //               [149.9, 46.8],
  //               [169.5, 57.3],
  //               [160.0, 64.1],
  //               [175.3, 63.6],
  //               [169.5, 67.3],
  //               [160.0, 75.5],
  //               [172.7, 68.2],
  //               [162.6, 61.4],
  //               [157.5, 76.8],
  //               [176.5, 71.8],
  //               [164.4, 55.5],
  //               [160.7, 48.6],
  //               [174.0, 66.4],
  //               [163.8, 67.3]
  //           ]

  //       }, {
  //           name: 'Male',
  //           color: 'rgba(119, 152, 191, .5)',
  //           data: [
  //               [174.0, 65.6],
  //               [175.3, 71.8],
  //               [193.5, 80.7],
  //               [186.5, 72.6],
  //               [187.2, 78.8],
  //               [181.5, 74.8],
  //               [184.0, 86.4],
  //               [184.5, 78.4],
  //               [175.0, 62.0],
  //               [184.0, 81.6],
  //               [180.0, 76.6],
  //               [177.8, 83.6],
  //               [192.0, 90.0],
  //               [176.0, 74.6],
  //               [174.0, 71.0],
  //               [184.0, 79.6],
  //               [192.7, 93.8],
  //               [171.5, 70.0],
  //               [173.0, 72.4],
  //               [176.0, 85.9],
  //               [176.0, 78.8],
  //               [180.5, 77.8],
  //               [172.7, 66.2],
  //               [176.0, 86.4],
  //               [173.5, 81.8],
  //               [178.0, 89.6],
  //               [180.3, 82.8],
  //               [180.3, 76.4],
  //               [164.5, 63.2],
  //               [173.0, 60.9],
  //               [183.5, 74.8],
  //               [175.5, 70.0],
  //               [188.0, 72.4],
  //               [189.2, 84.1],
  //               [172.8, 69.1],
  //               [170.0, 59.5],
  //               [182.0, 67.2],
  //               [170.0, 61.3],
  //               [177.8, 68.6],
  //               [184.2, 80.1],
  //               [186.7, 87.8],
  //               [171.4, 84.7],
  //               [172.7, 73.4],
  //               [175.3, 72.1],
  //               [180.3, 82.6],
  //               [182.9, 88.7],
  //               [188.0, 84.1],
  //               [177.2, 94.1],
  //               [172.1, 74.9],
  //               [167.0, 59.1],
  //               [169.5, 75.6],
  //               [174.0, 86.2],
  //               [172.7, 75.3],
  //               [182.2, 87.1],
  //               [164.1, 55.2],
  //               [163.0, 57.0],
  //               [171.5, 61.4],
  //               [184.2, 76.8],
  //               [174.0, 86.8],
  //               [174.0, 72.2],
  //               [177.0, 71.6],
  //               [186.0, 84.8],
  //               [167.0, 68.2],
  //               [171.8, 66.1],
  //               [182.0, 72.0],
  //               [167.0, 64.6],
  //               [177.8, 74.8],
  //               [164.5, 70.0],
  //               [192.0, 101.6],
  //               [175.5, 63.2],
  //               [171.2, 79.1],
  //               [181.6, 78.9],
  //               [167.4, 67.7],
  //               [181.1, 66.0],
  //               [177.0, 68.2],
  //               [174.5, 63.9],
  //               [177.5, 72.0],
  //               [170.5, 56.8],
  //               [182.4, 74.5],
  //               [197.1, 90.9],
  //               [180.1, 93.0],
  //               [175.5, 80.9],
  //               [180.6, 72.7],
  //               [184.4, 68.0],
  //               [175.5, 70.9],
  //               [180.6, 72.5],
  //               [177.0, 72.5],
  //               [177.1, 83.4],
  //               [181.6, 75.5],
  //               [176.5, 73.0],
  //               [175.0, 70.2],
  //               [174.0, 73.4],
  //               [165.1, 70.5],
  //               [177.0, 68.9],
  //               [192.0, 102.3],
  //               [176.5, 68.4],
  //               [169.4, 65.9],
  //               [182.1, 75.7],
  //               [179.8, 84.5],
  //               [175.3, 87.7],
  //               [184.9, 86.4],
  //               [177.3, 73.2],
  //               [167.4, 53.9],
  //               [178.1, 72.0],
  //               [168.9, 55.5],
  //               [157.2, 58.4],
  //               [180.3, 83.2],
  //               [170.2, 72.7],
  //               [177.8, 64.1],
  //               [172.7, 72.3],
  //               [165.1, 65.0],
  //               [186.7, 86.4],
  //               [165.1, 65.0],
  //               [174.0, 88.6],
  //               [175.3, 84.1],
  //               [185.4, 66.8],
  //               [177.8, 75.5],
  //               [180.3, 93.2],
  //               [180.3, 82.7],
  //               [177.8, 58.0],
  //               [177.8, 79.5],
  //               [177.8, 78.6],
  //               [177.8, 71.8],
  //               [177.8, 116.4],
  //               [163.8, 72.2],
  //               [188.0, 83.6],
  //               [198.1, 85.5],
  //               [175.3, 90.9],
  //               [166.4, 85.9],
  //               [190.5, 89.1],
  //               [166.4, 75.0],
  //               [177.8, 77.7],
  //               [179.7, 86.4],
  //               [172.7, 90.9],
  //               [190.5, 73.6],
  //               [185.4, 76.4],
  //               [168.9, 69.1],
  //               [167.6, 84.5],
  //               [175.3, 64.5],
  //               [170.2, 69.1],
  //               [190.5, 108.6],
  //               [177.8, 86.4],
  //               [190.5, 80.9],
  //               [177.8, 87.7],
  //               [184.2, 94.5],
  //               [176.5, 80.2],
  //               [177.8, 72.0],
  //               [180.3, 71.4],
  //               [171.4, 72.7],
  //               [172.7, 84.1],
  //               [172.7, 76.8],
  //               [177.8, 63.6],
  //               [177.8, 80.9],
  //               [182.9, 80.9],
  //               [170.2, 85.5],
  //               [167.6, 68.6],
  //               [175.3, 67.7],
  //               [165.1, 66.4],
  //               [185.4, 102.3],
  //               [181.6, 70.5],
  //               [172.7, 95.9],
  //               [190.5, 84.1],
  //               [179.1, 87.3],
  //               [175.3, 71.8],
  //               [170.2, 65.9],
  //               [193.0, 95.9],
  //               [171.4, 91.4],
  //               [177.8, 81.8],
  //               [177.8, 96.8],
  //               [167.6, 69.1],
  //               [167.6, 82.7],
  //               [180.3, 75.5],
  //               [182.9, 79.5],
  //               [176.5, 73.6],
  //               [186.7, 91.8],
  //               [188.0, 84.1],
  //               [188.0, 85.9],
  //               [177.8, 81.8],
  //               [174.0, 82.5],
  //               [177.8, 80.5],
  //               [171.4, 70.0],
  //               [185.4, 81.8],
  //               [185.4, 84.1],
  //               [188.0, 90.5],
  //               [188.0, 91.4],
  //               [182.9, 89.1],
  //               [176.5, 85.0],
  //               [175.3, 69.1],
  //               [175.3, 73.6],
  //               [188.0, 80.5],
  //               [188.0, 82.7],
  //               [175.3, 86.4],
  //               [170.5, 67.7],
  //               [179.1, 92.7],
  //               [177.8, 93.6],
  //               [175.3, 70.9],
  //               [182.9, 75.0],
  //               [170.8, 93.2],
  //               [188.0, 93.2],
  //               [180.3, 77.7],
  //               [177.8, 61.4],
  //               [185.4, 94.1],
  //               [168.9, 75.0],
  //               [185.4, 83.6],
  //               [180.3, 85.5],
  //               [174.0, 73.9],
  //               [167.6, 66.8],
  //               [182.9, 87.3],
  //               [160.0, 72.3],
  //               [180.3, 88.6],
  //               [167.6, 75.5],
  //               [186.7, 101.4],
  //               [175.3, 91.1],
  //               [175.3, 67.3],
  //               [175.9, 77.7],
  //               [175.3, 81.8],
  //               [179.1, 75.5],
  //               [181.6, 84.5],
  //               [177.8, 76.6],
  //               [182.9, 85.0],
  //               [177.8, 102.5],
  //               [184.2, 77.3],
  //               [179.1, 71.8],
  //               [176.5, 87.9],
  //               [188.0, 94.3],
  //               [174.0, 70.9],
  //               [167.6, 64.5],
  //               [170.2, 77.3],
  //               [167.6, 72.3],
  //               [188.0, 87.3],
  //               [174.0, 80.0],
  //               [176.5, 82.3],
  //               [180.3, 73.6],
  //               [167.6, 74.1],
  //               [188.0, 85.9],
  //               [180.3, 73.2],
  //               [167.6, 76.3],
  //               [183.0, 65.9],
  //               [183.0, 90.9],
  //               [179.1, 89.1],
  //               [170.2, 62.3],
  //               [177.8, 82.7],
  //               [179.1, 79.1],
  //               [190.5, 98.2],
  //               [177.8, 84.1],
  //               [180.3, 83.2],
  //               [180.3, 83.2]
  //           ]
  //       }]
  //   });

  $scope.printRecipe = function(recipe) {
    $scope.auxRecipe = $scope.recipe
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
      $window.location.href = $window.location.href.replace('recipe', 'new-job')
    }else{
      $scope.show_error = true;
    }
  }






  
   $scope.showResults = function(divName) {
        var boton = document.getElementById("printButton");
        var botonEdit = document.getElementById("editButton");
        boton.style.display = "none";
        botonEdit.style.display = "none";
        //var tabla = document.getElementById("printTable");
        //tabla.style.display = "none";
        setTimeout(function(){

            var printContents = document.getElementById(divName).innerHTML;
            var originalContents = document.body.innerHTML;
            document.body.innerHTML = printContents;
            window.print();
            document.body.innerHTML = originalContents;
            $window.location.reload();

        },5);   
    }


});
