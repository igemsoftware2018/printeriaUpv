printeriaApp.service('jobService', function ($http) {

  var URL = '/api/job/';

  function responseData(response) {
    return response.data;
  }

  this.saveJob = function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.updateJob = function (msg) {
    var url = URL + msg._id;
    return $http.put(url, { data: msg }).then(responseData);
  };

  this.modelJob = function (msg) {
    console.log(msg)
    var url = URL + 'modelling';
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getResults = function (msg) {
    console.log(msg)
    var url = URL + 'results';
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.deleteJob = function (msgId) {
    var url = URL + msgId;
    return $http.delete(url).then(responseData);
  };

  this.getJobs = function () {
    var url = URL + 'all';
    return $http.get(url).then(responseData);
  };

  this.getById = function (postId) {
    var url = URL + postId;
    return $http.get(url).then(responseData);
  };

});
