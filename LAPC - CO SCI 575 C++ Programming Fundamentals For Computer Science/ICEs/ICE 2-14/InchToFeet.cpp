//Erik Gonzalez
//CO SCI 575
//InchToFeet.cpp
//This program gets the height inputted by the user in inches, and converts it into feet
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int INCH_IN_FOOT = 12;

	int height; //Height will be the container that holds the height inputted by the user in inches
	int InchToFeet; //This will be the variable that will hold the inches to feet conversion
	int Inches; //Inches is the variable that will hold the remainder
	string name; //The string name will hold the name inputted by the user

	cout << "This program will display a persion's height in feet and inches format." << endl;
	cout << "What is your name? ", getline(cin, name); //This will ask the user to input his/her name
	
	cout << "Enter your height in inches ", cin >> height; //This will prompt the user to enter his/her height

	InchToFeet = height / INCH_IN_FOOT; //This converts the height in inches into feet
	Inches = height % INCH_IN_FOOT;

	cout << "\tHi " << name << ", " << "you are " << InchToFeet << " feet and " << Inches << " inches tall" << endl;
	system("Pause");
	return 0;

}