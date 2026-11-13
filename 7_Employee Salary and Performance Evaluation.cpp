#include <iostream>
using namespace std;
int main() {
    double salary, attendance, rating, years;
    cout << "Basic Salary: "; cin >> salary;
    cout << "Attendance %: "; cin >> attendance;
    cout << "Performance Rating (out of 5): "; cin >> rating;
    cout << "Experience Years: "; cin >> years;

    double bonus = 0;
    if (rating < 3) {
        cout << "No Bonus - Low Rating";
    } else {
        if (attendance >= 95) bonus = salary * 0.15;
        else if (attendance >= 90) bonus = salary * 0.10;
        else if (attendance >= 75) bonus = salary * 0.05;
        else bonus = 0;
    }
    double finalSalary = salary + bonus;
    if (years > 5) finalSalary += 5000;
    cout << "Final Salary: Rs. " << finalSalary;
    return 0;
}
