#include "VehicleFactory.h"
using namespace std;
//overloaded for functions for creating a certain type of vehicle

//instance of a car
Vehicle* VehicleFactory::createVehicle(string ma, string mo, string col, int y, int m){
	Vehicle *veh = new Car(ma, mo, col, y, m);
	return veh;
}
//instance of a truck
Vehicle* VehicleFactory::createVehicle(string ma, string mo, string col, int y, int m, int ax){
	Vehicle *veh = new Truck(ma, mo, col, y, m, ax);
	return veh;
}
//instance of a motorcycle
Vehicle* VehicleFactory::createVehicle(string ma, string mo, string col, int y, int m, bool side){
	Vehicle *veh = new Motorcycle(ma, mo, col, y, m, side);
	return veh;
}
