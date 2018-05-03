#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Vehicle.h"
#include "VehicleList.h"
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Person.h"

using namespace std;
//inheritance
class Customer: public Person {

    friend ostream& operator<<(ostream&, Customer&);
    public:
    
        Customer(string="", string="", string="", string="");
    	//get methods
        int getId() const;
        int getNumVehicles() const;
        VehicleList& getVehicles();
	//overloading operators
        void operator+=(Vehicle*);
	bool operator>(Customer&);
	bool operator<(Customer&);
        
    private:

        static int nextId;      
        const int id;
        VehicleList vehicles;
};

#endif
