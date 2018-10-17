printeriaApp.service('rbsService', function ($http) {

  var URL = '/api/rbs/';

  function responseData(response) {
    return response.data;
  }


  this.saveRbs = function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getRbss = function () {
    var url = URL + 'all';
    return $http.get(url).then(responseData);
  };

  this.getById = function (postId) {
    var url = URL + postId;
    return $http.get(url).then(responseData);
  };

});
