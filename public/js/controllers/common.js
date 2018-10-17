printeriaApp.controller('commonController', function (
  $scope,
  $http,
  $window
) {

  function serverError() {
    toastr.error("Server error");

  }

  $scope.initController = function (user) {
    if(user){
      $scope.user = user;
    }
  };

  $scope.getURLLogged = function (params) {
      if($scope.user){
        $window.location.href = '/users/' + $scope.user._id + '/' + params;
      }else{
        $window.location.href = '/' + params;
      }
  };

});
