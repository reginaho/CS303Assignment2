#include "Nonprofessional.h"
#include "Professional.h"
#include <iostream>
using namespace std;

int main() {
    double hoursWorked = 45.0;

    Professional professional("Duy Ho", 27, 6000.0, hoursWorked, 24);
    Nonprofessional nonprofessional("Regina Ho", 21, 20.0, hoursWorked);

    cout << "PROFESSIONAL EMPLOYEE: " << endl;
    cout << "Name: " << professional.getName() << endl; 
    cout << "Age: " << professional.getAge() << endl;

    cout << "Weekly salary calculated from monthly pay: $"
        << professional.getWeeklySalary() << endl;
    cout << "Health care: $" << professional.getHealthCareContribution() << endl;
    cout << "Vacation per year earned estimate: "
        << 12 * professional.getVacationEarned() << endl;
    cout << "At a set "
        << professional.getVacationEarned() <<
        " day(s) per month" << endl;
    cout << endl;

    cout << "NONPROFESSIONAL EMPLOYEE: " << endl;
    cout << "Name: " << nonprofessional.getName() << endl; 
    cout << "Age: " << nonprofessional.getAge() << endl;   
    cout << "Weekly salary calculated from hourly pay: $"
        << nonprofessional.getWeeklySalary() << endl;
    cout << "Health care: $" << nonprofessional.getHealthCareContribution()
        << endl;
    cout << "Vacation per year earned estimate: "
        << static_cast<int>((52 * nonprofessional.getVacationEarned()) / 8) << " days" << endl;
    cout << "At "
        << nonprofessional.getVacationEarned() << " vacation hours per week" << endl;


    return 0;
}
