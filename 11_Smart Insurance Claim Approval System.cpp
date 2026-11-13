#include <iostream>
using namespace std;
int main() {
    char validInsurance, policyExpired, validLicence, drunk, responsible;
    double damage;
    cout << "Valid Insurance? (y/n): "; cin >> validInsurance;
    cout << "Policy Expired? (y/n): "; cin >> policyExpired;
    cout << "Valid Licence? (y/n): "; cin >> validLicence;
    cout << "Driver Drunk? (y/n): "; cin >> drunk;
    cout << "Estimated Damage: "; cin >> damage;
    cout << "Driver Responsible? (y/n): "; cin >> responsible;

    if (validInsurance == 'n' || policyExpired == 'y' || validLicence == 'n' || drunk == 'y') {
        cout << "Claim Rejected";
        return 0;
    }
    double approved = damage;
    if (damage < 20000) cout << "Claim Approved Without Inspection";
    else if (damage <= 200000) cout << "Claim Approved After Physical Inspection";
    else cout << "Claim Requires Manager Approval";

    if (responsible == 'y') approved -= approved * 0.20;
    cout << "\nFinal Insurance Amount: Rs. " << approved;
    return 0;
}
