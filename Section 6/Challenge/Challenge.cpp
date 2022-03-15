#include <iostream>

using namespace std;

int main() {
	const double pricePerSmallRoom{ 25.0 };
	const double pricePerLargeRoom{ 35.0 };
	const double salesTax{ .06 };
	const int estimateTime{ 30 };

	int smallRooms{ 0 };
	int largeRooms{ 0 };


	cout << "Enter the number of small rooms: ";
	cin >> smallRooms;
	cout << "Enter the number of large rooms: ";
	cin >> largeRooms;
	cout << "\n";

	int cost = (smallRooms * pricePerSmallRoom) + (largeRooms * pricePerLargeRoom);
	double tax = (cost * salesTax);
	double totalCost = ((smallRooms * pricePerSmallRoom) + (largeRooms * pricePerLargeRoom) + tax);

	cout << "Estimate for carpet cleaning service:\n";
	cout << "-------------------------------------\n\n";
	cout << "Number of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;
	cout << "Price per small room: $" << pricePerSmallRoom << endl;
	cout << "Pirce per large room: $" << pricePerLargeRoom << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "\n";

	cout << "===================\n";
	cout << "\n";
	cout << "Total Estimate: " << totalCost << endl;
	cout << "This estimate is valid for " << estimateTime << " days." << endl;

	return 0; 
}