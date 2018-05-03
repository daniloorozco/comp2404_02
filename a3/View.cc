#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include "View.h"
#include "CustomerList.h"
#include "Customer.h"
#include "VehicleList.h"
#include "Vehicle.h"


void View::mainMenu(int& choice) {
    string str;

    choice = -1;
    //added options 2 and 3 to menu
    cout<< "\n\n\n         **** Toby's Auto Mechanic Information Management System ****\n\n";
    cout<< "                                 MAIN MENU\n\n";
    cout<< "        1. Print Customer Database\n\n";
    cout<< "        2. Add a Customer\n\n";
    cout<< "        3. Add a Vehicle\n\n";
    cout<< "        0. Exit\n\n";
    //increase choice between 0 and 3
    while (choice < 0 || choice > 3) {
        cout << "Enter your selection:  ";
        choice = readInt();
    }

    if (choice == 0) { cout << endl; }
}

//print the customers
void View::printCustomers(CustomerList& arr) {
    cout << endl << "CUSTOMERS: " << endl << endl;
    string newStr;
    //call the to string to print the customers and vehicles
    arr.toString(newStr);
    cout << newStr << endl;
}

void View::addCustomer(CustomerList& arr){
	cout << endl << "Add a Customer:" << endl << endl;
	Customer* newCustomer;
	string fname, lname, addy, phone;
	//get all user input foe new customer
	cout << "Enter first name:  ";
	fname = readStr();
	cout << "Enter last name:  ";
	lname = readStr();
	cout << "Enter Address:  ";
	addy = readStr();
	cout << "Enter Phone Number:  ";
	phone = readStr();
	//create th new customer
	newCustomer = new Customer(fname, lname, addy, phone);	
	//add customer to the list
	arr.add(newCustomer);
}
void View::addVehicle(CustomerList& arr){
	cout << endl << "Add a Vehicle:" << endl << endl;
	Vehicle* newVehicle;
	cout << "Enter Customer ID:  ";
	int id;
	id = readInt();
	if (arr.getID(id) == NULL){
		cout << "Invalid ID" << endl;
	}
	else{
		//initialise all variables
		string make, model, color; 
		int year, milage;
		//get user input for new vehicle
		cout << "Enter Make:  ";
		make = readStr();
		cout << "Enter Model:  ";
		model = readStr();
		cout << "Enter Colour:  ";
		color = readStr();
		cout << "Enter Year:  ";
		year = readInt();
		cout << "Enter Milage:  ";
		milage = readInt();
		//create the new vehicle
		newVehicle = new Vehicle(make, model, color, year, milage);
		//add vehicle to customer with given id
    		arr.getID(id)->addVehicle(newVehicle);
	}
}

void View::pause() {
    string str;

    cout << "Press enter to continue...";
    getline(cin, str);
}
//function to read lines of the string and save them
string View::readStr(){
	string str, item;
	getline(cin, str);
	stringstream ss(str);
	ss >> item;
	return item;
}

int View::readInt() {
    string str;
    int    num;

    getline(cin, str);
    stringstream ss(str);
    ss >> num;

    return num;
}
