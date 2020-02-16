//Erik Gonzalez
//CO SCI 676
//APRectangle.cpp
//This programm calculates the area and perimeter with a length of 12 and widith of 7.

#include <iostream>
using namespace std;

int main()
{
	int l = 12;
	int w = 7;
	int a;
	int p;

	a = 1 * w;
	p = 2 * (l + w);

	cout << "A rectangle has a length " << 12 << " and a width " << w << "." << endl;
	cout << "The area of the rectangle is " << a << endl;
	cout << "The perimeter of the rectangle is " << p << endl;
	system("Pause");
	return 0;
}