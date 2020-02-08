/* Erik Gonzalez
CO SCI 575
colormixer.cpp
The purpose of this program is to have the user input either red, blue, or yellow and then have
them enter a second color based on what they originally picked*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color1,
		color2;

	cout << "When you enter two primary colors, I will tell you \nwhat color they make when they are mixed together?" << endl;

	//Input
	cout << "\nEnter red, blue, or yellow: ";
	cin >> color1;

	if (color1 != "red" && color1 != "blue" && color1 != "yellow")
	{
		cout << "\nYou did not enter a requested color." << endl; //Output
	}

	//Proccessing
	else if (color1 == "red")
	{
		//Input
		cout << "Now enter blue or yellow: ";
		cin >> color2;

		if (color2 == "blue")
			cout << "\nRed and blue make purple." << endl; //Output
		if (color2 == "yellow")
			cout << "\nRed and yellow make orange." << endl; //Ouput
		else if (color2 != "blue" && "yellow")
			cout << "\nYou did not enter a requested color." << endl;
	}

	//Proccessing
	else if (color1 == "blue")
	{
		//Input
		cout << "Now enter red or yellow: ";
		cin >> color2;

		if (color2 == "red")
			cout << "\nBlue and red make purple." << endl; //Output
		if (color2 == "yellow")
			cout << "\nBlue and yellow make green." << endl; //Output
		else if (color2 != "red" && "yellow")
			cout << "\nYou did not enter a requested color." << endl;
	}

	//Proccessing
	else if (color1 == "yellow")
	{
		//Input
		cout << "Now enter red or blue: ";
		cin >> color2;

		if (color2 == "red")
			cout << "\nYellow and red make orange." << endl; //Output
		if (color2 == "blue")
			cout << "\nYellow and blue make green." << endl; //Output
		else if (color2 != "red" && "blue")
			cout << "\nYou did not enter a requested color." << endl;
	}
	system("pause");
	return 0;
}
