// Q26. Write a program to print the sum of two numbers entered by the user by defining its own function.

#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	cout << "Enter 2 number : ";
	cin >> a >> b;
	cout << "Addition : " << add(a, b) << endl;
	return 0;
}