/**
 * @file Officer.cpp
 * @author Noah Melton
 * @date 2025-04-18
 * @brief This is the .cpp file for the officer class
 * 
 * this is where we implement the functions we declared in the officer.h file
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * the default constructor for the officer class
 *
 * @pre N/A
 * @post An instance of the officer class is created, and the attribute "evilness" is assigned a value of 500
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * This is the parameterized constructor for the officer class
 *
 * @param int ID the officer's ID
 * @param int years the number of years they have worked at the company
 * @param double hourlyRate the rate that the officer gets paid at
 * @param float hoursWorked the number of hours that the officer has worked in the pay period
 * @param double evilness an abstract and yet somehow quantifiable attribute of the officer in question
 * @pre N/A
 * @post an instance of the officer class is created, with its attributes being whatever is specified by the user in the parenthesis
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * this function just prints out the details for an officer
 *
 * @pre you need an officer instance that has been created with valid values
 * @return void No return type, this function just prints out the contents of the officer class 
 * @post the details are printed out for the user to see
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
