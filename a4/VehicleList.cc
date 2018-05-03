#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;
#include <string>

#include "VehicleList.h"

VehicleList::VehicleList() : head(0) { }


VehicleList::~VehicleList()
{
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != 0) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}



int VehicleList::getSize() const {
  Node *currNode = head;
  int size = 0;

  while (currNode != 0) {
    currNode = currNode->next;
    size++;
  }
  
  return size;
}

void VehicleList::operator+=(Vehicle* v){
  Node *currNode, *prevNode;
  Node* newNode = new Node;
  newNode->data = v;
  newNode->next = 0;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (*newNode->data > *currNode->data)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == 0) {
    head = newNode;
  }
  else {
    prevNode->next = newNode;
  }

  newNode->next = currNode;
}

void VehicleList::operator-=(Vehicle* v){
	Node *currNode, *prevNode;
	currNode = head;
	prevNode = 0;
	//check if list is empty
	if (head == 0)
		cout<< "List is empty" <<endl;
	else{
		//traverse list to find Node to delete
		while (currNode != 0){
			if (currNode->data == v){
				break;
			}
			else{
				prevNode = currNode;
				currNode = currNode->next;
			}
		}
		//if vehicle not found in list
		if (currNode == 0)
			cout<< "Vehicle not found in List" <<endl;
		else{
			//if we are deleting the head node
			if (head == currNode)
				head = head->next;
			//if we are deleting past the head node
			else
				prevNode->next = currNode->next;
			//delete the node
			delete currNode->data;
			delete currNode;
		}
	}
}
Vehicle* VehicleList::operator[](int i){
	//loopthrough linked list and return vehicle
	if (i < 0 || i >= getSize()) return 0;
	Node* currNode = head;
	for (int j = 0; j < i; j++){
		currNode = currNode->next;
	}
	return currNode->data;
}

ostream& operator<<(ostream& output, VehicleList& vList){
	for (int i = 0; i < vList.getSize(); i++){
		output << *(vList[i]) <<endl;
	}
	return output;
}

