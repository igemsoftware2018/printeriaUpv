printeriaApp.controller('historicalResultsController', function(
    $scope,
    $http,
    $window,
    jobService
) {

    $scope.job

    $scope.printButton = false;
    $scope.show_loading = true;

    function serverError() {
        toastr.error("Server error");
    }

    $scope.initController = function(idJob) {
        jobService.getById(idJob)
            .then(function(data) {
                $scope.job = data;
                //var urlCategories = $window.location.origin+'/printJob/printingResults'+'/'+$scope.job['_id']+'/'+"categories.csv"
                //var urlRanges = $window.location.origin+'/printJob/printingResults'+'/'+$scope.job['_id']+'/'+"ranges.csv"
                //var urlAverage = $window.location.origin+'/printJob/printingResults'+'/'+$scope.job['_id']+'/'+"average.csv"

                // jobService.getResults(idJob)
                // .then(function(data) {
                //     arrayGraf = data.split("lineBreak")
                //     data1 = arrayGraf[0]
                //     data2 = arrayGraf[1]
                //     testSplit = data2.split('\n')
                //     testSplit.splice(0,1)
                //     newText = testSplit.join('\n')
                //     data2 = newText
                //     console.log(data1)
                //     console.log(data2)


                //     var c = [],
                //     ranges = [],
                //     averages = [],
                //     current = [],
                //     reference = [],
                //     lines = data1.split('\n');

                //   for (i = 1; i < lines.length; i++) {
                //     var items = lines[i].split(',');

                //     c.push(items[0]);
                //     ranges.push([items[0], +items[2], +items[3]]);
                //     averages.push([items[0], +items[1]]);
                //   }

                //   $scope.show_loading = false;

                //     Highcharts.chart('container', {
                //     title: {
                //       text: 'Fluorescence (F) / Optical Density (OD)'
                //     },
                //     xAxis: {
                //       title: {
                //         text: 'time (min)'
                //       },
                //       categories: c
                //     },
                //     yAxis: {
                //       title: {
                //         text: 'FOD (RFU)'
                //       }
                //     },
                //     tooltip: {
                //       crosshairs: true,
                //       shared: true,
                //       valueSuffix: 'RFU'
                //     },
                //     legend: {},
                //      plotOptions: {
                //         series: {
                //             color: '#ffc600'
                //         }
                //     },
                //     series: [{
                //       name: 'FOD (RFU)',
                //       data: averages,
                //       zIndex: 1,
                //       marker: {
                //         fillColor: 'white',
                //         lineWidth: 2,
                //         lineColor: '#ffc600'
                //       }
                //     }, {
                //       name: 'FOD (RFU) Max and Min.',
                //       data: ranges,
                //       type: 'arearange',
                //       lineWidth: 0,
                //       linkedTo: ':previous',
                //       color: '#ffc600',
                //       fillOpacity: 0.3,
                //       zIndex: 0,
                //       marker: {
                //         enabled: false
                //       }
                //     }]
                //   });

                // var c = [],
                //     ranges = [],
                //     averages = [],
                //     current = [],
                //     reference = [],
                //     lines = data2.split('\n');

                //   for (i = 1; i < lines.length; i++) {
                //     var items = lines[i].split(',');

                //     c.push(items[0]);
                //     ranges.push([items[0], +items[2], +items[3]]);
                //     averages.push([items[0], +items[1]]);
                //   }
                //     Highcharts.chart('container2', {
                //     title: {
                //       text: 'Optical Density'
                //     },
                //     xAxis: {
                //       title:{
                //         text: 'time (min)'
                //       },
                //       categories: c
                //     },
                //     yAxis: {
                //       title: {
                //         text: 'OD'
                //       }
                //     },
                //     tooltip: {
                //       crosshairs: true,
                //       shared: true,
                //       valueSuffix: 'OD'
                //     },
                //     legend: {},
                //     plotOptions: {
                //         series: {
                //             color: '#fb5058'
                //         }
                //     },
                //     series: [{
                //       name: 'OD',
                //       data: averages,
                //       zIndex: 1,
                //       marker: {
                //         fillColor: 'white',
                //         lineWidth: 2,
                //         lineColor: '#fb5058'
                //       }
                //     }, {
                //       name: 'OD Max and min.',
                //       data: ranges,
                //       type: 'arearange',
                //       lineWidth: 0,
                //       linkedTo: ':previous',
                //       color: '#fb5058',
                //       fillOpacity: 0.3,
                //       zIndex: 0,
                //       marker: {
                //         enabled: false
                //       }
                //     }]
                //   });

                // })
                // .catch(serverError);
            })
            .catch(serverError);
    };




    $scope.showResults = function(divName) {
        var boton = document.getElementById("printButton");
        boton.style.display = "none";
        setTimeout(function(){

            var printContents = document.getElementById(divName).innerHTML;
            var originalContents = document.body.innerHTML;
            document.body.innerHTML = printContents;
            window.print();
            document.body.innerHTML = originalContents;
            $window.location.reload();

        },5);   


        var mywindow = window.open('', 'PRINT', 'height=720,width=1024');

        mywindow.document.write('<html>');
        mywindow.document.write('<body>');
        mywindow.document.write('<div class="row mb20 justify-content-center"><div class="col-md-12 col-lg-12"><div><h3 style="text-align: center">Modeling Results</h3><hr></div></div></div>')
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