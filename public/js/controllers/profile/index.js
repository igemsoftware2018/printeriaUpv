printeriaApp.controller('profileController', function (
  $scope,
  $http,
  $window,
  usersService
) {

    function serverError() {
      toastr.error("Server error");
    }

    $scope.initController = function (user) {
      $scope.newPassword = "******"
      $scope.editUser = user;
      $scope.editUserConfiguration = user;
    };

    $scope.save = function (user, password) {
      if(password == "******"){
        usersService.update(user)
        .then(function (data) {
          $window.location.reload()
        })
        .catch(serverError);
      }else{
        user.changepassword = true
        user.password = password
        usersService.update(user)
        .then(function (data) {
          $window.location.reload()
        })
        .catch(serverError);
      }
    };
    
    $scope.saveConfiguration = function () {
      usersService.update($scope.editUserConfiguration)
      .then(function (data) {
        $window.location.reload()
      })
      .catch(serverError);
    };


  });
