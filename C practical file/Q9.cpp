// Q9. WAP to compare 2 no. by using a control statement without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    // declare variables for input
    int num1, num2;

    // prompt user to enter two numbers and store them in variables
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // clear the console for better visibility
    system("clear");

    // display the entered numbers
    cout << "Entered numbers are: " << num1 << ", " << num2 << endl;

    // check which number is greater or if they are equal
    if (num1 == num2)
        cout << "Both numbers are the same." << endl;
    else if (num1 > num2)
        cout << num1 << " is greater than " << num2 << endl;
    else
        cout << num2 << " is greater than " << num1 << endl;

    return 0;
}