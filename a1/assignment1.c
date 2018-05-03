//COMP 2404-Assignment 1
//Danilo Orozco
//101035548
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 32
#define MAX_VEHICLES 4
#define MAX_CUSTOMERS 6

typedef struct{
	//MEMBER VARIABLES
	char make[MAX_STR];
	char model[MAX_STR];
	char color[MAX_STR];
	int year;
	int mileage;
}VehicleType;

typedef struct {
	//MEMBER VARIABLES
	char firstName[MAX_STR];
	char lastName[MAX_STR];
	int numRegistered;
	VehicleType vehicle[MAX_VEHICLES];

}CustomerType;

void print_vehicle(VehicleType *v){
	//print all the vehicles that the customer has
	printf("%d %s %s, %s, %dKM\n", v->year, v->make, v->model, v->color, v->mileage);
}

void print_customer(CustomerType *c){
	//print all attributes except vehicle
	printf("%s %s, %d vehicle(s)\n", c->firstName, c->lastName, c->numRegistered);
	int i;
	//to print vehicle loop through the array of vehicles inside customer 
	for (i = 0; i < c->numRegistered; i++){
		print_vehicle(&c->vehicle[i]);
	}
}

int add_vehicle(CustomerType *customer, VehicleType *vehicle){
	//if num registered is less then max vehicles
	if (customer->numRegistered < MAX_VEHICLES){	
		//add vehcile to end of array
		customer->vehicle[customer->numRegistered] = *vehicle;
		//increment size
		customer->numRegistered++;
		//success
		return 0; 
	}
	else{
		//fail to add element to array
		return -1;
	}
}

CustomerType create_customer(char* fname, char* lname){
	//initialise customerType with malloc
	CustomerType *customer =(CustomerType*)malloc(sizeof(CustomerType));
	//null character set as end of char
	customer->firstName[MAX_STR-1] = '\0';
	//string copy the char passed in argument into the customer instance that is created
	strncpy(customer->firstName, fname, MAX_STR-1);
	customer->lastName[MAX_STR-1] = '\0';
	strncpy(customer->lastName, lname, MAX_STR-1);
	//set num of registered vehicles to 0
	customer->numRegistered = 0;
	//return pointer to new instance
	return *customer;
	
}

VehicleType create_vehicle(char* make, char* model, char* colour, int year, int mileage) {
	//initialise customerType with malloc
	VehicleType *vehicle = (VehicleType*)malloc(sizeof(VehicleType));
	//null character set as end of char
	vehicle->make[MAX_STR-1] = '\0';
		//string copy the char passed in argument into the customer instance that is created
	strncpy(vehicle->make, make, MAX_STR-1);
	vehicle->model[MAX_STR-1] = '\0';
	strncpy(vehicle->model, model, MAX_STR-1);
	vehicle->color[MAX_STR-1] = '\0';
	strncpy(vehicle->color, colour, MAX_STR-1);
	//set the year and mileage
	vehicle->year = year;
	vehicle->mileage = mileage;
	//return pointer to new instance
	return *vehicle;
}


int main() {
	
	//array containing customers
	CustomerType customers[MAX_CUSTOMERS];
	//create customers
	customers[0] = create_customer("Bruce", "Wayne");
  	customers[1] = create_customer("Clark","Kent");
    	customers[2] = create_customer("Barry","Allen");
    	customers[3] = create_customer("Diana","Prince");
    	customers[4] = create_customer("Frank","George");
    	customers[5] = create_customer("Billy","West");

	//create all the cars
	VehicleType car1 = create_vehicle("Ford", "Fiesta", "Red", 2007, 100000);
	VehicleType car2 = create_vehicle("Subaru", "Forester", "Blue", 2016, 40000);
	VehicleType car3 = create_vehicle("Honda", "Accord", "Silver", 2016, 5000);
	VehicleType car4 = create_vehicle("Volkswagen", "Beetle", "White", 1972, 36000);
	VehicleType car5 = create_vehicle("Toyota", "Camry", "Black", 2010, 60000);
	VehicleType car6 = create_vehicle("Ford", "Escort", "Blue", 1990, 45000);
	VehicleType car7 = create_vehicle("Nissan", "Rogue", "Black", 2015, 23440);
	VehicleType car8 = create_vehicle("Dodge", "Ram", "Dark Blue", 2017, 36255);
	VehicleType car9 = create_vehicle("Macleran", "P1", "Orange", 2018, 30000);
	VehicleType car10 = create_vehicle("Jeep", "Wrangler", "Grey", 2010, 30400);
	VehicleType car11 = create_vehicle("Dodge", "Charger", "Purple", 2000, 3900);
	VehicleType car12 = create_vehicle("Ford", "Escape", "White", 2011, 300000);
	VehicleType car13 = create_vehicle("Nissan", "Juke", "Silver", 2013, 45000);
	VehicleType car14 = create_vehicle("Honda", "Civic", "Red", 2000, 12344);
	VehicleType car15 = create_vehicle("Buggati", "Veyron", "Red", 2013, 5000);


	//adding all the vehicles to specified customers
	add_vehicle(&customers[0], &car1);
	add_vehicle(&customers[1], &car2); add_vehicle(&customers[1], &car3);
	add_vehicle(&customers[2], &car4); add_vehicle(&customers[2], &car5); 
	add_vehicle(&customers[2], &car6);
	add_vehicle(&customers[3], &car7); add_vehicle(&customers[3], &car8);
	add_vehicle(&customers[3], &car9); add_vehicle(&customers[3], &car10);
	add_vehicle(&customers[4], &car11);add_vehicle(&customers[4], &car12);
	add_vehicle(&customers[4], &car13);add_vehicle(&customers[4], &car14);
	add_vehicle(&customers[5], &car15);
	//this car wont get added
	add_vehicle(&customers[4], &car13);

	

	//Loop through customers array and print everything
	for(int i = 0; i < MAX_CUSTOMERS; i++){
    		print_customer(&customers[i]);
		printf("\n\n");
    	}
	
    return 0;
}


