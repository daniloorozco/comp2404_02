#ifndef SHOP_H
#define SHOP_H

#define MAX_MECHANICS    5

#include "Mechanic.h"
#include "Customer.h"
#include "LinkedList.h"

class Shop{

    public:
        //overloaded operators
        Shop& operator+=(Customer*);  
	Shop& operator-=(Customer*);      
        Customer* getCustomer(int);
        LinkedList<Customer>& getCustomers();
	//updated += operator for adding a mechanic to the shop
        Shop& operator+=(Mechanic*);
	//updated linked list
        LinkedList<Mechanic>& getMechanics();

    private:
	//replace customer and mechanic lists using the linked list template
        LinkedList<Customer> customers;
        LinkedList<Mechanic> mechanics;
};

#endif
