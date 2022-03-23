#include <iostream>

using namespace std;

// Prototypes
void print(int*, int);
int* apply_all(int*, int, int*, int);

int main() 
{
	int arr[]{ 1,2,3,4,5 };
	int arr2[]{ 10,20,30 };

	cout << "Array 1: ";
	print(arr, 5);

	cout << "Array 2: ";
	print(arr2, 3);

	cout << "Results: ";
	int* new_arr = apply_all(arr, 5, arr2, 3);
	print(new_arr, 15);

	return 0;
}


// Functions
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			cout << "[ ";
		}

		cout << arr[i] << " ";

		if (i == size - 1)
		{
			cout << "]" << endl;
		}
	}
}

int* apply_all(int* arr1, int size1, int* arr2, int size2) {
	int new_size = size1 * size2;
	int* new_arr_ptr = new int[new_size];

	int counter{ 0 };

	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			new_arr_ptr[counter] = (arr2[i] * arr1[j]);
			counter++;
		}
	}

	return new_arr_ptr;
}
