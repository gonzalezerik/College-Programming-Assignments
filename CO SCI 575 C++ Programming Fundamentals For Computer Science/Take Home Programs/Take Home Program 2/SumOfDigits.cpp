/*Erik Gonzalez
CO SCI 575
SumOfDigits.cpp
This program asks a user to input a number between 1 and 999. The program first checks if it is a negative number, if its not a negative number it then
proceeds to find the sum of the digits in the number*/
#include <iostream>
using namespace std;

int main()
{

	int num;
	int sum;
	int digit1;
	int digit2;
	int digit3;
	//input
	cout << "Enter a number between 1 and 999: ";
	cin >> num;

	if (num <= 0)
		//Output
		cout << "Number must be positive, try again!" << endl;
	else
	{
		//Processing
		digit1 = num % 10;
		digit2 = num / 10 % 10;
		digit3 = num / 100 % 10;
		sum = digit1 + digit2 + digit3;
		//Output
		cout << "The sum of the digits is: " << sum << endl;
	}
	system("Pause");
	return 0;
}
