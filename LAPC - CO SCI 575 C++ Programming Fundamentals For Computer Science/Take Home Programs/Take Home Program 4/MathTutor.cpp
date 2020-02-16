/*Erik Gonzalez
CO SCI 575
MathTutor.cpp
This program will be used to help tutor math students*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1,
		num2,
		choice, // The user's choice of problem
		studentAnswer,
		correctAnswer;

	srand(time(0));

	do
	{

		cout << "\tMenu\n";
		cout << "1. Addition problem\n";
		cout << "2. Subtraction problem\n";
		cout << "3. Multiplication problem\n";
		cout << "4. Quit this program\n";
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		// Validate the choice.
		if (choice < 1 || choice > 4)
		{
			cout << "Invalid input. You must enter 1-4\n" << endl;

		}

		// Produce a problem.
		switch (choice)
		{
		case 1: // Addition problem

			num1 = 1 + rand() % 50;
			num2 = 1 + rand() % 50;

			correctAnswer = num1 + num2;

			cout << "\n\n";
			cout << " " << setw(4) << num1 << endl;
			cout << " +" << setw(3) << num2 << endl;
			cout << " " << "----" << endl;
			cout << " ";
			break;

		case 2: // Subtraction problem
			num1 = 1 + rand() % 50;

			num2 = rand() % num1;

			while (num2 > num1)
				num2 = 1 + rand() % 50;

			// Get the correct answer.
			correctAnswer = num1 - num2;

			// Display the problem.
			cout << "\n\n";
			cout << " " << setw(4) << num1 << endl;
			cout << " -" << setw(3) << num2 << endl;
			cout << " " << "----" << endl;
			cout << " ";
			break;

		case 3: // Multiplication problem
		// Generate two random number
			num1 = 1 + rand() % 9;
			num2 = 1 + rand() % 9;

			correctAnswer = num1 * num2;

			cout << "\n\n";
			cout << " " << setw(4) << num1 << endl;
			cout << " *" << setw(3) << num2 << endl;
			cout << " " << "----" << endl;
			cout << " ";
			break;

		case 4: // quit the program.
			cout << "Thank you for using Math Tutor.\n\n";
			break;
		}


		if (choice >= 1 && choice <= 3)
		{
			cin >> studentAnswer;
			if (studentAnswer == correctAnswer)
				cout << "\n\nCongratulations! That's right.\n\n";
			else
				cout << "\n\nSorry, the correct answer is " << correctAnswer
				<< ".\n\n";
		}
	} while (choice != 4); // Loop again if the choice is not 1, 2, 3, or 4
	return 0;
}
