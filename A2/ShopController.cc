#include "ShopController.h"

ShopController::ShopController() {

    initCustomers();

}

void ShopController::launch() {

    int choice;

    while (1) {
        choice = -1;
        view.mainMenu(choice);
        
        if (choice == 1) {
            view.printCustomers(mechanicShop.getCustomers());
            view.pause();
        } /*else if (choice == 2) {

        } else if (choice == 3) {

        } else if (choice == 4) {
      
        } ... */
        
        else {
            break;
        }
    }
}


void ShopController::initCustomers() {
	
	//Customer* customer;
  	//Vehicle* vehicle;
  	
	//create all the customers
 	Customer* customer1 = new Customer("Bruce","Wayne","Kent Avenue","613-234-5678");
	Customer* customer2 = new Customer("Yolo","Mcadams","Hey Street","613-828-3334");
	Customer* customer3 = new Customer("Ray","Park","Dan Street","613-143-5569");
	Customer* customer4 = new Customer("Clark","Kent","Metropolis avenue","613-223-9377");
	Customer* customer5 = new Customer("Aye","West","Hum Avenue","613-468-3485");
	Customer* customer6 = new Customer("Heythere","haha","heythere crescent","613-432-7622");
	//create all vehciles
  	Vehicle* vehicle1 = new Vehicle("Dodge","Caravan","Blue",1990,100400);
	Vehicle* vehicle2 = new Vehicle("Ford","Forester","Green",2012,400400);
	Vehicle* vehicle3 = new Vehicle("Honda","Accord","White",2015,50400);
	Vehicle* vehicle4 = new Vehicle("Nissan", "Rogue", "Black", 2015, 23440);
	Vehicle* vehicle5 = new Vehicle("Toyota","Camry","Black",2011,5000);
	Vehicle* vehicle6 = new Vehicle("Macleran", "P1", "Orange", 2018, 304000);
	Vehicle* vehicle7 = new Vehicle("Toyota","Rav6","Gold",2015,20000);
	Vehicle* vehicle8 = new Vehicle("Toyota","Escort","Green",2017,100060);
	Vehicle* vehicle9 = new Vehicle("Fiat","Envoy","Purple",2012,60000);
	Vehicle* vehicle10 = new Vehicle("Gmot","Escalade","Black",2016,406000);
	Vehicle* vehicle11 = new Vehicle("Nissan","Malibu","Red",2015,200700);
	Vehicle* vehicle12 = new Vehicle("Buggati", "Veyron", "Red", 2013, 50070);
	//adding all the vehicles to specified customers
	//adding all customers to the shop
  	customer1->addVehicle(vehicle1);
  	mechanicShop.addCustomer(customer1);

  	
  	customer2->addVehicle(vehicle2);
  	mechanicShop.addCustomer(customer2);

  	customer3->addVehicle(vehicle3);
  	customer3->addVehicle(vehicle4);
  	mechanicShop.addCustomer(customer3);

 	customer4->addVehicle(vehicle5);
 	mechanicShop.addCustomer(customer4);

  	customer5->addVehicle(vehicle6);
  	customer5->addVehicle(vehicle7);
  	customer5->addVehicle(vehicle8);
  	mechanicShop.addCustomer(customer5);

 
  	customer6->addVehicle(vehicle9);
  	customer6->addVehicle(vehicle10);
  	customer6->addVehicle(vehicle11);
  	customer6->addVehicle(vehicle12);
  	mechanicShop.addCustomer(customer6);
}
