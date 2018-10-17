printeriaApp.controller('loginController', function (
  $scope,
  $http,
  $window
) {

  $scope.validUser = true;
  function serverError(response) {
    $scope.validUser = false;
  }

  $scope.init = function () {
  }

  $scope.login = function () {
    var dataTransfer = {
      username: $scope.email,
      password: $scope.password,
      remCredentials: $scope.checkbox,
    };
    $http.post(
      '/login',
      dataTransfer
    ).success(function (response) {
      if (response.error) {
        $scope.validUser = true;
        $window.location.href = '/account-not-activated';
      } else {
        $scope.validUser = true;
        $window.location.href = '/users/' + response.userId + '/new-job';
      }
    }).error(serverError);
  };
});
