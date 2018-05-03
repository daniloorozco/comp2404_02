#include "Car.h"

//car constructor, adds nothing nw to vehicle class
Car::Car(string ma, string mo, string col, int y, int m) : 
	Vehicle(ma, mo, col, y, m) { }


//tostring methid
string Car::toString(){
	ostringstream make_model;
        ostringstream output;

    	make_model << getMake() << " " << getModel();
	//adds car to the output
    	output << "\t" << "CAR:  " << setw(7) << getColour() << " " << getYear() << " " << setw(17);
    	output << make_model.str() << " (" << getMilage() << "km)" << endl;

	return output.str();
}
