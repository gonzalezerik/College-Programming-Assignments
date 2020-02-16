/* Erik Gonzalez
CO SCI 575
dollargame.cpp
This program is a game that challenges the user to add up quarters, nickels, dimes, and pennies to a dollar. If the user fails
to add up to a dollar, the program will display a message saying so. */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	const float QUARTER = 0.25;
	const float NICKELS = 0.05;
	const float DIME = 0.10;
	const float PENNY = 0.01;
	const float DOLLAR = 1.00;
	float quarterChoice, nickelChoice, dimeChoice, pennyChoice;
	float dollarCalculation;

	cout << "The goal of this game is to enter a combination of quarters,\ndimes, nickels, and pennies that add up exactly to one dollar.\n" << endl;
	//Input
	cout << "How many quarters should I use? ";
	cin >> quarterChoice;

	cout << "How many dimes should I use? ";
	cin >> dimeChoice;

	cout << "How many nickels should I use? ";
	cin >> nickelChoice;

	cout << "How many pennies should I use? ";
	cin >> pennyChoice;
	//Processing
	dollarCalculation = (QUARTER * quarterChoice) + (DIME * dimeChoice) + (NICKELS * nickelChoice) + (PENNY * pennyChoice);
	//Output

	if (dollarCalculation == DOLLAR)
		cout << "\nCongratulations. Your coins total exactly a dollar." << endl;
	if (dollarCalculation > DOLLAR)
		cout << "\nYour coins total $" << dollarCalculation << ". " << "That is more than a dollar." << endl;
	else if (dollarCalculation < DOLLAR)
		cout << setprecision(2) << fixed << "\nYour coins total $" << dollarCalculation << ". " << "That is less than a dollar." << endl;

	system("Pause");
	return 0;
}
