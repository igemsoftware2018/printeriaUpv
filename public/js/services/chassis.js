printeriaApp.service('chassisService', function ($http) {

  var URL = '/api/chassis/';

  function responseData(response) {
    return response.data;
  }


  this.saveChassis= function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getChassis = function () {
    var url = URL + 'all';
    return $http.get(url).then(responseData);
  };

  this.getById = function (postId) {
    var url = URL + postId;
    return $http.get(url).then(responseData);
  };

});
