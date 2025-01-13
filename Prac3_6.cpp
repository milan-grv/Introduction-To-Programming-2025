// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int currentNumber = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int t = 1; t <= n; t++)
        {
            cout << currentNumber << " ";
            currentNumber++;
        }
        cout << endl;
    }
}

