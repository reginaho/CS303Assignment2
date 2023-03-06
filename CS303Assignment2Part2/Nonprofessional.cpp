
#include "Nonprofessional.h"

Nonprofessional::Nonprofessional(string name, int age, double hourlyRate, double hoursWorked)
    : Employee(name, age, 0.0, hoursWorked), hourlyRate_(hourlyRate) {
    baseSalary_ = hoursWorked_ * hourlyRate_;
}
//error above - parameter was set to 0.0 for base salary

Nonprofessional::~Nonprofessional() {}

double Nonprofessional::getWeeklySalary() const {
    return baseSalary_;
}

double Nonprofessional::getHealthCareContribution() const {
    return baseSalary_ * 0.05; //5% of base salary
}

double Nonprofessional::getVacationEarned() const {
    return hoursWorked_ / 30;
    //One vacation hour for every 30
    //assumed that there is an 8 hour work day
}
