printeriaApp.service('promoterService', function ($http) {

  var URL = '/api/promoter/';

  function responseData(response) {
    return response.data;
  }


  this.savePromoter = function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getPromoters = function () {
    var url = URL + 'all';
    return $http.get(url).then(responseData);
  };

  this.getById = function (postId) {
    var url = URL + postId;
    return $http.get(url).then(responseData);
  };

});
