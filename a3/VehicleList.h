#ifndef VEHICLELIST_H
#define VEHICLELIST_H

#include "defs.h"
#include "Vehicle.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

class VehicleList{
	//create the node
	class Node{
		friend class VehicleList;
		private:
			Vehicle* data;
			Node* next;

	};
	public:
		VehicleList();
		~VehicleList();
		void add(Vehicle*);
		Vehicle* get(int);
       		int getSize();
		void toString(string& outStr);

	private:
		Node* head;





};
#endif
