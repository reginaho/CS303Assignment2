#include "Nonprofessional.h"
#include "Professional.h"
#include <iostream>
using namespace std;

int main() {
    double hoursWorked = 45.0;

    Professional professional("Duy Ho", 27, 6000.0, hoursWorked, 20);
    Nonprofessional nonprofessional("Regina Ho", 21, 20.0, hoursWorked);

    cout << "PROFESSIONAL EMPLOYEE: " << endl;
    cout << "Name: " << professional.getName() << endl; // NEED TO FIX
    cout << "Age: " << professional.getAge() << endl;

    cout << "Weekly salary calculated from monthly pay: $"
        << professional.getWeeklySalary() << endl;
    cout << "Health care: $" << professional.getHealthCareContribution() << endl;
    cout << "Vacation days per month earned: "
        << professional.getVacationDaysEarned() << endl;
    cout << endl;

    cout << "NONPROFESSIONAL EMPLOYEE: " << endl;
    cout << "Name: " << nonprofessional.getName() << endl; // NEED TO FIX
    cout << "Age: " << nonprofessional.getAge() << endl;   // NEED TO FIX
    cout << "Weekly salary calculated from hourly pay: $"
        << nonprofessional.getWeeklySalary() << endl;
    cout << "Health care: $" << nonprofessional.getHealthCareContribution()
        << endl;
    cout << "Vacation per year earned estimate: "
        << nonprofessional.getVacationDaysEarned() << endl;

    return 0;
}
