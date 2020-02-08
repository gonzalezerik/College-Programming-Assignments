/* Erik Gonzalez
CO SCI 575
Lottery.cpp
program to randomly generates a lottery of a five - digit number ranging from 0 to 9 and store in WinningDigits array.The program asks the user to enter a five - digit number in a range from 0 - 9 and store in PlayerDigits array.
*/
#include <iostream>
#include <ctime>
using namespace std;
const int SIZE = 5;
void WinningDigits(int[]);

bool PlayerDigits(int[]);
int main()
{
	int winningDigits[SIZE];
	int userNums[SIZE];
	int match = 0;

	srand(time(NULL));					// Give the random generator
										// a seed to start with
	WinningDigits(winningDigits);

	// Get 5 random digits and store them in winningDigits

	PlayerDigits(userNums);




	// Compare the corresponding elements in two arrays and
	// count how many digits match.
	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == userNums[i])
			match++;
	}


	// Display winning digits
	cout << "Winning digits : ";
	for (int i = 0; i < 5; i++)
	{
		cout << winningDigits[i] << " ";
	}
	cout << endl;

	// Display player's digits
	cout << "player digits  : ";
	for (int i = 0; i < 5; i++)
	{
		cout << userNums[i] << " ";
	}
	cout << endl;

	// Display number of matching digits
	cout << "Matching digits: " << match << endl;

	if (match == 1)
	{
		cout << "You have 1 matching digits.You won $1, 000" << endl;
	}

	else if (match == 2)
	{
		cout << "You have 2 matching digits.You won $2, 000" << endl;
	}
	else if (match == 3)
	{
		cout << "You have 3 matching digits. You won $3,000" << endl;
	}
	else if (match == 4)
	{
		cout << "You have 4 matching digits. You won $4,000" << endl;
	}
	else if (match == 5)
	{
		cout << "Congratulations! You won $10,000" << endl;
	}
	else
	{
		cout << "Sorry, no match!" << endl;
	}

	return 0;
}

bool PlayerDigits(int digits[])
{


	bool found = false;
	cout << "Enter the 5 digits of your lottery number, separated by blanks :";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> digits[i];
	}

	{
		for (int i = 0; i < SIZE; i++)
		{
			if (digits[i] < 0 || digits[i] > 8)
			{
				found = true;
			}
			else if (digits[i] < 0 || digits[i] > 8)
			{
				cout << "Enter the 5 digits of your lottery number, separated by blanks :";
				for (int i = 0; i < SIZE; i++)
				{
					cin >> digits[i];
				}
				found = false;
			}

		}

		return found;
	}

}
void WinningDigits(int winningDigits[])
{
	for (int i = 0; i < 5; i++)
	{
		winningDigits[i] = 0 + rand() % 9;
	}
}
