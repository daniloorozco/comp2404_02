#include "Truck.h"

//truck constructor which includes additional integer that keep track of axles
Truck::Truck(string ma, string mo, string col, int y, int m, int ax) : 
	Vehicle(ma, mo, col, y, m), axles(ax) { }

//get method
int     Truck::getAxles() const   { return axles; }


//tostring tht also prints out number of axles it has
string Truck::toString(){
	ostringstream make_model;
        ostringstream output;

    	make_model << getMake() << " " << getModel();

    	output << "\t" << "Truck:  " << setw(7) << getColour() << " " << getYear() << " " << setw(17);
    	output << make_model.str() << " (" << getMilage() << "km)," << getAxles() << " axles" << endl;

	return output.str();
}
