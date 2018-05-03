#ifndef MECHANIC_H
#define MECHANIC_H

#include <string>
#include "Vehicle.h"
#include "VehicleList.h"
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Person.h"

using namespace std;
//inherits from person
class Mechanic : public Person{

	friend ostream& operator<<(ostream&, Mechanic&);

	public:
        	Mechanic(string="", string="", string="", string="",int=0);
		//unique ID and salary
		int getId() const;
		int getSalary() const;

	private:
		//private info
		int salary;
		static int nextId;
        	const int id;


};
#endif
