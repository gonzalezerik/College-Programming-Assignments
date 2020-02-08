//Erik Gonzalez
//CO SCI 575
//Readdata.cpp
//reads the data from a text file and adds up to find the sum, average, posititve, and negative numbers.




/*Should note, I left a note tomyself a year ago stating that this is 
incomplete without adding positive and negative, will have to come back to this */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Open a file
	ifstream input("numbers.txt");
	double sum = 0;
	double number;
	int avg;
	while (!input.eof()) // Read data to the end of file
	{
		input >> number; // Read data
		cout << number << " "; // Display data
		sum += number;
		avg = sum / 7;
	}

	input.close();
	cout << "\nTotal is " << sum << endl;
	cout << "Average is " << avg << endl;

	system("pause");
	return 0;
}
