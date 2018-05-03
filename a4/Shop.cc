#include "Shop.h"
#include "defs.h"
Shop::Shop(){
	size = 0;
}
Shop::~Shop(){
	for (int i=0; i<getSize(); i++){
		delete mechanics[i];
	}
	
}
Customer* Shop::getCustomer(int i)  { return customers.get(i); } 

CustomerList& Shop::getCustomers() { return customers; }

void Shop::operator+=(Customer* c){
	customers+=c;
}

void Shop::operator-=(Customer* c){
	customers-=c;
}

void Shop::operator+=(Mechanic* m){
	if (getSize() < MAX_MECHANICS){
		mechanics[getSize()] = m;
		size++;
	}
}
//keep track of array size
int Shop::getSize(){
	return size;
}

Mechanic* Shop::getMechanics(int x){
	//get customer at index
	for (int i=0; i < getSize(); i++){
		return mechanics[x];
	}	
}

