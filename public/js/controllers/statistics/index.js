printeriaApp.controller('statisticsController', function (
  $scope,
  $http,
  $window,
  usersService,
  jobService,
  recipesService,
  promoterService,
  rbsService,
  cdsService,
  terminatorService
) {
  
  function serverError() {
    toastr.error("Server error");
  }
  
  $scope.users = []
  $scope.init = function () {
    usersService.getUsers()
    .then(function (data) {
      $scope.users = data
    })
    .catch(serverError);
  };
  
  // ESTADISTICAS DE USUARIOS
  setTimeout(function(){
    var actives0007 = 0
    var actives0730 = 0
    var actives3099 = 0
    var inactives = 0

  for(u in $scope.users){
    if($scope.users[u].verified){
      var date1 = new Date($scope.users[u].creationDate);
      var date2 = new Date();
      var timeDiff = Math.abs(date2.getTime() - date1.getTime());
      var diffDays = Math.ceil(timeDiff / (1000 * 3600 * 24)); 
      if(diffDays <= 7 ){
        actives0007 = actives0007 + 1
      }else if (diffDays <= 300 ){
        actives0730 = actives0730 + 1
      }else{
        actives3099 = actives3099 + 1
      }

    }else{
      inactives = inactives + 1 ;
    }
  }
  


  Highcharts.chart('container', {
    chart: {
      plotBackgroundColor: null,
      plotBorderWidth: 0,
      plotShadow: false
    },
    title: {
      text: $scope.users.length + '<br>users',
      align: 'center',
      verticalAlign: 'middle',
      y: 40
    },
    tooltip: {
      pointFormat: '{series.name}: <b>{point.y}/{point.total} - {point.percentage:.1f}%</b>'
    },
    plotOptions: {
      pie: {
        dataLabels: {
          enabled: true,
          distance: -50,
          style: {
            fontWeight: 'bold',
            color: 'white'
          }
        },
        startAngle: -90,
        endAngle: 90,
        center: ['50%', '75%']
      }
    },
    series: [{
      type: 'pie',
      name: 'Data',
      innerSize: '50%',
      data: [
        ['Actives<br/>&lt; 7 days', actives0007],
        ['Actives<br/>&gt; 7 days<br/>&lt; 30 days', actives0730],
        ['Actives<br/>&gt; 30 days', actives3099],
        ['Inactives', inactives],
      ]
    }]
  });
}, 1000);
  
  
});
