
#include <iostream>
#include <String>
using namespace std;

int main()
{
	string name;
	string course;
	string yearname;
	int year_lvl, NumofUnits,unit;
	double tf, dp, balance;


	cout << "Enter Student Name: ";
	getline(cin, name);

	cout << "\nEnter Program/Course: ";
	getline(cin, course);

	cout << "\nEnter Year Level: ";
	cin >> year_lvl;

	cout << "\nEnter No. of Units: ";
	cin >> NumofUnits;

	cout << "ENROLLMENT SLIP";


	if (year_lvl == 1)
	{
		yearname = "Freshman";
		unit = 1500;

		tf = unit * NumofUnits;
		dp = tf * .30;
		balance = tf - dp;

		cout << "\nStudent Name: " << name << "\nProgram/Course: " << course << "\nYear Name: " 
			<< yearname << "\nNo. of Units: "<< NumofUnits << "\nTuition Fee: " << tf << "\nDownpayment:" <<
			dp << "\nBalance: " << balance;

	}

	else if (year_lvl == 2)
	{
		yearname = "Sophomore";
		unit = 1800;

		tf = unit * NumofUnits;
		dp = tf * .30;
		balance = tf - dp;

		cout << "Student Name: " << name << "\nProgram/Course: " << course << "\nYear Name: " 
			<< yearname << "\nNo. of Units: "<< NumofUnits << "\nTuition Fee: " << tf 
			<< "\nDownpayment: " << dp << "\nBalance: " << balance;

	}
	else if (year_lvl == 3)
	{
		yearname = "Junior";
		unit = 2000;

		tf = unit * NumofUnits;
		dp = tf * .30;
		balance = tf - dp;

		cout << "Student Name: " << name << "\nProgram/Course: " << course << "\nYear Name: " 
			<< yearname << "\nNo. of Units: "<< NumofUnits << "\nTuition Fee: " << tf <<
			"\nDownpayment: " << dp << "\nBalance: " << balance;

	}
	else if (year_lvl <= 4)
	{
		yearname = "Senior";
		unit = 2300;

		tf = unit * NumofUnits;
		dp = tf * .30;
		balance = tf - dp;

		cout << "Student Name: " << name << "\nProgram/Course: " << course << "\nYear Name: "
			<< yearname << "\nNo. of Units: "<< NumofUnits << "\nTuition Fee: " << tf 
			<< "\nDownpayment: " << dp << "\nBalance: " << balance;

	}

}

