// Dalton Wright
// CSCI 301 01
// Project #7
// FrontList1.h

#ifndef _FrontList1_h
#define _FrontList1_h

#include "LinkedList.h"

template <class ItemType>
class FrontList1
{
  private:
    LinkedList<ItemType>* listPtr;
  public:
    FrontList1();
    FrontList1(const FrontList1<ItemType>& aList);
    virtual ~FrontList1();

    bool insert(const ItemType& newEntry);
    bool remove();
    bool isEmpty();
    int getLength() const;
    void clear();
    ItemType peek();
    ItemType getEntry(const int& position) const throw(PrecondViolatedExcep);
};

#include "FrontList1.cpp"
#include "PrecondViolatedExcep.cpp"
#endif
