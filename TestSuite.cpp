#include "TestSuite.h"

void TestSuite::runTests()
{
  std::cout << "\n\n ******RUNNNING TESTS******\n";
  testIsEmpty();
  std::cout << '\n';
  testIsEmptyWithRemoveBack();
  std::cout << '\n';
  testIsEmptyWithRemoveFront();
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
  std::cout << '\n';
  testAddBack();
  std::cout << '\n';
  testAddFront();
  std::cout << '\n';
  testValidValueForAddBack();
  std::cout << '\n';
  testValidValueForAddFront();

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

void TestSuite::testIsEmptyWithRemoveBack()
{
  LinkedListOfInts list;

  //Check if isEmpty returns true after adding and removing a node using removeBack.

  list.addBack(1);
  list.removeBack();

  if(list.isEmpty())
  {
    std::cout << "Test isEmpty after adding and removing back: Passed!\n";
  }
  else
  {
    std::cout << "Test isEmpty after adding and removing back: Failed\n";
  }
}

void TestSuite::testIsEmptyWithRemoveFront()
{
  LinkedListOfInts list;

  //Check if isEmpty returns true after adding and removing a node using removeFront.

  list.addFront(1);
  list.removeFront();

  if(list.isEmpty())
  {
    std::cout << "Test isEmpty after adding and removing front: Passed!\n";
  }
  else
  {
    std::cout << "Test isEmpty after adding and removing front: Failed\n";
  }
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
  {std::vector<int> v = list.toVector();

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
    std::cout << "Test Search of wrong value in a list with 1 element added with addBack: Passed!\n";
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
  LinkedListOfInts list;


  list.addBack(1);
  list.addBack(2);
  list.addBack(3);

  std::vector<int> v = list.toVector();

  //Get entries at each position and check if addBack is actually adding to the back of the list

  //Check first value
  if(v[0] == 1)
  {
    std::cout << "addBack has correct order for first value: Passed!\n";
  }
  else
  {
    std::cout << "addBack has correct order for first value: Failed\n";
  }

  //Check second value
  if(v[1] == 2)
  {
    std::cout << "addBack has correct order for second value: Passed!\n";
  }
  else
  {
    std::cout << "addBack has correct order for second value: Failed\n";
  }

  //Check third value
  if(v[2] == 3)
  {
    std::cout << "addBack has correct order for final value: Passed!\n";
  }
  else
  {
    std::cout << "addBack has correct order for final value: Failed\n";
  }
}

void TestSuite::testAddFront()
{
  LinkedListOfInts list;


  list.addFront(1);
  list.addFront(2);
  list.addFront(3);

  std::vector<int> v = list.toVector();

  //Get entries at each position and check if addBack is actually adding to the back of the list

  //Check first value
  if(v[0] == 3)
  {
    std::cout << "addFront has correct order for first value: Passed!\n";
  }
  else
  {
    std::cout << "addFront has correct order for first value: Failed\n";
  }

  //Check second value
  if(v[1] == 2)
  {
    std::cout << "addFront has correct order for second value: Passed!\n";
  }
  else
  {
    std::cout << "addFront has correct order for second value: Failed\n";
  }

  //Check third value
  if(v[2] == 1)
  {
    std::cout << "addFront has correct order for final value: Passed!\n";
  }
  else
  {
    std::cout << "addFront has correct order for final value: Failed\n";
  }
}

void TestSuite::testValidValueForAddBack()
{
  LinkedListOfInts list;

  //Test adding a double instead of an int with addBack
  list.addBack(2.5);
  std::vector<int> v = list.toVector();
  if(v[0] == 2)
  {
    std::cout << "addBack does not allow for doubles: Passed!";
  }
  else
  {
    std::cout << "addBack does not allow for doubles: Failed";
  }

  //Note that other values were attempted but they would generate errors. Chars work and they give the ascii values of the given char.
}

void TestSuite::testValidValueForAddFront()
{
  LinkedListOfInts list;

  //Test adding a double instead of an int with addBack
  list.addFront(2.5);
  std::vector<int> v = list.toVector();
  if(v[0] == 2)
  {
    std::cout << "addBack does not allow for doubles: Passed!";
  }
  else
  {
    std::cout << "addBack does not allow for doubles: Failed";
  }

  //Note that other values were attempted but they would generate errors. Chars work and they give the ascii values of the given char.
}
