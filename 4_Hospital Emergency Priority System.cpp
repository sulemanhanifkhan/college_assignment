#include <iostream>
using namespace std;
int main() {
    int age, heartRate; double temp, oxygen;
    cout << "Age: "; cin >> age;
    cout << "Temperature (F): "; cin >> temp;
    cout << "Oxygen %: "; cin >> oxygen;
    cout << "Heart Rate: "; cin >> heartRate;

    if (oxygen < 90 || heartRate > 130 || heartRate < 45)
        cout << "Category: Critical - Immediate Treatment";
    else if (age > 65 && temp > 102)
        cout << "Category: High Priority";
    else if (oxygen >= 90 && oxygen <= 94)
        cout << "Category: Moderate";
    else
        cout << "Category: Normal";
    return 0;
}
