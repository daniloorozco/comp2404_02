#include "VehicleArray.h"
#include "Vehicle.h"
#include "defs.h"
#include <stdio.h>
#include <stdlib.h>
//constructor
VehicleArray::VehicleArray(){
	//initialise array
	int i;
	for (i = 0; i<MAX_VEHICLES; i++){
		elements[i] = 0;
	}
	size = 0;
}
VehicleArray::~VehicleArray(){
	//free elements in array
	int i;
	for (i=0; i<MAX_VEHICLES; i++){
		free(elements[i]);
	}

}
int VehicleArray::getSize(){
	return size;
}
int VehicleArray::add(Vehicle* v){
	//add vehicle to array
	if (size < MAX_VEHICLES){
		elements[size] = v;
		size++;
		return C_OK; 
	}
	else{
		return C_NOK;
	}
}
//get item at index x
Vehicle* VehicleArray::get(int x){
	if (x > size || x < 0){
		return 0; 
	}
	else{
		return elements[x];
	}	
}
