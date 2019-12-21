#include <iostream>

using namespace std;

void printArray(int* array, const int size)
{
	for (int i = 0; i < size; ++i)
	{

		cout << &(array[i]) << " " << endl;
	}
}

int main()
{
	const int size = 3;

	int oneDimensionalArray[size];
	int twoDimensionalArray[size][size];

	int* oneDynamicArray = new int[size];

	int** twoDynamicArray = new int* [size];

	for (int i = 0; i < size; ++i)
	{
		twoDynamicArray[i] = new int[size];
	}

	cout << "oneDimensionalArray" << endl;
		printArray(oneDimensionalArray, size);

	cout << endl << "twoDimensionalArray" << endl;
		for (int i = 0; i < size; ++i)
			printArray(twoDimensionalArray[i], size);

	cout << endl << "oneDynamicArray" << endl;
		printArray(oneDynamicArray, size);

	cout << endl << "twoDynamicArray" << endl;
		for (int i = 0; i < size; ++i)
			printArray(twoDynamicArray[i], size);
}
