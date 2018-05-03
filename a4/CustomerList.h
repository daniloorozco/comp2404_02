#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include "Customer.h"
#include <sstream>
#include <iostream>
#include <iomanip>


class CustomerList
{
  class Node
  {
    friend ostream& operator<<(ostream&, CustomerList&);
    friend class CustomerList;
    private:
      Customer* data;
      Node*    next;
  };

  public:
    CustomerList();
    ~CustomerList();
    int getSize() const;
    Customer* get(int);
    void operator+=(Customer*);
    void operator-=(Customer*);
    Customer* operator[](int);
  private:
    Node* head;
};

#endif
