/* Erik Gonzalez
CO SCI 575
SortAndSearch.cpp
This program sorts an array of names in alphabetical order,
then asks the user to search for a name in the array
and then the program searches for that name and corrects
any mispelling caused by the user.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void displayNames(const string[], int);
void selectionSort(string[], int);
string upperCaseIt(const string);
bool binarySearch(const string[], int, string);

const int SIZE = 20;

string nameList[SIZE] = {
		"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
		"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
		"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
		"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
		"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"

};

string inputName;

int main()
{

	cout << "The names in sorted order are: " << endl;

	selectionSort(nameList, SIZE);
	displayNames(nameList, SIZE);

	cout << "\nType the name to search (Last name, first name): \n";
	getline(cin, inputName);
	inputName = upperCaseIt(inputName);

	binarySearch(nameList, SIZE, inputName);




	string again;
	cout << "\nWant to go again? Y\N: ";
	cin >> again;

	while (again == "Y" || again == "y" || again == "Yes" || again == "yes")
	{
		cout << "\nType the name to search (Last name, first name): \n";
		cin.ignore();
		getline(cin, inputName);
		inputName = upperCaseIt(inputName);

		binarySearch(nameList, SIZE, inputName);

		cout << "\nWant to go again? Y\N: ";
		cin >> again;
	}
	//Checks if the user does not want to continue
	if (again == "N" || again == "n" || again == "No" || again == "no")
	{
		system("pause");
		return 0;
	}
}

//Displays all the names in the array
void displayNames(const string[], int)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << nameList[i];
		cout << endl;
	}
}

//Sorts the names in alphabetical order
void selectionSort(string[], int)
{
	int startScan, minIndex;
	string minValue;

	for (startScan = 0; startScan < SIZE; startScan++)
	{
		minIndex = startScan;
		minValue = nameList[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (nameList[index] < minValue)
			{
				minValue = nameList[index];
				minIndex = index;

			}
		}
		nameList[minIndex] = nameList[startScan];
		nameList[startScan] = minValue;

	}
}

//Searches the array of names to find a match 
bool binarySearch(const string[], int, string)
{

	int first = 0,
		last = SIZE - 1,
		middle,
		position = -1;

	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (nameList[middle] == inputName)
		{
			found = true;
			position = middle;
		}
		else if (nameList[middle] > inputName)
			last = middle - 1;
		else
			first = middle + 1;
	}
	if (position >= 0)
		cout << inputName << " was found in the array." << endl;
	else
		cout << inputName << " was NOT found in the array." << endl;
	return position;
}

//Converts the string into a cstring by using strcpy and then fixes any errors in the spelling.
/*Note: When I tried using strcpy, the compiler said this function or variable
may be unsafe and that I should use strcpy_s instead*/
string upperCaseIt(const string)
{
	char fixedNames[SIZE];
	strcpy_s(fixedNames, inputName.c_str());

	fixedNames[0] = toupper(fixedNames[0]);

	for (int i = 1; i < SIZE; i++)
	{
		if (fixedNames[i - 1] == ' ')
			fixedNames[i] = toupper(fixedNames[i]);
		else
			fixedNames[i] = tolower(fixedNames[i]);
	}
	return fixedNames;
}
