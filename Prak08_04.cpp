#include <iostream>
using namespace std;

int notRepeatedElement(int n, int arr[100]) {

	int notRepeatedElement = arr[0];
	for (int i = 1; i < n; i++)
	{
		notRepeatedElement ^= arr[i];
	}

	return notRepeatedElement;

}

void readArray(int n, int arr[100]) {

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int main()
{

	int arr[100];

	cout << "Enter array length: " << endl;
	int arrayLength; cin >> arrayLength;

	readArray(arrayLength, arr);
	
	cout << notRepeatedElement(arrayLength, arr);

}
