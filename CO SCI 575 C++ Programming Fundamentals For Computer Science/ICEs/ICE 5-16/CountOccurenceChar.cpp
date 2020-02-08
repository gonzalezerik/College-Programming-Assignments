/* Erik Gonzalez
CO SCI 575
CountOccurenceChar.cpp
This program counts and displays occurrences of the characters of a string entered from users.
*/

#include <iostream>
#include <string>
using namespace std;

string selectionSort();
void charCount();

string sentance;
int main()
{

	int count = 0;

	cout << "Enter a string: ";
	getline(cin, sentance);
	cout << endl;

	int length = sentance.length();
	for (int i = 0; i < length; i++)
	{
		sentance[i] = tolower(sentance[i]);
	}

	selectionSort();
	charCount();

	system("Pause");
	return 0;
}
//Sorts in alphabetical order
string selectionSort()
{
	int startScan, minIndex;
	char minValue;
	int length = sentance.length();
	for (startScan = 0; startScan < length; startScan++)
	{
		minIndex = startScan;
		minValue = sentance[startScan];
		for (int index = startScan + 1; index < length; index++)
		{
			if (sentance[index] < minValue)
			{
				minValue = sentance[index];
				minIndex = index;

			}
		}
		sentance[minIndex] = sentance[startScan];
		sentance[startScan] = minValue;

	}
	return sentance;
}

/* This function automatically assigns every character in the string
a value of one and will only increase if a character matches another
in the string. If it matches the character value will be one more than
it is supposed to be as in the beginning it was assigned an extra value.
So once it matches it will subtract that extra value to correct itself. */
void charCount()
{
	int count = 0;
	int length = sentance.length();

	for (int i = 0; i < length; i++)
	{
		if (sentance[i] != ' ')
		{
			count++;
			if (sentance[i] == sentance[i + 1])
			{
				count++;
				int check = count - 1;
				count = check;
			}
			else
			{
				cout << sentance[i] << ": " << count << " times" << endl;
				count = 0;
			}
		}
	}
}
