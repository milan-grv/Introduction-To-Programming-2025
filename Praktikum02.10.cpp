// Praktikum02.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers of Your choice. \n";
    double num1, num2;
    cin >> num1 >> num2;

    cout << "Enter the wanted operation with those two numbers:" << "+, " << "-, " << "*, " << "/ \n";
    char command;
    cin >> command;

    double newNumber = 0;

    switch (command)
    {
    case '+':
        newNumber = num1 + num2;
        cout << newNumber;
        break;

    case '-':
        newNumber = num1 - num2;
        cout << newNumber;
        break;

    case '*':
        newNumber = num1 * num2;
        cout << newNumber;
        break;

    case '/':
        if (num2 != 0)
        {
            newNumber = num1 / num2;
            cout << newNumber;
        }
        else {
            cout << "You can not devide by 0";
            break;
        }
        break;

    default:
        cout << "Invalid command!";
        break;
    }
   
}

