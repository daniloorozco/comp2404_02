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

ostream& operator<<(ostream& output, Vehicle& v)
{

    output << v.toString() << endl;
    return output;
}

string Vehicle::toString(){
	ostringstream make_model;
        ostringstream output;

    	make_model << getMake() << " " << getModel();

    	output << "\t" << setw(7) << getColour() << " " << getYear() << " " << setw(17);
    	output << make_model.str() << " (" << getMilage() << "km)" << endl;

	return output.str();	
}


bool Vehicle::operator<(Vehicle& v)
{
    return year < v.year;
}

bool Vehicle::operator>(Vehicle& v)
{
    return year > v.year;
}
