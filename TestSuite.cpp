#include "TestSuite.h"

void TestSuite::runTests()
{
  std::cout << "\n\n ******RUNNNING TESTS******\n";
  testIsEmpty();
  std::cout << '\n';
  testSizeWithAddBack();
  std::cout << '\n';
  testSizeWithAddFront();
  std::cout << '\n';
  testSearchWithAddBack();
  std::cout << '\n';
  testSearchWithAddFront();
  std::cout << '\n';
  testRemoveFrontUsingAddBack();
  std::cout << '\n';
  testRemoveFrontUsingAddFront();
  std::cout << '\n';
  testRemoveBackUsingAddBack();
  std::cout << '\n';
  testRemoveBackUsingAddFront();
  std::cout << '\n';
  testRemoveBackFromEmptyList();
  std::cout << '\n';
  testRemoveFrontFromEmptyList();
  std::cout << "\n\n ******END OF TESTS******\n";
}



void TestSuite::testIsEmpty()
{
  LinkedListOfInts list;

  //Check if correct isEmpty in empty list
  if(list.isEmpty())
  {
    std::cout << "Test isEmpty on empty list: Passed!\n";
  }
  else
  {
    std::cout << "test isEmpty on empty list: Failed\n";
  }

  //Check if correct isEmpty on list with one element
  list.addBack(0);
  if(!list.isEmpty())
  {
    std::cout << "Test isEmpty on list with one element: Passed!\n";
  }
  else
  {
    std::cout << "test isEmpty on list with one element: Failed\n";
  }

  //Check if correct isEmpty on list with multiple (3) elements
  list.addFront(1);
  list.addBack(2);

  if(!list.isEmpty())
  {
    std::cout << "Test isEmpty on list with multiple elements: Passed!\n";
  }
  else
  {
    std::cout << "test isEmpty on list with multiple elements: Failed\n";
  }

  //delete list;
}

void TestSuite::testSizeWithAddBack()
{
  LinkedListOfInts list;

  //Check if correct size on empty list
  if(list.size() == 0)
  {
    std::cout << "Test size on empty list: Passed!\n";
  }
  else
  {
    std::cout << "Test size on empty list: Falied\n";
  }

  //Check what happens upon removing an element of an empty list
  //list.removeBack();
  //std::cout << list.size();

  //Check if correct size on list with one element using addBack
  list.addBack(1);
  if(list.size() == 1)
  {
    std::cout << "Test size on list with one element using addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test size on list with one element using addBack: Falied\n";
  }

  //Check if correct size on list with multiple (2) elements using addBack
  list.addBack(2);
  if(list.size() == 2)
  {
    std::cout << "Test size on list with multiple elements using addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test size on list with multiple elements using addBack: Falied\n";
  }

  //Check if correct size when elements are removed
  list.removeBack();
  if(list.size() == 1)
  {
    std::cout << "Test size on list after removeBack: Passed!\n";
  }
  else
  {
    std::cout << "Test size on list after removeBack: Falied\n";
  }
}

void TestSuite::testSizeWithAddFront()
{
  LinkedListOfInts list;

  //Check if correct size on list with one element using addFront
  list.addFront(2);
  if(list.size() == 1)
  {
    std::cout << "Test size on list with 1 element using addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test size on list with 1 element using addFront: Falied\n";
  }

  //Check if correct size on list with multiple (2) elements using addFront
  list.addFront(2);
  if(list.size() == 2)
  {
    std::cout << "Test size on list with multiple elements using addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test size on list with multiple elements using addFront: Falied\n";
  }

  //Check if correct size after removeFront
  list.removeFront();
  if(list.size() == 1)
  {
    std::cout << "Test size on list after removeFront: Passed!\n";
  }
  else
  {
    std::cout << "Test size on list after removeFront: Falied\n";
  }
}

void TestSuite::testSearchWithAddBack()
{
  LinkedListOfInts list;

  //Check for an item in an empty list. Should always return false
  if(!list.search(5))
  {
    std::cout << "Test Search of empty list: Passed! \n";
  }
  else
  {
    std::cout << "Test Search of empty list: Failed\n";
  }

  //Add an element to the list using addBack. Then check for wrong element in list
  list.addBack(1);
  if(!list.search(5))
  {
    std::cout << "Test Search of wrong value in a list with 1 eltestRemoveFrontUsingAddBackement added with addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of wrong value in a list with 1 element added with addBack: Failed\n";
  }

  //Check for right element in list
  if(list.search(1))
  {
    std::cout << "Test Search of right value in a list with 1 element added with addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of right value in a list with 1 element added with addBack: Failed\n";
  }

  //Add second element using addBack
  list.addBack(2);
  if(list.search(2))
  {
    std::cout << "Test Search of right value in a list with 2 elements with addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of right value in a list with 2 elements with addBack: Failed\n";
  }

  //Test multiple of the same element in  else list
  list.addBack(1);
  if(list.search(1))
  {
    std::cout << "Test Search of right value in a list with several correct elements: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of right value in a list with several correct elements: Failed\n";
  }
}

void TestSuite::testSearchWithAddFront()
{
  LinkedListOfInts list;

  //Add an element to the list using addFront. Then check for wrong element in list
  list.addFront(1);
  if(!list.search(5))
  {
    std::cout << "Test Search of wrong value in a list with 1 element added with addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of wrong value in a list with 1 element added with addFront: Failed\n";
  }

  //Check for right element in list
  if(list.search(1))
  {
    std::cout << "Test Search of right value in a list with 1 element added with addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of right value in a list with 1 element added with addFront: Failed\n";
  }

  //Add second element using addBack
  list.addFront(2);
  if(list.search(2))
  {
    std::cout << "Test Search of right value in a list with 2 elements with addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test Search of right value in a list with 2 elements with addFront: Failed\n";
  }
}

void TestSuite::testRemoveFrontUsingAddBack()
{
  LinkedListOfInts list;


  list.addBack(1);
  list.addBack(2);

  //Check that removeFront returns true if used on a non-empty list.
  if(list.removeFront())
  {
    std::cout << "Test removeFront returns true if used on a non-empty list: Passed!\n";
  }
  else
  {
    std::cout << "Test removeFront returns true if used on a non-empty list: Failed\n";
  }

  //Check that removeFront actually removes front of the list
  list.removeFront();
  if(!list.search(2))
  {
    std::cout << "Test removeFront actually removes from front of the list using addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test removeFront actually removes from front of the list using addBack: Failed\n";
  }
}

void TestSuite::testRemoveFrontUsingAddFront()
{
  LinkedListOfInts list;

  //Check that removeFront actually removes front of the list
  list.addFront(1);
  list.addFront(2);
  list.removeFront();
  if(!list.search(1))
  {
    std::cout << "Test removeFront actually removes from front of the list using addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test removeFront actually removes from front of the list using addFront: Failed\n";
  }
}

void TestSuite::testRemoveBackUsingAddBack()
{
  LinkedListOfInts list;

  list.addBack(1);
  list.addBack(2);

  //Check that removeFront returns true if used on a non-empty list.
  if(list.removeBack())
  {
    std::cout << "Test removeBack returns true if used on a non-empty list: Passed!\n";
  }
  else
  {
    std::cout << "Test removeBack returns true if used on a non-empty list: Failed\n";
  }

  //Check that removeFront actually removes front of the list
  list.removeBack();
  if(!list.search(1))
  {
    std::cout << "Test removeBack actually removes from back of the list using addBack: Passed!\n";
  }
  else
  {
    std::cout << "Test removeBack actually removes from back of the list using addBack: Failed\n";
  }
}

void TestSuite::testRemoveBackUsingAddFront()
{
  LinkedListOfInts list;

  //Check that removeFront actually removes front of the list
  list.addFront(1);
  list.addFront(2);
  list.removeBack();
  if(!list.search(2))
  {
    std::cout << "Test removeBack actually removes from back of the list using addFront: Passed!\n";
  }
  else
  {
    std::cout << "Test removeBack actually removes from back of the list using addFront: Failed\n";
  }
}

void TestSuite::testRemoveBackFromEmptyList()
{
  LinkedListOfInts list;

  //Use removeBack on empty list. Should return false and keep the list on size 0.
  if(!list.removeBack())
  {
    std::cout << "Test removeBack returns false if used on empty list: Passed!\n";
  }
  else
  {
    std::cout << "Test removeBack returns false if used on empty list: Failed\n";
  }

  if(list.size() == 0)
  {
    std::cout << "Test removeBack on empty list gives size 0: Passed!\n";
  }
  else
  {
    std::cout << "Test removeBack on empty list gives size 0: Failed\n";
  }
}

void TestSuite::testRemoveFrontFromEmptyList()
{
  LinkedListOfInts list;

  //Use removeFront on empty list. Should return false and keep the list on size 0.
  if(!list.removeFront())
  {
    std::cout << "Test removeFront returns false if used on empty list: Passed!\n";
  }
  else
  {
    std::cout << "Test removeFront returns false if used on empty list: Failed\n";
  }

  if(list.size() == 0)
  {
    std::cout << "Test removeFront on empty list gives size 0: Passed!\n";
  }
  else
  {
    std::cout << "Test removeFront on empty list gives size 0: Failed\n";
  }
}

void TestSuite::testAddBack()
{
  /*LinkedListOfInts list;

  Node<int>* front = nullptr;
  Node<int>* temp = nullptr;
  list.addBack(1);*/

  //list.addBack(2);
  //list.addBack(3);

  //Get entries at each position and check if addBack is actually adding to the back of the list

  //Node<int>* backNode = new Node<int>();
  /*int value1 = temp->getValue();
  temp->getNext();
  int value2 = temp->getValue();
  temp->getNext();
  int value3 = temp->getValue();

  //Check first value
  if(value1 == 3)
  {
    std::cout << "addBack has correct order for first value: Passed!\n";
  }
  else
  {
    std::cout << "addBack has correct order for first value: Failed\n";
  }

  //Check second value
  if(value2 == 2)
  {
    std::cout << "addBack has correct order for second value: Passed!\n";
  }
  else
  {
    std::cout << "addBack has correct order for second value: Failed\n";
    std::cout << value2;
  }

  //Check third value
  if(value3 == 1)
  {
    std::cout << "addBack has correct order for final value: Passed!\n";
  }
  else
  {
    std::cout << "addBack has correct order for final value: Failed\n";
    std::cout << value3;
  }*/
}

//TODO: Check is order is maintained when addBack and addFront are used.
