#ifndef VIEW_H
#define VIEW_H

#include "CustomerList.h"
#include "Shop.h"

class View {

    public:
        void mainMenu(int&);
	//printing functions
        void printCustomers(CustomerList&) const;
	void printMechanics(Mechanic*) const;
        void pause() const;
        void promptUserInfo(string&, string&, string&, string&);
        void promptUserId(int&);
        void displayInvalid();
	//function to get user input
        void promptVehicleInfo(string&, string&, string&, int&, int&);
	void promptUserVehicle(int&);
    private:
        int readInt() const;
};

#endif
