/*Erik Gonzalez
CO SCI 575
AnalyzeNumbers.cpp
calculates the sum, average, positive and negative numbers of a size-5 array entered by users. */
#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int FIVE_NUMS = 5;
	double num[FIVE_NUMS];
	cout << "You can enter 5 integer numbers." << endl;
	//input
	for (int i = 0; i <= FIVE_NUMS - 1; i++)
	{
		cout << "Enter a new number: ";
		cin >> num[i];
	}

	//proccessing
	int sum = num[0] + num[1] + num[2] + num[3] + num[4];
	cout << "Sum is " << sum << endl;

	double average = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;
	cout << "Average is " << average << endl;;

	int positive = 0;
	int negative = 0;
	for (int o = 0; o <= FIVE_NUMS; o++)
	{
		if (num[o] > 0)
			positive++;
		else
		{
			negative++;
		}

	}

	//outputs
	cout << "Number of negative: " << negative - 1 << endl;
	cout << "Number of positive: " << positive << endl;
	system("pause");
	return 0;

}
