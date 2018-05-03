#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "Vehicle.h"

using namespace std;
//inherits from vehicle
class Truck : public Vehicle {

    public:
	//truck constructor with addition integer for axels
        Truck(string, string, string, int, int, int);
	//virtual tostring
        virtual string toString();
     
	//get method
	int getAxles() const;

    private:
      	//numbe of axles attribute
	int axles;
};

#endif
