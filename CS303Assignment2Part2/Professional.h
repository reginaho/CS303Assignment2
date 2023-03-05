#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H

#include "Employee.h"

class Professional : public Employee {
public:
	Professional(string name, int age, double baseSalary, double hoursWorked, int vacationDaysPerYear);
	virtual ~Professional();
	virtual double getWeeklySalary() const override;
	virtual double getHealthCareContribution() const override;
	virtual int getVacationDaysEarned() const override;
	// virtual string getName() const override; // FIX
private:
	int vacationDaysPerYear_;
	string name_;
};

#endif
