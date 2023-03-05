#include "Employee.h"

Employee::Employee(string name, int age, double baseSalary, double hoursWorked)
    : name_(name), age_(age), baseSalary_(baseSalary), hoursWorked_(hoursWorked) {}

Employee::~Employee() {}

std::string Employee::getName() const {
    return name_;
}

int Employee::getAge() const {
    return age_;
}
