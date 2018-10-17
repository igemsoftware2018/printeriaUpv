printeriaApp.service('cdsService', function ($http) {

  var URL = '/api/cds/';

  function responseData(response) {
    return response.data;
  }

  this.saveCds = function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getCdss = function () {
    var url = URL + 'all';
    return $http.get(url).then(responseData);
  };

  this.getById = function (postId) {
    var url = URL + postId;
    return $http.get(url).then(responseData);
  };

});
