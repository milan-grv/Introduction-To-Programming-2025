// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main()
{
    int n; cin >> n;

    cout << lengthOfInteger(n);
}

