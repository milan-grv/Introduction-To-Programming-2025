// Praktikum02.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int day, month;
	cin >> day >> month;

	if (day >= 1 && day <= 31 && month >= 1 && month <= 12)
	{

		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day <= 30 && month <=11)
			{
				cout << day + 1 << " " << month;
			}
			else if (month == 12) {

				cout << "1 1";

			}
			else {
				cout << "1 " << month + 1;
			}

			break;

		case 4:
		case 6:
		case 9:
		case 11:

			if (day < 30)
			{
				cout << day + 1 << " " << month;
			}
			else {
				cout << "1 " << month + 1;
			}

			break;

		case '2':
			if (day < 28)
			{
				cout << day + 1 << " " << month;
			}
			else {
				cout << "1 " << month + 1;
			}

			break;

		}
	}
	else {
		cout << "Invalid date.";
	}
}
