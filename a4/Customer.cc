using namespace std;
#include "Customer.h"


int Customer::nextId = 1000;
//constructor
Customer::Customer(string fname, string lname, string add, string pnum) : 
        id(Customer::nextId++){ 
    	 
	firstName   = fname;
    	lastName    = lname;
    	address     = add;
    	phoneNumber = pnum;
}
//getter methods
int           Customer::getId() const           { return id; }
int           Customer::getNumVehicles() const  { return vehicles.getSize(); }
VehicleList&  Customer::getVehicles()           { return vehicles; }
//adding vehicle to vehicle list using += operator
void Customer::operator+=(Vehicle* v){
	vehicles+=v;
}
// << operator overload
ostream& operator<<(ostream& output, Customer& c){

	output << "Customer ID " << c.getId() << endl << endl
           << "    Name: " << setw(40) << c.getFname() << " " << c.getLname() << endl 
           << "    Address: " << setw(37) << c.getAddress() << endl
           << "    Phone Number: " << setw(32) <<  c.getPhoneNumber() << endl;

	if (c.getNumVehicles() > 0) {
        	output << endl << "    " << c.getNumVehicles() 
                       << " vehicle(s): " << endl << endl;
		output << c.getVehicles() << endl<<endl;
		
		
	}
	else{
		output<< "No Vehicles" <<endl;
	}
	
	return output;
}
//checks to see if last name comes before or after the other
bool Customer::operator<(Customer& c){
	return ( getLname() < c.getLname() );
}

bool Customer::operator>(Customer& c){
	return (getLname() < c.getLname() );
}
