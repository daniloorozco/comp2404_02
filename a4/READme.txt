Assignment 4 
COMP 2404 Winter 17
Danilo Orozco: 101035548
2018/03/25

Purpose:
	A small program which could be used by an automotive mechanic business 
	to keep track of their customers, their vehicles and mechanics. Using knowledge of
	LinkedList, pointers, and functions. Also implementing overloaded functions
	and removing methods and implementing inheritance.
Files:	
	Customer.cc	//Customer class with ID numbers
	Customer.h
	CustomerList.cc
	CustomerList.h
	Vehicle.cc
	Vehicle.h
	VehicleList.cc
	VehicleList.h
	View.cc
	View.h
	Shop.cc
	Shop.h
	ShopController.cc
	ShopController.h
	Person.cc //Superclass inherited by customer and mechanic
	Person.h
	Mechanic.cc //child class of Person
	Mechanic.h
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
	*When removing vehicle inputting " 0 " refers to first vehicle, 1 to the
	second vehicle etc.
