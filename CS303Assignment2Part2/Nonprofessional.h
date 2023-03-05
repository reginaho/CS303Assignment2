//NEED TO ADD GETNAME AND getAGE

#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H

#include "Employee.h"
using namespace std;

class Nonprofessional : public Employee {
public:
	Nonprofessional(string name, int age, double hourlyRate, double hoursWorked);
	~Nonprofessional();

	double getWeeklySalary() const;
	double getHealthCareContribution() const;
	int getVacationDaysEarned() const;

private:
	double hourlyRate_;
	// mutable double hoursWorked_;
};

#endif
#pragma once
