/**
 * @file Supervisor.h
 * @author Noah Melton
 * @date 2025-04-18
 * @brief This is the header file for the supervisor class
 * 
 * This is where we declare the functions and member variables of the supervisor class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * This is the supervisor class
 *
 * @class Supervisor Supervisor.h "employee/Supervisor.h"
 * @brief This class holds the identifying characteristics of a supervisor, such as how many people they manage
 *
 */
class Supervisor : public Employee {
 private:
  //the number of employees that are under a supervisor
  int numSupervised;
 public:

/**
 * This is the print function for the supervisor class
 *
 * @pre This print function just needs a validly constructed supervisor class
 * @return void this function just prints out the details of the supervisor class--it doesn't return anything
 * @post the details of the supervisor class are printed out 
 * 
 */
  void print();

/**
 * this function calculates how much money the supervisor has coming for the pay period
 *
 * @pre the hours worked and hourly rate of the supervisor must already be known and entered into the supervisor class, or else the math won't work 
 * @return double the amount of money that the supervisor is getting this pay period
 * @post Nothing is changed about the supervisor, the only thing that we get from this function is finding out how much they are to be paid
 * 
 */
  double calculatePay();

/**
 * this is the default constructor for the supervisor class
 *
 * @pre it creates an instance of a class, so it doens't require anything else to have already happened
 * @post the class is created, and the member variables are initialized .
 * 
 */
  Supervisor();

/**
 * this is the parameterized constructor for the supervisor class
 *
 * @param int ID the supervisor's id
 * @param int years the number of years that the supervisor has worked
 * @param double hourlyRate the hourly rate that the supervisor gets paid
 * @param float hoursWorked the number of hours that the supervisor has worked this pay period
 * @param int numSupervised the number of employees that are under the supervisor
 * @pre N/A
 * @post the supervisor object is created, and the member variables are set to whatever is passed into the parenthesis
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
