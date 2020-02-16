//Erik Gonzalez
//CO SCI 575
//HousingCost.cpp
//Adds together your individual costs to deternmine what you will pay each month and then multiplies by 12 to determine what you pay yearly
#include <iostream>
#include <string>
#include <iomanip> //alows me to use "setprecision"

using namespace std; 
int main()
{
	const int YEARLY = 12, MONTHLY = 1; //constant values that remain the same throughout the program
	float RentOrMortage, Utilities, Phones, Cable, MonthlyCost, AnnualCost;

	cout << "Enter your monehtly costs for the following: \n" << endl; //prompts the user to enter what he/shy pays for either rent or mortage

	cout << "Rent or Mortage: $", cin >> RentOrMortage; //prompts the user to enter what he/she pay for utilities

	cout << "Utilities: $", cin >> Phones; //prompts the user to enter what he/she pays for their phone(s)

	cout << "Cable: $", cin >> Cable; //prompts the user to enter what he/she pays for the cable

	MonthlyCost = (RentOrMortage + Utilities + Phones + Cable) * MONTHLY;//adds up all the expenses to return what he/she pays for everything in a month
	AnnualCost = (RentOrMortage + Utilities + Phones + Cable) * YEARLY;//adds up all the expenses then multiplies it by 12 to find out what he/she pays each year

	//"setprecision (2)" and "fixed" allow me to have two digits after the decimal point
	cout << "\nTotal monthly housing costs: $" << setprecision(2) << fixed << MonthlyCost << endl;
	cout << "Total annual housing costs: $" << setprecision(2) << fixed << AnnualCost << endl;
	system("Pause");
	return 0;


}
