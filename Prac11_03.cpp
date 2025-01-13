#include <iostream>
#include <cstring>
using namespace std;

const int MAX_LENGTH = 100;
const int diffUpperLowerCase = 32;

void lowerLetterCopy(char* str, char* strCopy) {
	if (str == nullptr || strCopy == nullptr) return;
	size_t strLen = strlen(str);

	for (size_t i = 0; i < strLen; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			strCopy[i] = str[i] + diffUpperLowerCase;
			continue;
		}
		strCopy[i] = str[i];
	}
	strCopy[strLen] = '\0';

}

void switchingTextWithWord(char* str, char* text, char* word, char* strCopy, size_t wordLen) {
	if (str == nullptr || text == nullptr || word == nullptr || strCopy == nullptr) return;

	lowerLetterCopy(str, strCopy);

	bool match = false;
	int currIndex = 0;
	size_t strLen = strlen(str);

	for (size_t i = 0; i < strLen; i++)
	{
		if (strCopy[i] == text[currIndex])
		{
			for (size_t j = 0; j < wordLen; j++)
			{
				if (strCopy[i + j] != text[j]) break;

				if (j == wordLen - 1 && strCopy[i + j + 1] == ' ') match = true;
			}

			if (match)
			{
				for (size_t k = 0; k < wordLen; k++) str[i + k] = word[k];
			}
		}

		match = false;
		currIndex = 0;
	}

}

int main()
{

	char* str = new char[MAX_LENGTH];
	cin.getline(str, MAX_LENGTH);

	char* strCopy = new char[MAX_LENGTH];

	char* text = new char[MAX_LENGTH];
	cin.getline(text, MAX_LENGTH);

	size_t textLen = strlen(text);

	char* word = new char[textLen + 1];
	cin.getline(word, textLen + 1);

	switchingTextWithWord(str, text, word, strCopy, textLen);

	cout << str;

	delete[] str;
	delete[] text;
	delete[] word;
	delete[] strCopy;
	return 0;
}
