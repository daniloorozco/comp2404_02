Assignment 5
COMP 2404 Winter 17
Danilo Orozco: 101035548
2018/04/08

Purpose:
	A small program which could be used by an automotive mechanic business 
	to keep track of their customers, their vehicles and mechanics. Using knowledge of
	LinkedList, pointers, and functions. Also implementing overloaded functions
	and removing methods, implementing inheritance, class templates, virtual methods,
	and updated the program to take advantage of new functionality. 
Files:	
	Customer.cc	//Customer class with ID numbers
	Customer.h
	Vehicle.cc	//base class for other vehicle types to inherit
	Vehicle.h
	View.cc
	View.h
	Shop.cc		
	Shop.h
	ShopController.cc
	ShopController.h
	Person.cc 	//base class inherited by customer and mechanic
	Person.h
	Mechanic.cc 	//child class of Person
	Mechanic.h
	Car.cc		//inherits from vehicle
	Car.h
	Truck.cc	//inherits from vehicle
	Truck.h
	Motorcycle.cc	//inherits from vehicle
	Motorcycle.h
	LinkedList.h	//template class of a linked list to store different types of objects
	
	
	defs.h
Compilation:
	To compile, simply navigate to the directory containing all the files and
	enter: make clean
	       make 	
Launching:
	To run the progam simply input; ./mechanicshop
	The menu will prompt the user to select an option. Press the number of which 
	option you want to test. If you select an adding option enter the info based on
	what the console tells you to input.
	ex.
		2. Add Customer
		Enter your selection: 2
		First name: "Enter Here"

	Another example when adding a vehicle:

		Enter your selection: 3
		Customer ID: 1000
		Vehicle Type (1: Car, 2: Truck, 3: Motorcycle): 2
		Make: Toyota
		Model: Tacoma
		Colour: Blue
		Year: 2018
		Mileage: 1000
		Number of axles: 2
		

