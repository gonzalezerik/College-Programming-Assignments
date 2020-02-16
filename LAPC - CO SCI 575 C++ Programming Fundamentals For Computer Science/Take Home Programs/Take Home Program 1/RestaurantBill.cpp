//Erik Gonzalez
//CO SCI 575
//RestaurantBill.cpp
//This program calculates the tax, 15 percent tip, and a 20 percent tip based on the cost of the meal.\

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const float SALES_TAX = 0.0975, FIFTEEN_PERCENT = 0.15, TWENTY_PERCENT = 0.20; //Vaalues that remain the same throughout the code
	float mealCost, Tax, FifteenConversion, TwentyConversion, FifteenGratuity, TwentyGratuity; //Variables

	cout << "Enter the meal cost: ", cin >> mealCost;  //asks the user to input the cost of the meal
	cout << "*****************************************" << endl;
	cout << "Meal Cost $" << setprecision(2) << fixed << mealCost << endl;
	//"setprecision(2)" and "fixed" allows me to have two digits after the decimal point

	Tax = mealCost * SALES_TAX; //Calculates the tax based on the price of the meal
	cout << "Tax $" << Tax << endl;
	
	FifteenConversion = mealCost * FIFTEEN_PERCENT; //calcualtes the 15% tip of the meal cost
	cout << "Tip (15%) $" << FifteenConversion << endl;

	TwentyConversion = mealCost * TWENTY_PERCENT; //Calculate sthe 20% tip of the meal cost
	cout << "Tip (20%) $" << TwentyConversion << endl;

	FifteenGratuity = mealCost + Tax + FifteenConversion; //Calculates the total of everything with the 15% tip
	TwentyGratuity = mealCost + Tax + TwentyConversion; //Calculates the total of everything with the 20% tip

	cout << "Your total bill is " << FifteenGratuity << " after 15% gratuity." << "\nor" << endl;
	cout << "Your total bill is " << TwentyGratuity << " after 20% gratuity." << endl;

	system("Pause");
	return 0;
}