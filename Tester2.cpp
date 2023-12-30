// Dalton Wright
// CSCI 301 01
// Project #7
// Tester2.cpp

#include <iostream>
#include <string>
#include "FrontList2.h"
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//                              Test-Driver.
////////////////////////////////////////////////////////////////////////////////
int main()
{
  FrontList2<int> aList;

  cout << "Adding integers 0 to 9..." << endl;

  for(int i = 0; i < 10; i++)
  {
    aList.insert(i);
  }

  cout << "Testing the first entry of the list, which should be 9: " << aList.peek() << endl;

  cout << "Testing the list length, which should Be 10: " << aList.getLength() << endl;

  cout << "Testing remove, which should remove 8 integers... " << endl;

  for(int i = 1; i <= 8; i++)
  {
    aList.remove();
  }

  cout << "Testing the list length, which should Be 2: " << aList.getLength() << endl;

  cout << "Displaying the list contents of aList, which should display 1 and 0: " << endl;

  for(int i = 1; i <= aList.getLength(); i++)
  {
    cout << aList.getEntry(i) << endl;
  }

  cout << "Testing the copy constructor, which creates a copiedList of aList... " << endl;

  FrontList2<int> copiedList(aList);

  cout << "Displaying the list contents of copiedList, which should display 1 and 0: " << endl;

  for (int i = 1; i <= 2; i++)
  {
    cout << copiedList.getEntry(i) << endl;
  }

  cout << "Testing clear, which should clear aList... " << endl;

  aList.clear();

  cout << "Testing the number of items in aList, which should be 0: " << aList.getLength() << endl;

  cout << "FrontList2 Tester2 Complete!" << endl;

  return 0;
}
