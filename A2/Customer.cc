#include <iostream>
using namespace std;
#include "Customer.h"
//constuctor
Customer::Customer(string fname, string lname, string addr, string phone){
	firstName = fname;
	lastName = lname;
	address = addr;
	phoneNumber = phone;
	id = nextId++;
}
//id
int Customer::nextId = 1000;
//simple getter methods
int Customer::getId(){
	return id;
}
string Customer::getFname(){
	return firstName;
}
string Customer::getLname(){
	return lastName;
}
string Customer::getAddress(){
	return address;
}
string Customer::getPhoneNumber(){
	return phoneNumber;
}
int Customer::getNumVehicles(){
	return numVehicles;
}
VehicleArray& Customer::getVehicles(){
	return vehicles;
}
int Customer::addVehicle(Vehicle* v){
	vehicles.add(v);
}
