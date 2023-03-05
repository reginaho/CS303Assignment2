#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
	Employee(string name, int age, double baseSalary, double hoursWorked);
	virtual ~Employee();
	virtual double getWeeklySalary() const = 0;
	virtual double getHealthCareContribution() const = 0;
	virtual int getVacationDaysEarned() const = 0;
	string getName() const;
	int getAge() const;

protected:
	string name_;
	int age_;
	double baseSalary_;
	double hoursWorked_;

};

#endif#pragma once
