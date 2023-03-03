// Q1. WAP to print your name in C++.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int MAX_NAME_LENGTH = 69; // Maximum length of name
	char name[MAX_NAME_LENGTH + 1]; // Add 1 for null character

	cout << "Enter your name: ";
	cin.getline(name, MAX_NAME_LENGTH + 1); // Read input line with spaces

	system("clear"); // Clear console screen

	cout << "Your name is: " << name << endl;

	return 0;
}
