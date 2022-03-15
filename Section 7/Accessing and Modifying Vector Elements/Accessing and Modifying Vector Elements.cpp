#include <iostream>
#include <vector>

using namespace std;

int main(
) {

	vector <char> vowels{ 'a','e','i','o','u' };

	//cout << vowels[4] << endl;
	//cout << vowels[0] << endl;

	vector <int> test_scores{ 100,98,99 };
	/*cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.size() << endl;*/

	int score_to_add{ 10 };
	test_scores.push_back(score_to_add);
	//cout << test_scores[3];

	vector <vector<int>> dataTable{
		{0,1,2},
		{0,1,2},
		{0,1,2},
	};

	cout << dataTable[0][0] << endl;
	cout << dataTable[0][1] << endl;
	cout << dataTable[0][2] << endl;
	cout << dataTable[1][0] << endl;
	cout << dataTable[1][1] << endl;
	cout << dataTable[1][2] << endl;
	cout << dataTable[2][0] << endl;
	cout << dataTable[2][1] << endl;
	cout << dataTable[2][2] << endl;



	return 0;
}