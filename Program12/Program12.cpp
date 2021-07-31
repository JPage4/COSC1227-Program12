//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 12
//
//  File Name:         Program12.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          8/1/21
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 11
//
//  Description:
//     <An explanation of what the program is designed to do>
//
//***************************************************************

#include <iostream>
#include <iomanip>
#include "HourlyEmployee.h"

using namespace std;

void developerInfo();
void testInheritance();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    // Write your code here
    testInheritance();

    system("PAUSE");
    return 0;
}

void testInheritance()
{
    string sentinel = "no";
    string response;
    while (response != sentinel)
    {
        string firstName;
        cout << "Enter the employee's first name: " << endl;
        cin >> firstName;

        string lastName;
        cout << "Enter the employee's last name: " << endl;
        cin >> lastName;

        double payRate;
        cout << "Enter the employee's pay rate: " << endl;
        cin >> payRate;

        HourlyEmployee employee1(firstName, lastName, payRate);

        int hoursWorked;
        int monthlyTotalHours = 0;
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter number of hours employee worked for Week " << i + 1 << ": " << endl;
            cin >> hoursWorked;
            monthlyTotalHours = employee1.setTotalHoursWorked(hoursWorked);
        }
        employee1.displayEmployeeInfo(monthlyTotalHours);

        cout << "Continue? Enter yes or no: " << endl;
        cin >> response;
    }
}
//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: 12"
        << endl
        << endl;
} // End of developer

