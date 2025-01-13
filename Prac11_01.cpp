#include <iostream>
#include <cstring>
using namespace std;

const int MAX_LENGTH = 1024;

int countOfChar(char* str, char ch) {
	if (str == nullptr) return -2;

	int counter = 0;

	size_t stringLength = strlen(str);

	for (size_t i = 0; i < stringLength; i++) if (str[i] == ch) counter++;

	return counter;
}

int main()
{

	char* str = new char[MAX_LENGTH];
	cin.getline(str, MAX_LENGTH);

	char searchedChar; cin >> searchedChar;

	cout << countOfChar(str, searchedChar);

	delete[] str;
	return 0;
}
