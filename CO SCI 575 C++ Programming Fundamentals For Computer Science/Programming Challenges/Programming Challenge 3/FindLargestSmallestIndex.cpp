/*Erik Gonzalez
CO SCI 575
FindLargestSmallesIndex.cpp

This program displays 15 integers in a range from 0-20.
The program will find and display:
	The last largest element and its position,
	The first smallest element and its position.
*/

#include <iostream>
#include <ctime>
using namespace std;

void printArray(const int array[], int size);
int lastLargestIndex(const int array[], int size);
int firstSmallestIndex(const int array[], int size);

int main()
{
	const int SIZE = 15;
	int array[SIZE];
	unsigned int seed;
	seed = time(0);
	srand(seed);

	//loop to generate the 15 random numbers 
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 20 + 0;
	}

	printArray(array, SIZE);

	int lastLargest = lastLargestIndex(array, SIZE);

	cout << "\n\nThe largest element in this list is " << array[lastLargest] << " at the position [" << lastLargest << "]" << endl;

	int firstSmall = firstSmallestIndex(array, SIZE);
	cout << "The smallest element in this list is " << array[firstSmall] << " at the position [" << firstSmall << "]" << endl;

	system("pause");
	return 0;
}

//Prints the array of 15 numbers randomly generated
void printArray(const int array[], int size)
{
	cout << "List elements: ";

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

/*Goes through the array and finds which numbers are the
last largest and in what position on the array it is located. */

int lastLargestIndex(const int array[], int size)
{
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] >= array[index])
		{
			index = i;
		}
	}
	return index;
}

/*Goes through the array and find which numbers are the
first smallest and in what position on the array it is located. */
int firstSmallestIndex(const int array[], int size)
{
	int index = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < array[index])
		{
			index = i;
		}
	}
	return index;
}
