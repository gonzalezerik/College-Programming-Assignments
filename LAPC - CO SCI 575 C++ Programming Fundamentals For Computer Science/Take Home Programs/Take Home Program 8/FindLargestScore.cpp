/*Erik Gonzalez
CO SCI 575
FindLargestScore.cpp
Reads in 5 scores inputted by the user and only accepts score in the range from 1 to 100.  Once all is valid;
display all scores, find the highest score and shows how much each score differs from the highest score.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int FIVE = 5;
	int scores[FIVE];

	cout << "Enter 5 scores between 1 to 100" << endl;
	//Input and checks if the score is valid
	for (int i = 0; i <= FIVE - 1; i++)
	{
		cin >> scores[i];
		if (scores[i] < 0 || scores[i] > 100)
		{
			cout << "Invalid input. Score must be from 1 to 100. Try again." << endl;
			i = i - 1; //Since the score is invalid, it'll reset i by one to be able to give the user another chance to enter a correct number.
		}
	}

	//Finds the biggest number
	cout << "You entered: " << scores[0] << " " << scores[1] << " " << scores[2] << " " << scores[3] << " " << scores[4] << endl;
	for (int z = 1; z < FIVE - 1; ++z)
	{
		if (scores[0] < scores[z])
			scores[0] = scores[z];
	}

	//Output
	cout << "The highest score is " << scores[0] << endl;
	cout << "The Scores and their differences from the highest are:" << endl;

	for (int x = 0; x <= FIVE - 1; x++)
	{
		cout << "At the position " << x << ": score " << scores[x] << " off by " << 100 - scores[x] << endl;
	}
	system("pause");
	return 0;

}
