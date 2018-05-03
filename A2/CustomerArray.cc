#include "CustomerArray.h"
#include "Customer.h"
#include "defs.h"
#include <stdio.h>
#include <stdlib.h>

CustomerArray::CustomerArray(){
	//initialise array
	int i;
	for(i = 0; i<MAX_CUSTOMERS; i++){
		elements[i] = 0;
	}
	size = 0;
}
CustomerArray::~CustomerArray(){
	//free elements one by one
	int i;
	for (i=0; i<MAX_CUSTOMERS; i++){
		free(elements[i]);
	}

}
int CustomerArray::getSize(){
	return size;
}
int CustomerArray::add(Customer* c){
	//adding element to array
	if (size < MAX_CUSTOMERS){
		elements[size] = c;
		size++;
		return C_OK; 
	}
	else{
		return C_NOK;
	}
}
Customer* CustomerArray::get(int x){
	//get customer at index
	if (x > size || x < 0){
		return 0; 
	}
	else{
		return elements[x];
	}	
}
