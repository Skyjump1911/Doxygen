/**
 * @file Employee.cpp
 * @author Noah Melton
 * @date 2025-04-17
 * @brief This is the implementation of the employee class
 * 
 * This is where we define how the funcitons behave
 */

#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * The constructor for the employee class
 *
 * @pre This sets up the member variables of the employee class
 * @post The member variables areae all initialized to -1
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * The paramaterized constructor for the employee class
 *
 * @param int ID the employee id
 * @param int years the number of years that they have worked for the company
 * @param double hourlyRate the amount the employee gets paid per hour
 * @param float hoursWorked the number of hours that an employee has worked
 * @pre This function takes the member variables and sets them equal to the values passed in the arguments section
 * @post the member variables are set equal to whatever is in the parenthesis
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * This function prints out the employee info
 *
 * @pre A valid entry for an employee must already exist
 * @return void This function doesn't return anything, it just prints out what is already in the employee object
 * @post The details of the employee object is printed out
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * This function is for celebrating x amount of years an employee works
 *
 * @pre An employee object must exist for us to be able to call this funciton
 * @return void This funciton raises the employee
 * @post This funciton raises the employee's hourly rate and congratulates them for their years of work
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * This function calculates the amount of pay that an employee is owed
 *
 * @pre This function requires that an employee has already entered in the information about how long they have worked
 * @return double This function returns the dollar amount that an employee is owed. 
 * @post The dollar amount for the next paycheck is printed out
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

