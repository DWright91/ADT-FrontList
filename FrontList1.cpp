// Dalton Wright
// CSCI 301 01
// Project #7
// FrontList1.cpp

#include "FrontList1.h"

template<class ItemType>
FrontList1<ItemType>::FrontList1()
{
  listPtr = new LinkedList<ItemType>();
}

template<class ItemType>
FrontList1<ItemType>::FrontList1(const FrontList1<ItemType>& aList)
{
  listPtr = new LinkedList<ItemType>();

  for(int i = 1; i <= aList.getLength(); i++)
  {
    listPtr->insert(i, aList.getEntry(i));
  }
}

template <class ItemType>
FrontList1<ItemType>::~FrontList1()
{
  clear();
}

template <class ItemType>
bool FrontList1<ItemType>::insert(const ItemType& newEntry)
{
  return listPtr->insert(1, newEntry);
}

template <class ItemType>
bool FrontList1<ItemType>::remove()
{
  return listPtr->remove(1);
}

template <class ItemType>
bool FrontList1<ItemType>::isEmpty()
{
  return listPtr->isEmpty();
}

template <class ItemType>
int FrontList1<ItemType>::getLength() const
{
  return listPtr->getLength();
}

template <class ItemType>
void FrontList1<ItemType>::clear()
{
  listPtr->clear();
}

template <class ItemType>
ItemType FrontList1<ItemType>::peek()
{
  return listPtr->getEntry(1);
}

template <class ItemType>
ItemType FrontList1<ItemType>::getEntry(const int& position) const throw(PrecondViolatedExcep)
{
  return listPtr->getEntry(position);
}
