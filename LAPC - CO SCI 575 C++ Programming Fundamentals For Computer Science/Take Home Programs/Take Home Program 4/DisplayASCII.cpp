/* Erik Gonzalez
CO SCI 575
Display ASCII Table.cpp
This is a program that displayers the ASCII table from characters from 32 to 127 while making sure there
are 16 characters per line*/

#include <iostream>
using namespace std;

int main()
{
	int val,  		// Value				
		letters = 32;

	for (int Row = 0; Row < 6; Row++)	// loop to make 6 rows
	{
		val = letters + 16; 				// 16 character on each line
		for (int ASCII = letters; ASCII < val; ASCII++)
		{
			if (ASCII % 128 == 0) // Makes sure every row is organized and outputs correctly.
				cout << endl;
			cout << static_cast<char>(ASCII) << " ";
		}
		letters = val; 					// Start new row one character than last line
		cout << endl;
	}
	system("pause");
	return 0;
}
