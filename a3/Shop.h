#ifndef SHOP_H
#define SHOP_H

#include "Customer.h"
#include "CustomerList.h"

class Shop{

    public:
        void addCustomer(Customer*);
        Customer* getCustomer(int) ;
	CustomerList& getCustomers();

    private:
        //CustomerArray customers;
	CustomerList customers;

};

#endif
