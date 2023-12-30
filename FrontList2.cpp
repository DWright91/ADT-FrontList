// Dalton Wright
// CSCI 301 01
// Project #7
// FrontList2.cpp

#include "FrontList2.h"

template <class ItemType>
FrontList2<ItemType>::FrontList2()
{
}

template <class ItemType>
FrontList2<ItemType>::FrontList2(const FrontList2<ItemType>& aList) : LinkedList<ItemType>(aList)
{
}

template <class ItemType>
FrontList2<ItemType>::~FrontList2()
{
}

template <class ItemType>
bool FrontList2<ItemType>::insert(const ItemType& newEntry)
{
  return LinkedList<ItemType>::insert(1, newEntry);
}

template <class ItemType>
bool FrontList2<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
  return LinkedList<ItemType>::insert(1, newEntry);
}

template <class ItemType>
bool FrontList2<ItemType>::remove()
{
  return LinkedList<ItemType>::remove(1);
}

template <class ItemType>
bool FrontList2<ItemType>::remove(int position)
{
  return LinkedList<ItemType>::remove(1);
}

template <class ItemType>
ItemType FrontList2<ItemType>::peek()
{
  return LinkedList<ItemType>::getEntry(1);
}

/* Override of public functions from inherited class */
template <class ItemType>
void FrontList2<ItemType>::setEntry(int position, const ItemType& newEntry) throw(PrecondViolatedExcep)
{
  return;
}
