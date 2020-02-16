/* Erik Gonzalez
CO SCI 575
WordSeparator.cpp
In this program the user enters a sentance but the words have no spaces
inbetween and each new word has to start with a captial letter. The program
then proceeds to seperate, and lowercase every word. The only capital will
be the first character in the string. */

#include <iostream>
#include <string>
using namespace std;

string split(string);

int main()
{
	string sentance;

	cout << "Enter a sentance: ";
	cin >> sentance;

	cout << "\nNew sentance: " << split(sentance) << endl;

	system("Pause");
	return 0;
}

string split(string split)
{
	int stringLength = split.length();
	int loopBreak = stringLength * 2;
	int i = 1;

	/* This loop skips the first character then lowercases each word with an uppercase
	character and then puts a space inbetween that character and the previous one
	before it. */
	while (i != loopBreak)
	{
		i++;
		char c = split[i];
		if (isupper(c))
		{
			split[i] = tolower(split[i]);
			split.insert(i++, " ");

		}
		else if (islower(c))
		{
			i++;
			i--;
		}
		else
		{
			i = loopBreak;
		}
	}
	/* This loop only accounts for the first character in the sentance
	and if it is lowercase it'll proceed to uppercase it. If the
	character is already uppercase it will ignore it. */
	for (int i = 0; i < 1; i++)
	{
		char c = split[i];
		if (islower(c))
		{
			split[i] = toupper(split[i]);
		}
	}
	return split;
}
