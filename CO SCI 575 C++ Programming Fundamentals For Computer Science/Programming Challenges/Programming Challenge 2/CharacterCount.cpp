//Erik Gonzalez
//COSCI 575
//CharacterCount.cpp 
//This program counts the number of letters, digits, spaces and symbols in the first 30 input characters.
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char userInput;
	int letters = 0;
	int digits = 0;
	int symbols = 0;
	int spaces = 0;

	cout << "Enter your text: ";
	for (int i = 1; i <= 30; i++)
	{
		cin.get(userInput); //input

		if (isalpha(userInput))
			letters++;
		else if (isdigit(userInput))
			digits++;
		else if (isspace(userInput))
			spaces++;
		else
			symbols++;

	}
	cout << "Input contained: \n";

	//Checks if anything in the input is equal to one to use correct grammar and also outputs
	if (letters == 1)
		cout << "\n" << letters << " letter." << endl;
	else
		cout << "\n" << letters << " letters." << endl;
	if (digits == 1)
		cout << digits << " digit." << endl;
	else
		cout << digits << " digits." << endl;
	if (spaces == 1)
		cout << spaces << " space." << endl;
	else
		cout << spaces << " spaces." << endl;
	if (symbols == 1)
		cout << symbols << " symbol." << endl;
	else
		cout << symbols << " symbols." << endl;

	system("pause");
	return 0;
}