// Q6. WAP to use all Logical operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int num1, num2, result;

    // Get input from user
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    // Clear screen
    system("clear");

    // Display the entered numbers
    cout << "Entered numbers are: " << num1 << " " << num2 << endl;

    // Logical operators
    cout << "Logical operators:" << endl;

    // AND operator
    result = (num1 > 5) && (num2 < 5);
    cout << "(" << num1 << " > 5) && (" << num2 << " < 5) : " << result << endl;

    // OR operator
    result = (num1 > 5) || (num2 < 5);
    cout << "(" << num1 << " > 5) || (" << num2 << " < 5) : " << result << endl;

    // NOT operator
    result = !(num1 > 5);
    cout << "!(" << num1 << " > 5) : " << result << endl;

    result = !(num2 < 5);
    cout << "!(" << num2 << " < 5) : " << result << endl;

    // Display note
    cout << "\n\n**Note : Here '0' = false, '1' = true **" << endl;

    return 0;
}
