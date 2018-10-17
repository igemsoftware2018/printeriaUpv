# Valencia_UPV
Repository for Valencia_UPV team code for the 2018 igem competition

Printeria Controller is an intuitive software that allows the user to design and “print” a gene circuit in a bacteria using our device. It is a web application that is embedded inside a Raspberry Pi and implemented with the MEAN Stack Framework. 
If the user wants to build a genetic circuit, it is possible to start from scratch by selecting all the desired DNA parts, or choose a complete gene circuit from the available Printeria’s recipes. After building the circuit and defining the required parameters, the user will be able to perform simulations of growth and protein expression of that gene circuit.  This is the Printeria’s Simulation Tool based on a Python modeling script.  Finally, these simulations data can be compared with experimental data also collected by Printeria and stored in its database. Therefore, a complete gene circuit characterization can be obtained using Printeria.


# Demo
## To log in this demo, use credentials:
+ User: user
+ Password: user

[Demo here](http://159.203.181.207:3000)


# Installation Guide

This piece of software has been developed using MEAN full-stack, in order to deploy
it is necessary to have installed this framework

We recommend going though the following steps from Ubuntu 16.4, for a proper deployment to be guaranteed

$ sudo apt-get install git
$ sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv EA312927
$ sudo apt-get update
$ sudo apt-get install -y mongodb-org
$ service mongod status
$ curl -sL https://deb.nodesource.com/setup_6.x | sudo -E bash -
$ sudo apt-get install -y nodejs
$ sudo apt-get install build-essential
$ sudo npm install -g bower
$ sudo npm install -g gulp
$ sudo npm install -g mean-cli


Then we create a folder in the root directory of the computer with the following structure:
/data/db

We have to go to that folder and execute:

$ sudo mongod 

That will turn on the database, and after that, we start the application executing the follwing command in the project folder:

$ node app


-----------------------------------------------------------------------------------------

Copyright 2018 Héctor Izquierdo Fernández

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.