#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle{
    //constructor
    public:
        Car(string, string, string, int, int);
	virtual string toString();
    //inherits from vehicle class
    private:
    
};

#endif
