#include <iostream>
using namespace std;

int main()
{
	char letter_grade{};

	cout << "Enter the letter grade you expect on the exam: ";
	cin >> letter_grade;

	switch (letter_grade)
	{
		case 'a':
		case 'A':
			cout << "You need a 90 or above, study hard!" << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need 80 - 89 for a B, go study!" << endl;
			break;
		case 'c':
		case 'C':
			cout << "You need 70-79 for an average grade" << endl;
		case 'd':
		case 'D':
			cout << "You should go for a better grade than that!" << endl;
		case 'f':
		case 'F':
		{
			char confirm{};
			cout << "Are you sure (Y/N): ";
			cin >> confirm;

			if (confirm == 'y' || confirm == 'Y')
			{
				cout << "Okay, I guess you don't want to fail! Go study!" << endl;
			}
			else if (confirm == 'n' || confirm == 'N')
			{
				cout << "Go study!" << endl;
			}
			else
			{
				cout << "Invalid choice." << endl;
			}
			break;
		}
		default:
			cout << "Sorry, that is not a valid grade." << endl;
			break;
	}

	enum Direction
	{
		left,right,up,down
	};

	Direction heading{ left };

	switch (heading)
	{
	case left:
		cout << "Going left." << endl;
		break;
	case right:
		cout << "Going right." << endl;
		break;
	case up:
		cout << "Going up." << endl;
		break;
	case down:
		cout << "Going down." << endl;
		break;
	default:
		break;
	}

	// Coding Exercise
	int day_code{ 1 };

	switch (day_code)
	{
	case 0:
		cout << "Sunday";
		break;
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	default:
		cout << "Error - illegal day code";
		break;

	return 0;
}