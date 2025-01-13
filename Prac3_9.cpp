// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
	int sumOfSimpleNumbers = 0;

	int dividerCounter = 0;

	for (int i = n; i <= m; i++)
	{
		for (int t = 1; t <= i; t++)
		{
			if (i % t == 0) 
			{
				dividerCounter++;
			}

		}

		if (dividerCounter == 2)
		{
			sumOfSimpleNumbers += i;
		}
		dividerCounter = 0;
	}

	cout << sumOfSimpleNumbers;
}


