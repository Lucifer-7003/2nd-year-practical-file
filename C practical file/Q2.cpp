// Q2.WAP to add two no.without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result; // declaration of variables

    cout << "Enter two numbers: "; // prompt for user input
    cin >> num1 >> num2;           // reading two numbers from user

    system("clear"); // clearing the console screen

    cout << "Entered numbers: " << num1 << " " << num2 << endl; // displaying the entered numbers

    result = num1 + num2;                                                           // performing addition
    cout << "Addition of " << num1 << " and " << num2 << " is: " << result << endl; // displaying the addition result

    return 0; // end of program
}
