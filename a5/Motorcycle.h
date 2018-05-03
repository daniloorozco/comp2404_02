#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Vehicle.h"

using namespace std;

//inherits from the vehicle class
class Motorcycle : public Vehicle {

    public:
	//constructor includes boolean for sidecar
        Motorcycle(string, string, string, int, int, bool);
	//yostring method
        virtual string toString();
	//get method
	bool getSideCar() const;


    private:
	//sidecar attribute
	bool sidecar;
};

#endif
