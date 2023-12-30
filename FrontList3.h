// Dalton Wright
// CSCI 301 01
// Project #7
// FrontList3.h

#ifndef _FrontList3_h
#define _FrontList3_h

#include "LinkedList.h"

template <class ItemType>
class FrontList3 : private LinkedList<ItemType>
{
  public:
    FrontList3();
    FrontList3(const FrontList3<ItemType>& aList);
    virtual ~FrontList3();

    bool insert(const ItemType& newEntry);
    bool remove();
    bool isEmpty() const;
    int getLength() const;
    void clear();
    ItemType peek();
    ItemType getEntry(const int& position) const throw (PrecondViolatedExcep);
};

#include "FrontList3.cpp"
#include "PrecondViolatedExcep.cpp"
#endif
