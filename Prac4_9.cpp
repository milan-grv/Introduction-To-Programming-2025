// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int lengthOfInteger(int integer) {

	int countOfDigits = 0;

	while (integer != 0) {

		countOfDigits += 1;
		integer /= 10;

	}
	return countOfDigits;
}


int kNumberOfN (int n, int k) {
	int kDigitOfN = 0;

	int lengthOfN = lengthOfInteger(n);

	for (int i = 1; i <= (lengthOfN - k); i++)
	{
		n /= 10;
	}

	return n % 10;
}

bool isInputValid(int n, int k) {
    return (n >= (10 ^ (k - 1)) && k > 0) ? true : false;
}

int main()
{
    int n, k; cin >> n >> k;

	if (isInputValid(n, k))
	{
		cout << kNumberOfN(n, k);
	}
	else
	{
		cout << "Your input data is incorect, because there is no K - Number in the number N or Your K number is not a positive number.";
	}
}
