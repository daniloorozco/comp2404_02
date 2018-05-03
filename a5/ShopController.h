#ifndef SHOPCONTROLLER_H
#define SHOPCONTROLLER_H

#include "View.h"
#include "Shop.h"
#include "LinkedList.h"
#include "VehicleFactory.h"
#include "Vehicle.h"

class ShopController {

    public:
        ShopController();
        void launch();
    private:
        Shop mechanicShop;
        View view;
        void initShop();
	//a vehicle factory object to create the vehicles
	VehicleFactory vehiclefactory;
};

#endif
