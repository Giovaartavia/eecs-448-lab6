#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class TestSuite
{
  public:

  void runTests();
  void testIsEmpty();
  void testIsEmptyWithRemoveBack();
  void testIsEmptyWithRemoveFront();
  void testSizeWithAddBack();
  void testSizeWithAddFront();
  void testSearchWithAddBack();
  void testSearchWithAddFront();
  void testRemoveFrontUsingAddBack();
  void testRemoveFrontUsingAddFront();
  void testRemoveBackUsingAddBack();
  void testRemoveBackUsingAddFront();
  void testRemoveBackFromEmptyList();
  void testRemoveFrontFromEmptyList();
  void testAddBack();
  void testAddFront();
};

#endif
