/**
 * @file Employee.h
 * @author Noah Melton
 * @date 2025-04-17
 * @brief This is the header file for the employee class where we declare the funcitons of the class
 * 
 * This is where we declare, but do not implement, the functions in the employee class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * The Employee class -- this is how the company keeps track of the info on their employees
 *
 * @class Employee Employee.h "employee/Employee.h"
 * @brief This class keeps up with information related to the employee, such as their employee ID and how many years they have worked
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; //how many years they have worked
  
 protected:
  double hourlyRate;  //the hourly rate that the employee works for
  float hoursWorked;  // how many hours that the employee has worked 
 public:

/**
 * This is the print function
 *
 * @pre An existing and populated instance of the employee class must exist
 * @return virtual no return type, this function just prints out details
 * @post The details of the employee class instance are printed out
 * 
 */
  virtual void print();

/**
 * This function calculates the pay that an employee is owed
 *
 * @pre The information (such as hourly rate and hours worked) needs to be entered already
 * @return virtual No return type--this function only calculates the pay that the employee is owed
 * @post The employee's pay is printed out
 * 
 */
  virtual double calculatePay();

/**
 * This function is for celebrating the anniversiary of an employee working at the company
 *
 * @pre N/A -- this function does not need anything to be true, it can be called whenever the user decides
 * @return void this function doesn't return anything, it just adjusts the employee's pay and prints out a celebratory message. 
 * @post The employee's pay is slightly bumped up and they are congratualed for their years of work
 * 
 */
  void anniversary();

/**
 * this is the default constructor
 *
 * @pre N/A
 * @post the employee class is created with all of the member variables being set to -1
 * 
 */
  Employee();

/**
 * this is the parameterized constructor
 *
 * @param int ID this is the employee id
 * @param int years the number of years that an employee has worked at the company
 * @param double hourlyRate The hourly rate that the employee is paid at
 * @param float hoursWorked the number of hours that the employee has worked in the pay period
 * @pre N/A
 * @post The member variables are set to whatever the user specifies in the constructor. 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
