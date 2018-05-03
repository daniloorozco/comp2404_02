#include "Motorcycle.h"

//motorcycle constructor
Motorcycle::Motorcycle(string ma, string mo, string col, int y, int m, bool side) : 
	Vehicle(ma, mo, col, y, m), sidecar(side) { }


//boolean to tell if motorcycle has a sidecar or not
bool    Motorcycle::getSideCar() const   { return sidecar;}


string Motorcycle::toString(){
	ostringstream make_model, sidecar;
	ostringstream output;

	//if sidecar is true
	if (getSideCar() == true){
		//output to the stream declaring it has a sidecar
		sidecar << " has a sidecar!";
	}
	else{
		//output to the stream declaring it does not have a sidecar
		sidecar << " doesn't have a sidecar";
	}

    	make_model << getMake() << " " << getModel();
	//output includes the motorcycle
    	output << "\t" << "MOTORCYCLE:  " << setw(7) << getColour() << " " << getYear() << " " << setw(17);
    	output << make_model.str() << " (" << getMilage() << "km)," << sidecar.str() << endl;

	return output.str();




}
