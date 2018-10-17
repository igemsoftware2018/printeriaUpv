printeriaApp.service('inventoryService', function ($http) {

  var URL = '/api/inventory/';

  function responseData(response) {
    return response.data;
  }


  this.saveInventory = function (msg) {
    var url = URL;
    return $http.post(url, { data: msg }).then(responseData);
  };

  this.getInventory = function () {
    var url = URL;
    return $http.get(url).then(responseData);
  };

  this.uploadCSV = function (msg) {
    console.log(msg)
    var url = URL + 'uploadCSV';
    return $http.post(url, {data: msg}).then(responseData)
  }

});
