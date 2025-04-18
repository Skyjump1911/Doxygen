/**
 * @file Supervisor.cpp
 * @author Noah Melton
 * @date 2025-04-18
 * @brief this is the .cpp (implementation file) for the supervisor class
 * 
 * This is where we define how the membrer functions willl work for the class
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * this is the default constructor for a the supervisor class
 *
 * @pre This takes no arguments and also doesn't require any pre conditions
 * @post An instance of the supervisor class is created. 
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * this is the parameterized constructor for the supervisor class
 *
 * @param int ID The supervisor's id
 * @param int years the number of years they have worked for the company
 * @param double hourlyRate the rate that the supervisor gets paid per hour
 * @param float hoursWorked the number of hours that they have worked in the pay period
 * @param int numSupervised the number of employees that the supervisor is over
 * @pre N/A
 * @post An instance of the supervisor class is created, with the member variables being set to what is put in the parenthesis
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * this is the print function for the supervisor class
 *
 * @pre N/A
 * @return void No return type, this function just prints out the details of an supervisor object
 * @post N/A
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * This is the function which calculates how much money the supervisor has earned for a pay period
 *
 * @pre the amount of hours worked and hourly rate must have already been entered correctly in order for this to work
 * @return double the number of dollars that the supervisor will be earning 
 * @post N/A
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
