#include <iostream>
using namespace std;
int main() {
    double balance, withdraw, dailyWithdrawn; string status;
    cout << "Account Balance: "; cin >> balance;
    cout << "Withdrawal Amount: "; cin >> withdraw;
    cout << "Already Withdrawn Today: "; cin >> dailyWithdrawn;
    cout << "Account Status (active/blocked): "; cin >> status;

    if (status == "blocked") cout << "Transaction Rejected - Account Blocked";
    else if (withdraw < 500) cout << "Rejected - Minimum Rs. 500";
    else if ((int)withdraw % 500 != 0) cout << "Rejected - Must be multiple of 500";
    else if (withdraw > balance) cout << "Rejected - Insufficient Balance";
    else if (dailyWithdrawn + withdraw > 100000) cout << "Rejected - Daily Limit Exceeded";
    else {
        if (withdraw > 50000) cout << "Additional Verification Required\n";
        cout << "Transaction Allowed. Remaining Balance: Rs. " << balance - withdraw;
    }
    return 0;
}
