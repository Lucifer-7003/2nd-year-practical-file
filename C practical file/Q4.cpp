// Q4. WAP to use all assignment operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    // Clear the console
    system("clear");

    // Print the entered numbers
    cout << "Entered numbers: " << num1 << " " << num2 << endl;

    // Perform different operations using assignment operators
    cout << "Assignment operators:" << endl;

    num1 += num2; // num1 = num1 + num2
    cout << num1 << " += " << num2 << " : " << num1 << endl;

    num1 -= num2; // num1 = num1 - num2
    cout << num1 << " -= " << num2 << " : " << num1 << endl;

    num1 *= num2; // num1 = num1 * num2
    cout << num1 << " *= " << num2 << " : " << num1 << endl;

    if (num2 != 0)
    {
        num1 /= num2; // num1 = num1 / num2
        cout << num1 << " /= " << num2 << " : " << num1 << endl;

        num1 %= num2; // num1 = num1 % num2
        cout << num1 << " %= " << num2 << " : " << num1 << endl;
    }
    else
    {
        cout << "Division by zero error!" << endl;
    }

    return 0;
}
