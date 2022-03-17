#include <iostream>

using namespace std;

int main() {
	int score{};
	cout << "Enter your exam score: ";
	cin >> score;

	char letter_grade{ 0 };

	if (score >= 0 && score <= 100)
	{
		if (score >= 90)
		{
			letter_grade = 'A';
		}
		else if (score >= 80)
		{
			letter_grade = 'B';
		}
		else if (score >= 70)
		{
			letter_grade = 'C';
		}
		else if (score >= 60)
		{
			letter_grade = 'D';
		}
		else
		{
			letter_grade = 'E';
		}

		cout << "Your grade is: " << letter_grade << endl;

		if (letter_grade == 'F')
		{
			cout << "Sorry you failed this class and it must be retaken." << endl;
		}
	}
	else
	{
		cout << "Sorry, " << score << " is not in range" << endl;
	}

	int age{ 16 };
	bool has_car{ false };
	int years_until_driving{ 16 - age };

	if (age < 16) {
		cout << "Sorry, come back in " << years_until_driving << " years and be sure you own a car when you come back.";
	}
	else if (age > 15) {
		if (has_car == true) {
			cout << "Yes - you can drive!";
		}
		else {
			cout << "Sorry, you need to buy a car first";
		}
	}
}