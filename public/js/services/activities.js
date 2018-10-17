printeriaApp.service('activitiesService', function ($http) {

  var URL = '/api/activities/';

  function responseData(response) {
    return response.data;
  }

  this.getAll = function () {
    var url = URL;
    return $http.get(url).then(responseData);
  };


});
