// Q26. Write a program to print the sum of two numbers entered by the user by defining its own function.

#include <iostream>
using namespace std;

// function to add two integers
int add(int a, int b)
{
	return a + b;
}

int main()
{
	// declare variables to store user input
	int a, b;

	// prompt user to enter two numbers
	cout << "Enter 2 numbers: ";

	// read in two numbers from user
	cin >> a >> b;

	// calculate the sum of the two numbers using the add function
	int sum = add(a, b);

	// output the result to the console
	cout << "Addition: " << sum << endl;

	// indicate that the program has finished running
	return 0;
}
