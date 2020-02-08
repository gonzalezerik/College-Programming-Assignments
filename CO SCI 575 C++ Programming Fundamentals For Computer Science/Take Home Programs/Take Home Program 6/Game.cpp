/* Erik Gonzalez
CO SCI 575
game.cpp
A simple rock, paper, scissors game against a bot. */
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;



int main()
{
	unsigned int seed;
	seed = time(0);
	srand(seed);
	int compNum = rand() % 3 + 1;
	string name;
	string choice;
	int compChoice = compNum;
	int playerWin = 0;
	int compWin = 0;
	//Input
	cout << "My name is Gamebot, what is your name? ";
	cin >> name;

	cout << "\nChoose a hand to play:" << endl;
	cout << " Type R for rock, P for paper, or S for Scissors." << endl;
	cout << " When you want to stop, type E for End instead." << endl;
	cout << " Your choice: ";
	cin >> choice;

	//Checks if the user wants to quit
	if (choice == "E")
	{
		cout << "\nThank you for playing, " << name << ".";
		cout << "\n  You won " << playerWin << " hands.";
		cout << "\n  I won " << compWin << " hands.";
		if (playerWin == compWin)
			cout << "\nWe tied. There is no winner." << endl;
		else if (playerWin > compWin)
			cout << "\nYou won, you just got lucky kid.\n";
		else if (playerWin < compWin)
			cout << "\nI win! No one can beat me!\n";
		system("pause");
		return 0;
	}

	//If the choice isn't recognized it'll display this
	if (choice != "R" && choice != "P" && choice != "S" && choice != "E")
		cout << "Your input must be one of the characters(R, P, S or E)" << endl;

	/*
	Case 1 = computer picked Rock
	Case 2 = computer picked Paper
	Case 3 = Computer picked Scissors
	*/
	switch (compChoice)
	{
		//Rock
	case 1:
		if (choice == "R")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Rock." << endl;
			cout << "Dang, we both picked " << choice << ". Let's go again!" << endl;
		}
		if (choice == "P")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Rock." << endl;
			cout << "Darn you " << name << ", " << "You win.";
			playerWin++;
		}
		if (choice == "S")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Rock." << endl;
			cout << "I win! You're such a loser!" << endl;
			compWin++;
		}
		break;
		//Paper
	case 2:
		if (choice == "R")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Paper." << endl;
			cout << "I win! You're such a loser!" << endl;
			compWin++;
		}
		if (choice == "P")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Paper." << endl;
			cout << "Dang, we both picked " << choice << ". Let's go again!" << endl;
		}
		if (choice == "S")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Paper." << endl;
			cout << "Darn you " << name << ", " << "You win.";
			playerWin++;
		}
		break;
		//Scissors
	case 3:
		if (choice == "R")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Scissors." << endl;
			cout << "Darn you " << name << ", " << "You win.";
			playerWin++;
		}
		if (choice == "P")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Scissors." << endl;
			cout << "I win! You're such a loser!" << endl;
			compWin++;
		}
		if (choice == "S")
		{
			cout << "\nYou picked " << choice << ". " << "I picked Scissors." << endl;
			cout << "Dang, we both picked " << choice << ". Let's go again!" << endl;
		}
		break;

	}

	/*The loop that'll keep the game going until the user stops it.
	Rhe code is identical as above with some minor changes for the output format. */

	while (choice != "E")
	{
		cout << "\n-------------------------------------------------" << endl;
		cout << "\nChoose a hand to play:" << endl;
		cout << " Type R for rock, P for paper, or S for Scissors." << endl;
		cout << " When you want to stop, type E for End instead." << endl;
		cout << " Your choice: ";
		cin >> choice;

		if (choice == "E")
		{
			cout << "\n-------------------------------------------------" << endl;
			cout << "\nThank you for playing, " << name << ".";
			cout << "\n  You won " << playerWin << " hands.";
			cout << "\n  I won " << compWin << " hands.";
			if (playerWin == compWin)
				cout << "\nWe tied. There is no winner." << endl;
			else if (playerWin > compWin)
				cout << "\nYou won, you just got lucky kid.\n";
			else if (playerWin < compWin)
				cout << "\nI win! No one can beat me!\n";
			system("pause");
			return 0;

		}

		if (choice != "R" && choice != "P" && choice != "S" && choice != "E" && choice != "r" && choice != "p" && choice != "s" && choice != "e")
			cout << "Your input must be one of the characters(R, P, S or E)" << endl;


		switch (compChoice)
		{
			//Rock
		case 1:
			if (choice == "R")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Rock." << endl;
				cout << "Dang, we both picked " << choice << ". Let's go again!" << endl;
			}
			if (choice == "P")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Rock." << endl;
				cout << "Darn you " << name << ", " << "You win.";
				playerWin++;
			}
			if (choice == "S")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Rock." << endl;
				cout << "I win! You're such a loser!" << endl;
				compWin++;
			}
			break;
			//Paper
		case 2:
			if (choice == "R")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Paper." << endl;
				cout << "I win! You're such a loser!" << endl;
				compWin++;
			}
			if (choice == "P")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Paper." << endl;
				cout << "Dang, we both picked " << choice << ". Let's go again!" << endl;
			}
			if (choice == "S")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Paper." << endl;
				cout << "Darn you " << name << ", " << "You win.";
				playerWin++;
			}
			break;
			//Rock
		case 3:
			if (choice == "R")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Scissors." << endl;
				cout << "Darn you " << name << ", " << "You win.";
				playerWin++;
			}
			if (choice == "P")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Scissors." << endl;
				cout << "I win! You're such a loser!" << endl;
				compWin++;
			}
			if (choice == "S")
			{
				cout << "\nYou picked " << choice << ". " << "I picked Scissors." << endl;
				cout << "Dang, we both picked " << choice << ". Let's go again!" << endl;
			}
			break;

		}
	}
	system("pause");
	return 0;
}
