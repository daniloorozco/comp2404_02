#ifndef SHOP_H
#define SHOP_H

#include "Customer.h"
#include "CustomerList.h"
#include "Mechanic.h"
#include "defs.h"

class Shop{

    public:
	Shop();
	~Shop();
        Customer* getCustomer(int);
        CustomerList& getCustomers();
	Mechanic* getMechanics(int x);
	void operator+=(Customer*);
	void operator-=(Customer*);
	void operator+=(Mechanic*);
	int getSize();
	
    private:
        CustomerList customers;
	Mechanic* mechanics[MAX_MECHANICS];
	int size;

};

#endif
