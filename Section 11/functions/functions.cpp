#include <iostream>
using namespace std;






void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}




int main() {

	int test[4]{ 1,2,3,4 };
	
	printArray(test,4);

	return 0;
}