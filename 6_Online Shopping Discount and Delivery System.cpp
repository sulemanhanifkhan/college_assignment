#include <iostream>
using namespace std;
int main() {
    double amount; char premium, unpaid;
    cout << "Order Amount: "; cin >> amount;
    cout << "Premium Member? (y/n): "; cin >> premium;
    cout << "Unpaid Previous Order? (y/n): "; cin >> unpaid;

    if (unpaid == 'y') {
        cout << "Order Cannot be Confirmed - Clear previous payment";
        return 0;
    }
    double discount = 0;
    if (amount > 50000) discount = 0.20;
    else if (amount > 25000) discount = 0.15;
    else if (amount > 10000) discount = 0.10;

    double finalAmount = amount - (amount * discount);
    if (premium == 'y') finalAmount -= finalAmount * 0.05;

    double delivery = (finalAmount > 20000) ? 0 : 500;
    cout << "Payable Amount: Rs. " << finalAmount + delivery << endl;
    cout << "Order Confirmed";
    return 0;
}
