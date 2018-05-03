#include "Vehicle.h"
//constructor
Vehicle::Vehicle(string make1, string model1, string colour1, int year1, int mileage1){
	make = make1;
	model = model1;
	colour = colour1;
	year = year1;
	mileage = mileage1;
}
//somple getters
string Vehicle::getMake(){
	return make;
}
string Vehicle::getModel(){
	return model;
}
string Vehicle::getColour(){
	return colour;
}
int Vehicle::getYear(){
	return year;
}
int Vehicle::getMilage(){
	return mileage;
}
