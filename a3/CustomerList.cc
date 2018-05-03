#include "CustomerList.h"


//list constructor initialise head of list
CustomerList::CustomerList() : head(0) {}

//destructor deletes all the nodes
CustomerList::~CustomerList(){
	Node *current, *nextNode;
	current = head;
	while (current != 0) {
    		nextNode = current->next;
    		delete current;
    		current = nextNode;
  	}
}

void CustomerList::add(Customer* c){
	//create a node that has data that you want to insert to list
	Node* tempNode = new Node;
	tempNode->data = c;
	tempNode->next = 0;
	if (head == 0){
		head = tempNode;
	}
	else{
		Node* current = head;	
		Node* prevNode = 0;
		while (current != 0){
			//store based on alphabetical order of last name
			if (current->data->getLname() >= tempNode->data->getLname())
				//brreak when in corret spot
				break;
			else{
				prevNode = current;
				current = current->next;
			}
		}
		if (current == head){
			//if it is head turn it into the head
			tempNode->next = head;
			head = tempNode;
		}
		else{
			//insert the node
			tempNode->next = current;
			prevNode->next = tempNode;
		}
	}
}

//get size of the linked list
int CustomerList::getSize(){
	//counter to keep track of items in list
	int counter = 0;
	//start at head
	Node *tempNode = head;
	//loop through and find items in list while not null
	while (tempNode != 0){
		//increment counter
		counter++;
		//set node to next node
		tempNode = tempNode->next;
	}
	//return number of nodes
	return counter;
}

//get item in with that id
Customer* CustomerList::getID(int id){
	Node *tempNode = head;
	while (tempNode != 0){
		//loop through and find customer with tht id
		if (tempNode->data->getId() == id)
			return tempNode->data;
		else
			tempNode = tempNode->next;
	}
	//if invalid id
	return NULL;
}

//get customer at index i 
Customer* CustomerList::get(int i){
Node *current = head;
	int counter = 0;
	while (current != 0){
		if (counter == i)
			return (current->data);
		else
			current = current->next;
			counter++;
	}
}
//to string function
void CustomerList::toString(string& outStr){
	//iterate through the list
	for (int i = 0; i < getSize(); i++) {
		//getting all the customers
        	Customer* cust  = get(i);
       		ostringstream name;
        	name << cust->getFname() << " " << cust->getLname();
	
		ostringstream output, numCars;
	
	
		//save all data into the stream
             	output << "Customer ID " << cust->getId() << endl << endl
             	<< "    Name: " << setw(40) << name.str() << endl 
             	<< "    Address: " << setw(37) << cust->getAddress() << endl
             	<< "    Phone Number: " << setw(32) <<  cust->getPhoneNumber() << endl;
             
        	if (cust->getNumVehicles() > 0) {
             		numCars << endl << "    " << cust->getNumVehicles() 
                  	<< " vehicle(s): " << endl << endl;
        	}
		string carOut;
        	VehicleList& varr = cust->getVehicles();
		//toString for the vehiclelist
		varr.toString(carOut);
		//saving all data into the string
		outStr += output.str() + numCars.str() + carOut;
    	}
}


