#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	/////////////////////////////////////
	//			// For loop // 
	/////////////////////////////////////
	//cout << "=====================\n";
	//cout << "      For loop\n";
	//cout << "=====================\n\n";

	//for (int i = 0; i <= 10; i++)
	//{
	//	cout << i << endl;
	//}

	//cout << "\n";

	//for (int i = 0; i <= 10; i += 2)
	//{
	//	cout << i << endl;
	//}

	//cout << "\n";

	//for (int i = 10; i >= 0; i--)
	//{
	//	cout << i << endl;
	//}

	//cout << "\n";

	//for (int i = 0; i <= 100; i += 10)
	//{
	//	if (i % 15 == 0)
	//	{
	//		cout << i << endl;
	//	}
	//}

	//cout << "\n";

	//for (int i = 0, j = 5; i <= 5; i++, j++)
	//{
	//	cout << i << " + " << j << " = " << (i + j) << endl;
	//}

	//cout << "\n";

	//vector <int> nums{ 10,20,30,40,50 };
	//for (unsigned i{ 0 }; i < nums.size(); i++)
	//{
	//	cout << nums[i] << endl;
	//}

	//cout << "\n";

	/////////////////////////////////////
	//	// range-based for loop // 
	/////////////////////////////////////

	//cout << "=====================\n";
	//cout << "Range-based for loop\n";
	//cout << "=====================\n\n";


	//int scores[]{ 10,20,30 };

	//for (int score : scores)
	//{
	//	cout << score << endl;
	//}

	//cout << "\n";

	//vector <double> temperatures{ 83.2, 43.4,32.4 };
	//double average_temp{};
	//double total{};

	//for (auto temp : temperatures)
	//{
	//	total += temp;

	//	if (temperatures.size() != 0)
	//	{
	//		average_temp = total / temperatures.size();
	//	}

	//}

	//cout << fixed << setprecision(1);
	//cout << average_temp << endl;

	//cout << "\n";


	//for (auto val : { 1, 2, 3, 4, 5 })
	//{
	//	cout << val << endl;
	//}

	//cout << "\n";

	//for (auto c: "This is a test.")
	//{
	//	if (c != ' ')
	//	{
	//		cout << c;
	//	}
	//}
	//cout << "\n";

	//for (auto c : "This is a test.")
	//{
	//	if (c == ' ')
	//	{
	//		cout << "\t";
	//	}
	//	else
	//	{
	//		cout << c;
	//	}
	//}

	//cout << "\n\n";

	/////////////////////////////////////
	//		// while loop // 
	/////////////////////////////////////


	//cout << "=====================\n";
	//cout << "      While loop\n";
	//cout << "=====================\n\n";

	//int num{};
	//cout << "Enter a positive integer - start the countdown: ";
	//cin >> num;

	//// Count Down
	//while (num > 0)
	//{
	//	cout << num << endl;
	//	num--;
	//}

	//// Count Up

	//int i{ 1 };
	//while (num >= i)
	//{
	//	cout << i << endl;
	//	i++;
	//}

	

	// Exercise
	vector <int> vec{ 1,2,3,-99,4 };
	/*bool num_found{ false };
	int count{ 0 };
	int query{ -99 };

	while (num_found == false)
	{
		for (int num : vec)
		{
			if (num == query)
			{
				num_found = true;
				break;
			}
			else {
				count++;
			}
		}
		
		if (num_found == false) 
		{
			count = vec.size();
			break;
		}
	}*/


	// Instructor's solution - retyped w/o solution in front of me

	//size_t index{ 0 };
	//int count{ 0 };

	//while (index < vec.size() && vec[index] != -99)
	//{
	//	cout << index << endl;
	//	index++;
	//	count++;
	//}

	//cout << count;

	char selection{};

	do
	{
		cout << "\n----------------";
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do else" << endl;
		cout << "Q. Quit" << endl;
		cout << "\nEnter your selection: ";
		cin >> selection;
	} while (selection != 'q' && selection != 'Q');
}