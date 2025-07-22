#include <iostream>
#include <string>
using namespace std;
int main() {
    int employeeid, salary, yearsofexperience;
    string name;
    cout<< "Enter employee ID: ";
    cin >> employeeid;  
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee salary: ";    
    cin >> salary;
    cout <<"Enter years of experience: ";
    cin >> yearsofexperience;
    int a;
    int totalSalary = salary + (yearsofexperience * a);
    if (yearsofexperience <2) {
        a= 0.05 * salary;
    }
    else if (yearsofexperience >= 2 && yearsofexperience < 5) {
        a = 0.10 * salary;
    } else {
        a = 0.15 * salary;
    }
    cout << "Employee ID: " << employeeid << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
    cout << "Years of Experience: " << yearsofexperience << endl;
    cout << "Total Salary after increment: " << totalSalary << endl;

    return 0;
}