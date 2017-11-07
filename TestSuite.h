/**
*	@author Giovanni Artavia
*	@date 11/6/2017
*	@file TestSuite.h
*	@brief A header file for Test Suite Class
*/

#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class TestSuite
{
  public:

  //Calls the other tests.
  void runTests();

  /*Contains the following tests:
  *Check if correct isEmpty in empty list
  *Check if correct isEmpty on list with one element
  *Check if correct isEmpty on list with multiple (3) elements*/
  void testIsEmpty();

  /*Contains the following tests:
  *Check if isEmpty returns true after adding and removing a node using removeBack.*/
  void testIsEmptyWithRemoveBack();

  /*Contains the following tests:
  *Check if isEmpty returns true after adding and removing a node using removeFront.*/
  void testIsEmptyWithRemoveFront();

  /*Contains the following tests:
  *Check if correct size on empty list
  *Check if correct size on list with one element using addBack
  *Check if correct size on list with multiple (2) elements using addBack
  *Check if correct size when elements are removed*/
  void testSizeWithAddBack();

  /*Contains the following tests:
  *Check if correct size on list with one element using addFront
  *Check if correct size on list with multiple (2) elements using addFront
  *Check if correct size after removeFront*/
  void testSizeWithAddFront();

  /*Contains the following tests:
  *Check for an item in an empty list. Should always return false
  *Add an element to the list using addBack. Then check for wrong element in list
  *Check for right element in list
  *Add second element using addBack and search for right value
  *Test multiple of the same correct element in list*/
  void testSearchWithAddBack();

  /*Contains the following tests:
  *Add an element to the list using addFront. Then check for wrong element in list
  *Check for right element in list
  *Add second element using addFront and search for right value*/
  void testSearchWithAddFront();

  /*Contains the following tests:
  *Check that removeFront returns true if used on a non-empty list.
  *Check that removeFront actually removes front of the list*/
  void testRemoveFrontUsingAddBack();

  /*Contains the following tests:
  *Check that removeFront actually removes front of the list*/
  void testRemoveFrontUsingAddFront();

  /*Contains the following tests:
  *Check that removeFront returns true if used on a non-empty list.
  *Check that removeFront actually removes front of the list using addFront*/
  void testRemoveBackUsingAddBack();

  /*Contains the following tests:
  *Check that removeFront actually removes front of the list using addBack*/
  void testRemoveBackUsingAddFront();

  /*Contains the following tests:
  *Use removeBack on empty list. Should return false and keep the list on size 0.*/
  void testRemoveBackFromEmptyList();

  /*Contains the following tests:
  *Use removeFront on empty list. Should return false and keep the list on size 0.*/
  void testRemoveFrontFromEmptyList();

  /*Contains the following tests:
  *Get entries at each position and check if addBack is actually adding to the back of the list*/
  void testAddBack();

  /*Contains the following tests:
  *Get entries at each position and check if addFront is actually adding to the front of the list*/
  void testAddFront();

  /*Contains the following tests:
  *Test adding a double instead of an int with addBack*/
  void testValidValueForAddBack();

  /*Contains the following tests:
  *Test adding a double instead of an int with addFront*/
  void testValidValueForAddFront();
};

#endif
