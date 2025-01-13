
#include <iostream>
using namespace std;

//Извинявайте, че задачите са в на едно място, тоест,
//че се изпълняват всички едновременно и в зависимост от входа, може да не работят, ще го поправя за следващите пъти

void printMatrix(int matrix[][100], int n, int m) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

}

int matrixSmallestElement(int matrix[][100], int n, int m) {

	int smallestElement = 100000;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < smallestElement) smallestElement = matrix[i][j];
		}
	}
	return smallestElement;
}

void printMainAndSecondaryDiagonal(int matrix[][100], int n) {

	for (int i = 0; i < n; i++)
	{
		cout << matrix[i][i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << matrix[i][n - i - 1] << " ";
	}
	cout << endl;
}

void zigZagMatrix(int matrix[][100], int n, int m) {

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
		else
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix[i][m - j - 1] << " ";
			}
			cout << endl;

		}
	}

}

bool triangularMatrix(int matrix[][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (matrix[i][j] != 0) return false;
		}
	}
	return true;
}

void transposeMatrix(int matrix[][100], int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}

}

bool magicSquare(int matrix[][100], int n) {
	int primeSum = 0;
	int currentSum = 0;

	for (int i = 0; i < n; i++)
	{
		primeSum += matrix[0][i];
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++)
		{
			currentSum += matrix[i][j];
		}
		if (currentSum != primeSum) {
			cout << "not magic square" << endl;
			return false;
		}
		currentSum = 0;

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			currentSum += matrix[j][i];
		}
		if (currentSum != primeSum)
		{
			cout << "not magic square" << endl;
			return false;
		}
		currentSum = 0;
	}


	for (int i = 0; i < n; i++)
	{
		currentSum += matrix[i][i];
	}
	if (currentSum != primeSum)
	{
		cout << "not magic square" << endl;
		return false;
	}
	currentSum = 0;

	for (int i = 0; i < n; i++)
	{
		currentSum += matrix[i][n - i - 1];
	}
	if (currentSum != primeSum) {

		cout << "not magic square" << endl;
		return false;
	}
	
	cout << "This matrix is a magic square!" << endl;
	cout << "The sum is: " << primeSum << endl;
	return true;
}

void sumTwoMatrix (int matrix[][100], int matrix2[][100], int n, int m) {
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix2[i][j] += matrix[i][j];
		}
	}

	printMatrix(matrix2, n, m);

}

void multiplyMatrixWithNumber(int matrix[][100], int n, int m, int lambda) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << lambda * matrix[i][j] << " ";
		}
		cout << endl;
	}

}

void readMatrix(int matrix[][100], int n, int m) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

}

int main()
{
	int matrix[100][100];
	int n, m;
	cout << "Enter first matrix parameters:" << endl;

	cout << "Rows: ";
	cin >> n;
	cout << endl;

	cout << "Columns: ";
	cin >> m;
	cout << endl;

	cout << "Enter first matrix: " << endl;
	readMatrix(matrix, n, m);

	cout << "Smallest element:" << matrixSmallestElement(matrix, n, m) << endl << endl;

	cout << "Main and secondary diagonal: " << endl; printMainAndSecondaryDiagonal(matrix, n);
	cout << endl;

	cout << "Zig - Zag Matrix: " << endl; zigZagMatrix(matrix, n, m);
	cout << endl;

	cout << "Is Matrix Triangular?" << endl << triangularMatrix(matrix, n) << endl;

	cout << "Transpose Matrix:" << endl; transposeMatrix(matrix, n);
	cout << endl;

	magicSquare(matrix, n);
	cout << endl;


	cout << "Enter a number for multiplication: ";
	int lambda; cin >> lambda;
	cout << endl;

	cout << "Multiplied matrix: " << endl; multiplyMatrixWithNumber(matrix, n, m, lambda);
	cout << endl;


	cout << "Enter second matrix with same parameters:" << endl;
	int matrix2 [100][100];

	readMatrix(matrix2, n, m);
	cout << endl;

	cout << "Sum of first and second matrix: " << endl; sumTwoMatrix(matrix, matrix2, n, m);
	cout << endl;

}

//Извинявайте, че задачите са в на едно място, тоест,
//че се изпълняват всички едновременно и в зависимост от входа, може да не работят, ще го поправя за следващите пъти