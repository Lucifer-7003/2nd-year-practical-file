// Q2.WAP to add two no.without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result; // declaration of variables

    cout << "Enter two numbers: "; // prompt for user input
    cin >> num1 >> num2;           // reading two numbers from user

    // displaying the entered numbers
    cout << "Entered numbers: " << num1 << " " << num2 << endl;

    // performing addition
    result = num1 + num2;
    // displaying the addition result
    cout << "Addition of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0; // end of program
}
