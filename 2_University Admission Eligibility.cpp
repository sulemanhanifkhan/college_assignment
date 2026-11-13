#include <iostream>
using namespace std;
int main()
{
	float matric, inter, entry;
	cout << "Enter Matric marks%:";
	cin >> matric;
	cout << "Enter Intermediate marks%:";
	cin >> inter;
	cout << "Entry Test %:";
	cin >> entry;
	if (matric < 60 || inter < 65 || entry < 50){
		cout << "Admission Rejected";
	}else{
cout << "Admission Approved\n";	
	if (inter >=85 && entry >=80)
	cout << "Category : Merit Scholarship";
	else
	cout << "Category : Regular Admission";
}
return 0;
}
