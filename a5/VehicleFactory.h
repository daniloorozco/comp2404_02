#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"

using namespace std;

class VehicleFactory{

    

    public:
	//create method is overloaded and knows which vehicle is created by given parameters
	//instance of creating a car
	Vehicle* createVehicle(string, string, string, int, int);
	//instance of creating a truck
	Vehicle* createVehicle(string, string, string, int, int, int);
	//instance of creating a motorcycle
	Vehicle* createVehicle(string, string, string, int, int, bool);
    
     
};

#endif
