using namespace std;
#include "Mechanic.h"

int Mechanic::nextId = 5000;
//mechanic constructor 
Mechanic::Mechanic(string fname, string lname, string add, string pnum, int slry) : 
        id(Mechanic::nextId++){ 
    	 
	firstName   = fname;
    	lastName    = lname;
    	address     = add;
    	phoneNumber = pnum;
	salary = slry;
}
//get functions
int Mechanic::getId() const{ return id;}
int Mechanic::getSalary() const {return salary;}
//<< overloading
ostream& operator<<(ostream& output, Mechanic& c){

	output << "Mechanic ID " << c.getId() << endl << endl
           << "    Name: " << setw(40) << c.getFname() << " " << c.getLname() << endl 
           << "    Address: " << setw(37) << c.getAddress() << endl
           << "    Phone Number: " << setw(32) <<  c.getPhoneNumber() << endl
	   << "    Salary: " << setw(32) <<"$"<< c.getSalary() << endl;
	
	return output;
}
