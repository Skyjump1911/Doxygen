/**
 * @file Officer.h
 * @author Noah Melton
 * @date 2025-04-18
 * @brief This is the .h file for the officer class
 * 
 * in this header file, we declare the functions and member variables of the officer class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * This is the officer class
 *
 * @class Officer Officer.h "employee/Officer.h"
 * @brief This class specifies which are the public and private member variables and methods of the officer class
 *
 */
class Officer : public Employee {
 private:
  //how evil an officer is
  double evilness;
 public:

/**
 * This function just prints out the attributes of an officer 
 *
 * @pre You just need an officer class instance to have been created
 * @return void this function just prints out details, and doesn't return anything
 * @post the details of the officer class are printed out 
 * 
 */
  void print();

/**
 * This function calculates how much an officer is owed
 *
 * @pre this function relies upon an officer class existing with predefined pay rates and hours worked
 * @return double the amount of money owed to the officer
 * @post the money amount is printed out for the accountant to use for paying the officer
 * 
 */
  double calculatePay();

/**
 * the default constructor
 *
 * @pre N/A
 * @post an officer class object is created, and the attribute "evilness" is assigned a value of 500
 * 
 */
  Officer();

/**
 * the parameterized constructor
 *
 * @param int ID the officer's id
 * @param int years the number of years that an officer has worked at the company
 * @param double hourlyRate the amount that an officer is owed for each hour worked
 * @param float hoursWorked the number of hours that officer has worked during this pay period
 * @param double evilness an attribute which describes how evil an officer is
 * @pre N/A
 * @post an instance is created with the member variables getting the values that were passed into the parenthesis
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
