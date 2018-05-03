#include "VehicleList.h"

//list constructor initialise head of list
VehicleList::VehicleList() : head(0) {}

//destructor deletes all the nodes
VehicleList::~VehicleList(){
	Node *current, *nextNode;
	current = head;
	while (current != 0) {
    		nextNode = current->next;
    		delete current;
    		current = nextNode;
  	}
}

void VehicleList::add(Vehicle* v){
	//create a node that has data that you want to insert to list
	Node* tempNode = new Node;
	tempNode->data = v;
	tempNode->next = 0;
	if (head == 0){
		head = tempNode;
	}
	else{
		Node* current = head;	
		Node* prevNode = 0;
		while (current != 0){
			//store based on year which vehicle was made
			if (current->data->getYear() <= tempNode->data->getYear())
				break;
			else{
				prevNode = current;
				current = current->next;
			}
		}
		if (current == head){	
			//add node at front and push head over
			tempNode->next = head;
			head = tempNode;
		}
		else{
			//add the node
			tempNode->next = current;
			prevNode->next = tempNode;
		}
	}
}

//get size of the linked list
int VehicleList::getSize(){
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
//ith item in linked list
Vehicle* VehicleList::get(int i){
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
void VehicleList::toString(string& outStr){
	for (int j = 0; j < getSize(); j++){
		//get all the vehicles from customer
		Vehicle* v = get(j);
		ostringstream make_model, output;

		make_model << v->getMake() << " " << v->getModel();
		//save data of vehicle to the stream formatted
                output << "\t" << j+1 << ") " << setw(7) << v->getColour() << " " 
                << v->getYear() << " " << setw(17) << make_model.str() << " (" 
                << v->getMilage() << "km)" << endl;
		//save to outString 
		outStr += output.str();
	}

}
