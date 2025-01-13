// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int digitsSum = 0;
	int currentNumber;
	int dividerCount;
	int lastDigit;
	

	for (int i = 100; i <= 999; i++)
	{
		currentNumber = i;
		while (currentNumber != 0) {

		lastDigit = currentNumber % 10;
		digitsSum += lastDigit;
		currentNumber /= 10;

		}

		if (digitsSum >= 10 && digitsSum <= 99)
		{
			for (int t = 1; t <= digitsSum; t++) {

				if (digitsSum % t == 0)
				{
					dividerCount++;
				}

			}

			if (dividerCount == 2)
			{
				cout << i << endl;
			}

		}

		dividerCount = 0;
		digitsSum = 0;

	}
}
