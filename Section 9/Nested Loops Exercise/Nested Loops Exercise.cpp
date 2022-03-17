#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vec{ 2,4,6,8 };
	int result{ 0 };
	// find the sum of the product of all pairs 
	// store in result var

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = i+1; j < vec.size(); j++)
		{
			// cout << vec[i] << "," << vec[j] << endl;
			result += (vec[i] * vec[j]);
		}
	}

	cout << result << endl;

	return 0;
}