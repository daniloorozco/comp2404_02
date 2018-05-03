#ifndef VEHICLELIST_H
#define VEHICLELIST_H

#include "Vehicle.h"


class VehicleList
{
  friend ostream& operator<<(ostream&, VehicleList&);
  class Node
  {
    friend class VehicleList;
    private:
      Vehicle* data;
      Node*    next;
  };

  public:
    VehicleList();
    ~VehicleList();
    int getSize() const;
    void operator+=(Vehicle*);
    Vehicle* operator[](int);
    void operator-=(Vehicle*);
  private:
    Node* head;
};

#endif
