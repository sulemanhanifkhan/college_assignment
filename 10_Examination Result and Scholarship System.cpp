#include <iostream>
using namespace std;
int main() {
    int m[5], total = 0; bool fail = false;
    for (int i = 0; i < 5; i++) {
        cout << "Marks Subject " << i+1 << " (out of 100): "; cin >> m[i];
        total += m[i];
        if (m[i] < 40) fail = true;
    }
    double per = total / 5.0;
    cout << "Percentage: " << per << "%" << endl;
    if (fail || per < 50) {
        cout << "Status: Failed";
    } else {
        cout << "Status: Passed - Degree Qualified" << endl;
        if (per >= 85) cout << "Gold Medal";
        else if (per >= 75) cout << "Silver Medal";
        else if (per >= 65) cout << "Merit Scholarship";
        else cout << "No Medal / Scholarship";
    }
    return 0;
}
