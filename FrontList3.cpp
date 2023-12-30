// Dalton Wright
// CSCI 301 01
// Project #7
// FrontList3.cpp

#include "FrontList3.h"

template <class ItemType>
FrontList3<ItemType>::FrontList3()
{
}

template <class ItemType>
FrontList3<ItemType>::FrontList3(const FrontList3<ItemType>& aList) :
LinkedList<ItemType>(static_cast< LinkedList<ItemType> >(aList))
{
}

template <class ItemType>
FrontList3<ItemType>::~FrontList3()
{
  clear();
}

template <class ItemType>
bool FrontList3<ItemType>::insert(const ItemType& newEntry)
{
  return LinkedList<ItemType>::insert(1, newEntry);
}

template <class ItemType>
bool FrontList3<ItemType>::remove()
{
  return LinkedList<ItemType>::remove(1);
}

template <class ItemType>
bool FrontList3<ItemType>::isEmpty() const
{
  return LinkedList<ItemType>::isEmpty();
}

template <class ItemType>
int FrontList3<ItemType>::getLength() const
{
  return LinkedList<ItemType>::getLength();
}

template <class ItemType>
void FrontList3<ItemType>::clear()
{
  LinkedList<ItemType>::clear();
}

template <class ItemType>
ItemType FrontList3<ItemType>::peek()
{
  return LinkedList<ItemType>::getEntry(1);
}

template <class ItemType>
ItemType FrontList3<ItemType>::getEntry(const int& position) const throw(PrecondViolatedExcep)
{
  return LinkedList<ItemType>::getEntry(position);
}
