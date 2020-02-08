/*Erik Gonzalez
CO SCI 575
RandomLetters.cpp
generates a random letter and writes random uppercase letters to the screen based on ASCII chart */
#include <iostream>
#include <string>
using namespace std;



void WriteHeader();
void AskNumberToDisplay(int&);
void CountingDisplay(int);
void GenerateLetter();

int main()
{
	int number;
	string again;
	WriteHeader();
	AskNumberToDisplay(number);
	CountingDisplay(number);

	//input
	cout << "\nWant to go again? Y\N: ";
	cin >> again;

	//Loop
	while (again == "Y" || again == "y" || again == "Yes" || again == "yes")
	{
		AskNumberToDisplay(number);
		CountingDisplay(number);
		cout << "\nTry again? Y/N - ";
		cin >> again;
	}
	//Checks if the user does not want to continue
	if (again == "N" || again == "n" || again == "No" || again == "no")
	{
		cout << "\nThanks for playing!\n";
		system("pause");
		return 0;
	}
}

//Ouput
void WriteHeader()
{
	cout << "This program generates a random number and writes\ncorresponding letters to the screen based on ASCII." << endl;
}
//Input
void AskNumberToDisplay(int& Number)
{
	cout << "\nHow many characters would you like to display? ";
	cin >> Number;
}
//Proccessing and Ouput
void CountingDisplay(int Number)
{
	int loop = 0;
	for (int i = 0; i <= Number - 1; i++)
	{
		if (loop == 10)
		{
			cout << endl;
			loop = 0;
		}
		loop++;
		GenerateLetter();
		cout << " ";
	}
}
//Random Character Generation
void GenerateLetter()
{
	char randomletter;
	randomletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];
	cout << randomletter;
}
