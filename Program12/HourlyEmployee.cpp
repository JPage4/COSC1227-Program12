#include "HourlyEmployee.h"
#include <iomanip>
HourlyEmployee::HourlyEmployee(string fName, string lName, double rate)
{
	totalHours = 0;
	regularHours = 0;
	overtimeHours = 0;
	setFirstName(fName);
	setLastName(lName);
	setPayRate(rate);
}

int HourlyEmployee::setTotalHoursWorked(int hours)
{
	totalHours += hours;
	return totalHours;
}

int HourlyEmployee::getTotalRegularHoursMonthly(int hours)
{
	if (hours < 160)
	{
		regularHours = hours;
	}
	else
	{
		regularHours = 160;
	}
	return regularHours;
}

int HourlyEmployee::getTotalOvertimeHoursMonthly(int hours)
{
	if (hours > 160)
	{
		overtimeHours = hours - 160;
	}
	else
	{
		overtimeHours = 0;
	}
	return overtimeHours;
}

double HourlyEmployee::getMonthlyRegularPay(int regularHours, double rate)
{
	double monthlyRegularPay = regularHours * rate;
	return monthlyRegularPay;
}

double HourlyEmployee::getMonthlyOvertimePay(int overtimeHours, double rate)
{
	double monthlyOvertimePay = (overtimeHours * rate) + ((overtimeHours * rate) / 2);
	return monthlyOvertimePay;
}

void HourlyEmployee::displayEmployeeInfo(int hours)
{
	double rate = getPayRate();
	int regularHours = getTotalRegularHoursMonthly(hours);
	int overtimeHours = getTotalOvertimeHoursMonthly(hours);
	double regularPay = getMonthlyRegularPay(regularHours, rate);
	double overtimePay = getMonthlyOvertimePay(overtimeHours, rate);
	double grossPay = regularPay + overtimePay;
	double tax = calcTaxes(grossPay);

	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Pay rate: $" << fixed << setprecision(2) << rate << endl;
	cout << "Regular hours worked: " << regularHours << endl;
	cout << "Overtime hours worked: " << overtimeHours << endl;
	cout << "Total hours worked: " << hours << endl;
	cout << "Monthly regular pay: $" << fixed << setprecision(2) << regularPay << endl;
	cout << "Monthly overtime pay: $" << fixed << setprecision(2) << overtimePay << endl;
	cout << "Monthly gross pay: $" << fixed << setprecision(2) << grossPay << endl;
	cout << "Monthly taxes: $" << fixed << setprecision(2) << tax << endl;
	cout << "Monthly net pay: $" << fixed << setprecision(2) << grossPay - tax << endl;
}
