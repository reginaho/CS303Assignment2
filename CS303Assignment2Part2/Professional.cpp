#include "Professional.h"

using namespace std;

Professional::Professional(string name, int age, double baseSalary, double hoursWorked, int vacationDaysPerYear)
	: Employee(name, age, baseSalary, hoursWorked), vacationDaysPerYear_(vacationDaysPerYear) {}

Professional::~Professional() {}

double Professional::getWeeklySalary() const {
	return baseSalary_ / 4.0; //// Monthly salary paid weekly
}

double Professional::getHealthCareContribution() const {
	return baseSalary_ * 0.1; //10% of baseSalary
}

int Professional::getVacationDaysEarned() const {
	return vacationDaysPerYear_ / 12; // Divide by 12 months to get monthly vacation days
}

// string Professional::getName() const {
//     return name_;
// }