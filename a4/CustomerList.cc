
using namespace std;
#include <string>

#include "CustomerList.h"

CustomerList::CustomerList() : head(0) { }


CustomerList::~CustomerList()
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

int CustomerList::getSize() const {
  Node *currNode = head;
  int size = 0;

  while (currNode != 0) {
    currNode = currNode->next;
    size++;
  }
  
  return size;
}


void CustomerList::operator+=(Customer* c){
  Node *currNode, *prevNode;
  Node* newNode = new Node;
  newNode->data = c;
  newNode->next = 0;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (*newNode->data < *currNode->data)
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

void CustomerList::operator-=(Customer* c){
	Node *currNode, *prevNode;

	currNode = head;
	prevNode = 0;
	//check if list is empty
	if (head == 0)
		cout<< "List is empty" <<endl;
	else{
		//traverse list to find Node to delete
		while (currNode != 0){
			if (currNode->data == c){
				break;
			}
			else{
				prevNode = currNode;
				currNode = currNode->next;
			}
		}
		//if vehicle not found in list
		if (currNode == 0)
			cout<< "Customer not found in List" <<endl;
		else{
			//if we are deleting the head node
			if (head == currNode){						
				head = head->next;
			}
			//if we are deleting past the head node
			else{
				prevNode->next = currNode->next;
			}
			//delete the node
			delete currNode->data;
			delete currNode;
		}
	}
}

Customer* CustomerList::operator[](int i){
	if (i < 0 || i >= getSize()) return 0;
	Node* currNode = head;
	for (int j = 0; j < i; j++){
		currNode = currNode->next;
	}
	return currNode->data;
}

ostream& operator<<(ostream& output, CustomerList& cList){
	for (int i = 0; i < cList.getSize(); i++){
		output << *(cList[i]) <<endl;
	}
	return output;
}

Customer* CustomerList::get(int id) 
{
  Node *currNode = head;

  while (currNode != 0) {
    if(currNode->data->getId() == id) {
      return currNode->data;
    }
    currNode = currNode->next;
  }
}

