#include <iostream>
using namespace std;
int main()
{
	int units; string payment; // "late" or "ontime"
	cout << "Enter Unit: "; 
	cin >> units;
	cout << "Payment late ? (late/ontime): "; 
	cin >> payment;
	double bill = 0;
	if (units <=100)
	bill = units*10;
	else if (units <=200)
	bill = 100*10 + (units-100)*15;
	else if (units <=500)
	bill = 100*10 + 100*15 + (units-200)*20;
	else
	 bill = 100*10 + 100*15 + 300*20 + (units-500)*25;
	 if (bill > 1000)
	 bill = bill*0.05;// 5% surcharge
	 if (payment =="late")
	 bill = bill *0.10;// 10% late fee
	 cout << "Final Bill : Rs." << bill;
	 return 0;
	}
