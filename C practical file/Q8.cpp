// Q8. WAP to use Ternury operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter a number : ";
    cin >> num1;

    // Clear the console screen
    system("clear");

    // Display the entered number
    cout << "Entered number is : " << num1 << endl;

    // Check if the number is even or odd using the conditional (ternary) operator
    cout << "Conditional (ternary) operator:\n"
         << endl;
    (num1 % 2 == 0) ? cout << num1 << " is even" << endl : cout << num1 << " is odd" << endl;

    return 0;
}
