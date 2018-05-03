#include "Shop.h"
#include "defs.h"

//overloaded method for adding customer (calls += in the linkedlist)
Shop& Shop::operator+=(Customer* c) { 
    customers += c; 
    return *this;
}

//overloaded method for removing a customer (calls += in the linkedlist)
Shop& Shop::operator-=(Customer* c) { 
    customers -= c; 
    return *this;
}

//gets the customer with specified id# using the subscirpt operator
Customer* Shop::getCustomer(int i)  {

	for (int j = 0; j < customers.getSize(); j++){
		//if id looped through == id of customer looking for
		if (customers[j]->getId() == i){
			return customers[j];
		}
	}
	return 0;
} 
//get method
LinkedList<Customer>& Shop::getCustomers() { return customers; }

//updated += operator for adding mechanics to the mechanic linked list
Shop& Shop::operator+=(Mechanic* m) {    
    mechanics += m;
    return *this;
}

//get method
LinkedList<Mechanic>& Shop::getMechanics()  { return mechanics; }
