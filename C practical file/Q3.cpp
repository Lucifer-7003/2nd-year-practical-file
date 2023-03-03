// Q3. WAP to use all arithmetic operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    // Declare variables to hold user input, calculation results
    int num1, num2, result;

    // Prompt user for input and read in values
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    // Clear the console screen for better output visibility
    system("clear");

    // Display the entered numbers
    cout << "Entered numbers are: " << num1 << " " << num2 << endl;

    // Perform arithmetic operations and display results
    result = num1 + num2;
    cout << "Addition: " << result << endl;

    result = num1 - num2;
    cout << "Subtraction: " << result << endl;

    result = num1 * num2;
    cout << "Multiplication: " << result << endl;

    if (num2 != 0)
    {
        result = num1 / num2;
        cout << "Division: " << result << endl;
        result = num1 % num2;
        cout << "Modulus: " << result << endl;
    }
    else
    {
        cout << "Cannot divide by zero" << endl;
    }

    return 0;
}
