// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int currentNumber = 0;

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= number; j++)
		{
			if (i == 1)
			{

				if (j % 2 == 0)
				{
					cout << " " << number * j << " ";
					currentNumber = number * j;
				}
				else
				{
					cout << currentNumber + 1;
				}

			}
			else
			{
				if (j % 2 == 0)
				{
					cout << " " << number * j - i + 1 << " ";
					currentNumber = number * j - i + 1;
				}
				else if (j == 1)
				{
					cout << currentNumber + i;
				}
				else
				{
					cout << currentNumber + 2*i - 1;
				}
			}

			
		}
		currentNumber = 0;
		cout << endl;
	}

}

