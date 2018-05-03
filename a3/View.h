#ifndef VIEW_H
#define VIEW_H

#include "CustomerList.h"

class View {

    public:
        void mainMenu(int&);
	//menu functions
        void printCustomers(CustomerList&);
	void addCustomer(CustomerList&);
	void addVehicle(CustomerList&);
        void pause();

    private:
        int readInt();
	string readStr();
};

#endif
