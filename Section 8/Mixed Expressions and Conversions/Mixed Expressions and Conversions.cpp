// Mixed Expressions and Conversions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//int total{};
	//int num1{}, num2{}, num3{};
	//const int count{ 3 };

	//cout << "Enter 3 integers separated by spaces: ";
	//cin >> num1 >> num2 >> num3;

	//total = num1 + num2 + num3;

	//double average{ 0.0 };
	//average = static_cast<double>(total) / count;

	//cout << "The 3 numbers weere: " << num1 << "," << num2 << "," << num3 << endl;
	//cout << "The sum of the numbers is: " << total << endl;
	//cout << "The average of the numbers is: " << average << endl;

	// coding ex9
	int age{16};
	bool accidents{false};
	bool ssn{true};
	bool parental_consent{true};


	if ((age >= 18 && ssn == 1 && accidents == false) || ((age < 18 && age > 15) && (parental_consent == true) && (ssn == true) && (accidents == false)))
		cout << "Yes, you can work.";
	else
		cout << "No, you cannot work.";
}
