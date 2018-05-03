#include "Vehicle.h"

Vehicle::Vehicle(string ma, string mo, string col, int y, int m) { 
    make = ma;
    model = mo;
    colour = col;
    year = y;
    mileage = m;
}

string  Vehicle::getMake() const     { return make; }
string  Vehicle::getModel() const    { return model; }
string  Vehicle::getColour() const   { return colour; }
int     Vehicle::getYear() const     { return year; }
int     Vehicle::getMilage() const   { return mileage; }

ostream& operator<<(ostream& output, Vehicle& v){
    	output << "\t" << setw(7) << v.getColour() << " " 
        	<< v.getYear() << " " << setw(17) << v.getMake() << " " << v.getModel() << " (" 
        	<< v.getMilage() << "km)" << endl;
	return output;
}

bool Vehicle::operator<(Vehicle& v){
	return ( getYear() < v.getYear() );
}

bool Vehicle::operator>(Vehicle& v){
	return ( getYear() > v.getYear() );
}
