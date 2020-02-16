//Erik Gonzalez
//CO SCI 575
//IfInteger.cpp
//Checks if an integer entered by a user is divisible by 2, 3 4, or 5

#include <iostream>
using namespace std;

int main()
{
	int integer;
	//Asks the user to enter an integer
	cout << "Enter an integer: ";
	cin >> integer;

	//Single Ifs that check if a number is divisible by 2, 3, 4 or 5.
	if (integer % 2 == 0)
		cout << integer << " is divisible by 2." << endl;
	if (integer % 3 == 0)
		cout << integer << " is divisible by 3." << endl;
	if (integer % 4 == 0)
		cout << integer << " is divisible by 4." << endl;
	if (integer % 5 == 0)
		cout << integer << " is divisible by 5." << endl;

	system("Pause");
	return 0;

}
