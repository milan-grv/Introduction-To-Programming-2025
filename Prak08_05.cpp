#include <iostream>
using namespace std;

void readMatrix(int& arrayLength, int arr[100]) {

	cout << "Enter negative number to stop the input." << endl;
	int temp = 0;

	while (true) {
		cin >> temp;
		if (temp < 0) break;

		arr[arrayLength] = temp;
		arrayLength++;
	}

}

void powerSet(int n, int arr[100]) {



}

int main()
{

	int arr[100];
	int arrayLength = 0;

	readMatrix(arrayLength, arr);

	for (int i = 0; i < arrayLength; i++)
	{
		cout << arr[i] << " ";
	}

}
