/*Erik Gonzalez
CO SCI 575
SumOfDiagonal.cpp
This is a program that reads a 4-by-4 matrix
and display the sum of all its elements on the major diagonal,
sub-diagonal (below major diagonal) and super-diagonal (above major diagonal).*/

#include <iostream>
using namespace std;

const int SIZE = 4;


double sumMajorDiagonal(const double m[][SIZE]);
double sumSubDiagonal(const double m[][SIZE]);
double sumSuperDiagonal(const double m[][SIZE]);

int main()
{
	double matrix[4][4];

	cout << "Enter a 4 by 4 matrix row by row" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "\nSum of the elements in the major diagonal is " << sumMajorDiagonal(matrix) << endl;

	cout << "Sum of the elements in the sub-diagonal is " << sumSubDiagonal(matrix) << endl;

	cout << "Sum of the elements in the super-diagonal is  " << sumSuperDiagonal(matrix) << endl;
	system("Pause");
	return 0;



}


//Code that adds up the numbers in the Major Diagonal
double sumMajorDiagonal(const double m[][SIZE])
{
	double sum = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
				sum += m[i][j];
		}
	}

	return sum;
}
//Code that adds up the numbers in the Sub Diagonal
double sumSubDiagonal(const double m[][SIZE])
{
	double sum = 0;

	for (int i = 1; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i + j == (SIZE - 1))
				sum += m[i][j];
		}
	}

	return sum;
}
//Code that adds up the numbers in the Super Diagonal
double sumSuperDiagonal(const double m[][SIZE])
{
	double sum = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (i + j == (j + 1))
				sum += m[i][j];
		}
	}
	return sum;
}
