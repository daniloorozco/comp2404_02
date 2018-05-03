#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

#include "defs.h"
/*template class used for creating linkedlist to store different objects,
  overloaded Functions derived from past assignment from customer list,
  used for template class so objet type is defined by the user */
template <class T>
class LinkedList
{
  //overloaded << operator
  template<class S>
  friend ostream& operator<<(ostream&, LinkedList<T>&);

  class Node
  {
    friend class LinkedList;
    private:
      T* data;
      Node* next;
  };

  public:
    LinkedList();
    ~LinkedList();
    int getSize() const;
    int add(T*);

    //updated types for the linkedlist
    LinkedList<T>& operator+=(T*);
    LinkedList<T>& operator-=(T*);
    T* operator[](int);

  private:
    Node* head;
};


//Constructor
template <class T>
LinkedList<T>::LinkedList() {
  head = 0;
}

//destructor
template <class T>
LinkedList<T>::~LinkedList() {
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != 0) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

//Getsize() method
template <class T>
int LinkedList<T>::getSize() const {
  Node *currNode = head;
  int size = 0;

  while (currNode != 0) {
    currNode = currNode->next;
    size++;
  }
  
  return size;
}

//[] subscritp operator
template <class T>
T* LinkedList<T>::operator[](int i) {
    if(i < 0 || i > (getSize()-1)) {
        return 0;
    } else {

        Node *currNode = head;

        for (int j = 0; j < i; j++) {
            currNode = currNode->next;
        }

        return currNode->data;
    }
}
//Add method
template <class T>
LinkedList<T>& LinkedList<T>::operator+=(T* newItem){
  Node *currNode, *prevNode;
  Node* newNode = new Node;
  newNode->data = newItem;
  newNode->next = 0;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (*(newNode->data) > *(currNode->data))
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
//remove method
template <class T>
LinkedList<T>& LinkedList<T>::operator-=(T* v)
{
  Node *currNode, *prevNode;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (currNode->data == v)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == 0) 
    return *this;

  if (prevNode == 0) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  delete currNode;

  return *this;
}
//<< operator
template <class T>
ostream& operator<<(ostream& output, LinkedList<T>& list){
  for (int i = 0; i < list.getSize(); i++)  {
    output << (*(list[i]));
  }
    
  return output;
}

#endif
