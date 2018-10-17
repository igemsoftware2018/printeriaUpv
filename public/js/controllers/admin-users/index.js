printeriaApp.controller('adminUsersController', function (
  $scope,
  $http,
  $window,
  usersService
) {

  $scope.name = "John"
  $scope.lastname = "Doe"
  $scope.username = "user"
  $scope.email = "email@example.com"
  $scope.password = "user"

  function serverError() {
    toastr.error("Server error");
  }

  $scope.newUserObj = {}
  $scope.init = function () {
    $scope.newPassword = "******"
    $scope.newUserObj.password=Math.random().toString(36).substring(7)
    usersService.getUsers()
    .then(function (data) {
      $scope.users = data
    })
    .catch(serverError);
  };
  $scope.newUser = function () {
    usersService.create($scope.newUserObj)
    .then(function (data) {
      $window.location.reload()
    })
    .catch(serverError);
  };

  $scope.editUser = function (user, password) {
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

  $scope.deleteUser = function (user) {
    usersService.deleteUser(user)
    .then(function (data) {
      $window.location.reload()
    })
    .catch(serverError);
  };
  $scope.unableUser = function (user) {
    user.active = !user.active
    usersService.update(user)
    .then(function (data) {
      $window.location.reload()
    })
    .catch(serverError);
  };
  $scope.verifyUser = function (user) {
    user.verified = !user.verified
    usersService.update(user)
    .then(function (data) {
      $window.location.reload()
    })
    .catch(serverError);
  };
  $scope.upgradeUser = function (user) {
    user.admin = !user.admin
    usersService.update(user)
    .then(function (data) {
      $window.location.reload()
    })
    .catch(serverError);
  };




  $scope.updateUser = function (user) {
    usersService.update(user)
    .then(function (data) {
      $window.location.reload()
    })
    .catch(serverError);
  };

});
