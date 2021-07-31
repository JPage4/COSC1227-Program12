#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

// The Class Employee
class Employee
{
private:

	string firstName; // The first name
	string lastName;  // The last name
	double payRate;   // The pay rate

public:
	// Employee no-argument constructor (defined in Employee.cpp)
	Employee();

	// Employee multiple-argument constructor (defined in Employee.cpp)
	Employee(string firstName, string lastName, double payRate);

	virtual ~Employee() {}; // Destructor

	// Mutators (i.e., "set" member functions) defined in Employee.cpp
	void setFirstName(string);
	void setLastName(string);
	void setPayRate(double);

	// Accessors (i.e., "get" member functions) defined in Employee.cpp
	string getFirstName();
	string getLastName();
	double getPayRate();

	// Service member functions (defined in Employee.cpp)
	double calcTaxes(double);

}; // End class Employee

#endif

