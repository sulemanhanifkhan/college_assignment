#include <iostream>
using namespace std;
int main() {
    int speed; char prev, licence, registered;
    cout << "Speed km/h: "; cin >> speed;
    cout << "Previous violations? (y/n): "; cin >> prev;
    cout << "Valid Licence? (y/n): "; cin >> licence;
    cout << "Vehicle Registered? (y/n): "; cin >> registered;

    double fine = 0;
    if (speed >= 61 && speed <= 80) fine = 2000;
    else if (speed >= 81 && speed <= 100) fine = 5000;
    else if (speed > 100) fine = 10000;

    if (prev == 'y') fine += fine * 0.25;
    if (licence == 'n') fine += 5000;
    if (registered == 'n') fine += 10000;

    cout << "Total Fine: Rs. " << fine << endl;
    if (licence == 'n' || registered == 'n')
        cout << "Vehicle CANNOT continue journey";
    else
        cout << "Vehicle can continue journey";
    return 0;
}
