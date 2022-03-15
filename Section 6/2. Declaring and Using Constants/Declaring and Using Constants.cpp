#include <iostream>

using namespace std;

int main() {
	int rooms{ 0 };
	const double pricePerRoom{ 30 };
	const double tax{ .06 };
	const  int expirationTime{ 30 };
	
	cout << "Please enter the number of rooms: ";
	cin >> rooms;

	cout << "Number of rooms: " << rooms << endl;
	cout << "Price per room: " << pricePerRoom << endl;

	cout << "Cost: " << (rooms * pricePerRoom) << endl;
	cout << "Tax: " << (rooms * pricePerRoom * tax) << endl;
	cout << "Total Estimate: " << (rooms * pricePerRoom) + (rooms * pricePerRoom * tax) << endl;
	cout << "This is valid for: " << expirationTime << " days" << endl;

	return 0;
}