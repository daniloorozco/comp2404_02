#ifndef VIEW_H
#define VIEW_H

#include "LinkedList.h"
#include "Mechanic.h"
#include "Customer.h"


class View {

    public:
        void mainMenu(int&);
        void printCustomers(LinkedList<Customer>&) const;
        void pause() const;
        void promptUserInfo(string&, string&, string&, string&);
        void promptUserId(int&);
        void displayInvalid();
	//overloads the promptvehicleinfo to prompt the correct info for the correct vehicle type
	//prompt for a regualr car
        void promptVehicleInfo(string&, string&, string&, int&, int&);
	//prompt for a truck
	void promptVehicleInfo(string&, string&, string&, int&, int&, int&);
	//prompt for the motorcycle
	void promptVehicleInfo(string&, string&, string&, int&, int&, bool&);
        void promptVehicle(int, int&);
        void printMechanics(LinkedList<Mechanic>&) const;
	//prompts for the vehicle type
	void promptVehicleType(int&);
    private:
        int readInt() const;
};

#endif
