#include <iostream>
using namespace std;
int main()
{
	int age , employmentYears , creditScore;
	double salary , existinginstallment;
	cout << "Enter Age:";
	cin >> age;
	cout << "Enter Monthly Salary:";
	cin >> salary;
	cout << "Enter Employment Duration (years):";
	cin>> employmentYears;
	cout << "Enter Existing Monthly Installments:";
	cin >> existinginstallment;
	cout << "Enter credit Score:";
	cin >> creditScore;
	if (age<21){
		cout << "Loan Rejected - Age less than 21" << endl;
	}else if (salary < 50000){
		cout << "Loan Reected - Salary less than 50000" << endl;		
	}else if (employmentYears < 2){
	cout << "Loan Rejected - Employment less than 2 years" << endl;	
	}else if (creditScore < 600){
		cout << "Loan Rejected - Low credit Score" << endl;
	}else if (existinginstallment > salary*0.40){
		cout << "Loan Rejected - Installments exceed 40% of salary" << endl;	
	}else {
		if (salary > 150000 && employmentYears > 5){
			cout << "Loan Approved - Premium category" << endl;
		}else{
			cout << "Loan Approved - Normal Category" << endl;
		}
	}
	return 0;
}
