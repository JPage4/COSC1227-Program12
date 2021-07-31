//********************************************************************
//
//  Developer:      Instructor
//
//  Program #:      Twelve
//
//  File Name:      Employee.cpp
//
//  Course:         COSC 1337 Programming Fundamentals II
//
//  Instructor:     Prof. Fred Kumi 
//
//  Description:    Employee class  
//     It contains the Employee class member function definitions.
//     Please do NOT modify this Class.  If you do, you will not
//     receive credit for Program 12.
//
//********************************************************************

#include "Employee.h"

using namespace std;

// Employee no-argument constructor
Employee::Employee()
{
    this->firstName = "";
    this->lastName = "";
    this->payRate = 0.0;
} // end of no-argument constructor


// Employee multiple-argument constructor
Employee::Employee(string firstName, string lastName, double payRate)
{
    if (payRate < 0.0)
    {
        cout << "Pay rate must be > 0.0. Changing it minimum wage." << endl;
        payRate = 7.25;
    }
    else if (payRate < 7.25)
        payRate = 7.25;

    this->firstName = firstName;
    this->lastName = lastName;
    this->payRate = payRate;
} // end of multiple-argument constructor


void Employee::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Employee::setLastName(string lastName)
{
    this->lastName = lastName;
}

string Employee::getFirstName()
{
    return firstName;
}

string Employee::getLastName()
{
    return lastName;
}

void Employee::setPayRate(double payRate)
{
    if (payRate < 0.0)
    {
        cout << "Pay rate must be > 0.0. Changing it minimum wage." << endl;
        this->payRate = 7.25;
    }
    else if (payRate < 7.25)
        this->payRate = 7.25;
    else
        this->payRate = payRate;
}

double Employee::getPayRate()
{
    return payRate;
}

//***************************************************************
//
//  Function:     calcTaxes
// 
//  Description:  This function calculates the taxes
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//***************************************************************
double Employee::calcTaxes(double theGrossPay)
{
    double taxes;

    if (theGrossPay > 15000)
        taxes = theGrossPay * (36 / 100.0);
    else if (theGrossPay > 12000)
        taxes = theGrossPay * (31 / 100.0);
    else if (theGrossPay > 9000)
        taxes = theGrossPay * (28 / 100.0);
    else if (theGrossPay > 6500)
        taxes = theGrossPay * (22 / 100.0);
    else if (theGrossPay > 4500)
        taxes = theGrossPay * (15 / 100.0);
    else if (theGrossPay > 2500)
        taxes = theGrossPay * (10 / 100.0);
    else if (theGrossPay > 0)
        taxes = theGrossPay * 0;

    return taxes;
}

// End of Employee.cpp

