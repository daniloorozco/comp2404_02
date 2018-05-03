#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

#include "Customer.h"

class CustomerList{
	class Node{
		friend class CustomerList;
		private:
			Customer* data;
			Node* next;
	};
	public:
		//function prototypes
		CustomerList();
        	~CustomerList();
        	void add(Customer*);
        	Customer* get(int);
        	int getSize();
		void toString(string& outStr);
		Customer* getID(int);
		
	private:
		Node* head;
};
#endif
