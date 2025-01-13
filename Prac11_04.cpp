#include <iostream>
#include <cmath>
using namespace std;

int* binaryToDecMatrix(const bool * const * binary, int rows, int cols) {
	int sum = 0;

	int* decimal = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (binary[i][j])
			{
				sum += pow(2, (cols - j - 1));
			}
			
		}
		decimal[i] = sum;
		sum = 0;
	}

	return decimal;

}

int main()
{

	const int rows = 4;
	const int cols = 3;

	const bool matrix[rows][cols] = {
		{1, 0, 1},
		{0, 1, 1},
		{1, 1, 1},
		{1, 0, 0}
	};
	
	const bool* binary[rows];
	for (int i = 0; i < rows; i++)
	{
		binary[i] = matrix[i];
	}

	int* result = binaryToDecMatrix(binary, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}
