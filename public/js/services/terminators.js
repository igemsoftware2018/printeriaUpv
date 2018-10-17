printeriaApp.service('terminatorService', function ($http) {

  var URL = '/api/terminator/';

  function responseData(response) {
    return response.data;
  }


  this.saveTerminator = function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getTerminators = function () {
    var url = URL + 'all';
    return $http.get(url).then(responseData);
  };

  this.getById = function (postId) {
    var url = URL + postId;
    return $http.get(url).then(responseData);
  };

});
