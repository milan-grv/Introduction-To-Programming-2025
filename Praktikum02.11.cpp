// Praktikum02.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int firstDigit, secondDigit, thirdDigit;
    cin >> firstDigit >> secondDigit >> thirdDigit;
	int finalNumber;

	if (firstDigit > secondDigit && firstDigit > thirdDigit)
	{
		finalNumber = firstDigit * 100;

		if (secondDigit > thirdDigit)
		{
			finalNumber = finalNumber + (10 * secondDigit) + thirdDigit;
		}
		else
		{
			finalNumber = finalNumber + (10 * thirdDigit) + secondDigit;
		}
	}
	else if (secondDigit > firstDigit && secondDigit > thirdDigit)
	{
		finalNumber = secondDigit * 100;

		if (firstDigit > thirdDigit)
		{
			finalNumber = finalNumber + (10 * firstDigit) + thirdDigit;
		}
		else
		{
			finalNumber = finalNumber + (10 * thirdDigit) + firstDigit;
		}
	}
	else {
		finalNumber = thirdDigit * 100;

		if (secondDigit > firstDigit)
		{
			finalNumber = finalNumber + (10 * secondDigit) + firstDigit;
		}
		else
		{
			finalNumber = finalNumber + (10 * firstDigit) + secondDigit;
		}
	}
	cout << finalNumber;
}

