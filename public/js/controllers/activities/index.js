printeriaApp.controller('activitiesController', function (
  $scope,
  $http,
  $window,
  activitiesService
) {

  function serverError() {
    toastr.error("Server error");
  }

  $scope.init = function (user) {
    $scope.user = user;
    activitiesService.getAll()
      .then(function (data) {
        $scope.activities = data
      })
      .catch(serverError);
  };

});
