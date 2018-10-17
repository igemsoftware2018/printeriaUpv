printeriaApp.service('usersService', function ($http) {

  var URL = '/api/users/';

  function responseData(response) {
    return response.data;
  }

  this.getCount = function () {
    var url = URL + "contador";
    return $http.post(url).then(responseData);
  };

  this.create = function (user) {
    var url = URL;
    return $http.post(url, user).then(responseData);
  };

  this.update = function (user) {
    var url = URL + user._id;
    return $http.put(url, { user: user }).then(responseData);
  };

  this.getUsers = function () {
    var url = URL;
    return $http.get(url).then(responseData);
  };

  this.getByName = function (token) {
    var url = URL + 'name/' + token ;
    return $http.get(url).then(responseData);
  };

  this.updatePassword = function (password) {
    var url = URL + 'update-password';
    return $http.post(url, {password:password}).then(responseData);
  };

  this.deleteUser= function (user) {
    var url = URL + user._id;
    return $http.delete(url).then(responseData);
  };


});
