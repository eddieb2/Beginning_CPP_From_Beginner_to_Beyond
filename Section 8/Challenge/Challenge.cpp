#include <iostream>

using namespace std;

int main() {
	/*
		--take user input in cents
		--figure out how much exact change
		- divide by dollar value && subtract dollars X dollar value from total.... > quarters > dimes > nickels > pennies
		- 95 (total) / 100 (value of dollar) = 0 
		- total - (0*100 <-- dollar value) = 95 (new total)
		- 95 (total) / 25 = 3
		- 95 - (3*25) = 15 ...

	*/
	
	int cents;

	// ask for user input: int cents
	cout << "Please enter a number of cents: ";
	cin >> cents;

	int total = cents;
	int dollars{ 0 }, quarters{ 0 }, dimes{ 0 }, nickels{ 0 }, pennies{ 0 };
	int v_dollar{ 100 }, v_quarter{ 25 }, v_dime{ 10 }, v_nickel{5}, v_penny{1};


	dollars = total / v_dollar;
	total -= dollars * v_dollar;

	quarters = total / v_quarter;
	total -= quarters * v_quarter;

	dimes = total / v_dime;
	total -= dimes * v_dime;

	nickels = total / v_nickel;
	total -= nickels * v_nickel;

	pennies = total / v_penny;

	// display exact change in dollars, quarters, dimes, nickels and pennies.
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " <<  pennies << endl;



	






	return 0;
}