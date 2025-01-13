#include <iostream>
#include <cstring>
using namespace std;

const int MAX_LENGTH = 1024;

void onlyLowerLettersString(char* str1, char* str2) {
	if (str1 == nullptr || str2 == nullptr) return;

	size_t str1Len = strlen(str1);
	int currentStr2Position = 0;

	for (size_t i = 0; i < str1Len; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			str2[currentStr2Position] = str1[i];
			currentStr2Position++;
		}
	}
	str2[currentStr2Position] = '\0';
}

int main()
{

	char* string1 = new char[MAX_LENGTH];
	cin.getline(string1, MAX_LENGTH);

	char* string2 = new char[MAX_LENGTH];

	onlyLowerLettersString(string1, string2);

	//size_t str2Len = strlen(string2);
	//for (size_t i = 0; i < str2Len; i++) cout << string2[i];

	cout << string2;

	delete[] string1;
	delete[] string2;
	return 0;
}
