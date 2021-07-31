#pragma once
#include "Employee.h"

#include <iostream>
#include <string>

using namespace std;

class HourlyEmployee :
    public Employee
{
private:
    int totalHours;
    int regularHours;
    int overtimeHours;

public:
    HourlyEmployee(string firstName, string lastName, double payRate);
    int setTotalHoursWorked(int hoursWorked);
    int getTotalRegularHoursMonthly(int hoursWorked);
    int getTotalOvertimeHoursMonthly(int hoursWorked);
    double getMonthlyRegularPay(int hoursWorked, double payRate);
    double getMonthlyOvertimePay(int hoursWorked, double payRate);
    void displayEmployeeInfo(int);
};

