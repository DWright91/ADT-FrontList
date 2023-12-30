// Dalton Wright
// CSCI 301 01
// Project #7
// FrontList2.h

#ifndef _FrontList2_h
#define _FrontList2_h

#include "LinkedList.h"

template <class ItemType>
class FrontList2 : public LinkedList<ItemType>
{
  public:
    FrontList2();
    FrontList2(const FrontList2<ItemType>& aList);
    virtual ~FrontList2();

    bool insert(const ItemType& newEntry);
    bool insert(int newPosition, const ItemType& newEntry);
    bool remove();
    bool remove(int position);
    ItemType peek();
    void setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep);

    /* Below are all the public member functions of LinkedList
     bool isEmpty() const;
     int getLength() const;

     void clear();
     bool insert(int newPosition, const ItemType& newEntry);
     bool remove(int position);

     ItemType getEntry(int position) const throw(PrecondViolatedExcep);
     void setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep);
     */
};

#include "FrontList2.cpp"
#include "PrecondViolatedExcep.cpp"
#endif
