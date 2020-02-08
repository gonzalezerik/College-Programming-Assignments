/* Erik Gonzalez
CO SCI 575
FavoriteCourse.cpp
asks the user to enter his/her name, favorite course, and the number of credit hours he/she is taking.
*/
#include <iostream>
#include <string>
using namespace std;

void Header();
string AskName();
int HowManyHours(string name, string course);
void Write(string name, string course, int hours);
string AskFavCourse(string);

int main()
{
	string name;
	string inputCourse;
	string again;
	int inputHours;

	Header();
	name = AskName();
	inputCourse = AskFavCourse(name);
	inputHours = HowManyHours(name, inputCourse);
	Write(name, inputCourse, inputHours);

	cout << "\nTry again? Y/N - ";
	cin >> again;

	//Proccessing 
	while (again == "Y" || again == "y")
	{
		cout << "\n";
		inputCourse = AskFavCourse(name);
		inputHours = HowManyHours(name, inputCourse);
		Write(name, inputCourse, inputHours);

		cout << "\nTry again? Y/N - ";
		cin >> again;
	}
	if (again == "N" || again == "n")
	{
		cout << "Thank you.\n";
		system("pause");
		return 0;
	}



}
//Ouput
void Header()
{
	cout << "Favorite Course in Spring 19" << endl;
	cout << "-------------------------------------" << endl;
}
//input
string AskName()
{
	string name;
	cout << "What is your name? ";
	cin >> name;
	return name;
}
//output and input
string AskFavCourse(string name)
{
	string course;
	cout << name << ", please enter your favorite course here at school: ";
	cin >> course;
	return course;
}
//input and output
int HowManyHours(string name, string course)
{
	int hours;
	cout << name << ", please enter how many credits hours of " << course << " you are taking: ";
	cin >> hours;
	return hours;
}
//output
void Write(string name, string course, int hours)
{
	if (hours == 3)
		cout << "\nHi " << name << ", your gavorite course is " << course << " and it is a 3 hour course.";
	if (hours == 5)
		cout << "\nHi " << name << ", your gavorite course is " << course << " and it is a 5 hour course.";
}

