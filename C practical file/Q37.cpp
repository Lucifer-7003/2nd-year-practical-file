// Q37. Take 20 integer inputs from the user and print the following:
//    number of positive numbers,
//    number of negative numbers,
//    number of odd numbers,
//    number of even numbers,
//    number of 0.

#include <iostream>
using namespace std;

int main()
{
    int pov = 0, neg = 0, odd = 0, even = 0, zeros = 0; // Initialize all counters to 0
    cout << "Enter 20 numbers: ";
    for (int i = 0; i < 20; i++)
    {
        int a;
        cin >> a;
        if (a > 0) // Check if the number is positive
        {
            // Increment the positive counter
            ++pov;
            // Increment either the even or odd counter based on the remainder of the number divided by 2
            (a % 2 == 0) ? ++even : ++odd;
        }
        else if (a < 0) // Check if the number is negative
        {
            // Increment the negative counter
            ++neg;
            // Increment either the even or odd counter based on the remainder of the number divided by 2
            (a % 2 == 0) ? ++even : ++odd;
        }
        else // If the number is 0
        {
            ++zeros; // Increment the zero counter
        }
    }
    // Print the results
    cout << "There are :" << endl;
    cout << "\t" << pov << "  Positive numbers," << endl;
    cout << "\t" << neg << "  Negative numbers," << endl;
    cout << "\t" << odd << "  Odd numbers," << endl;
    cout << "\t" << even << "  Even numbers," << endl;
    cout << "\t" << zeros << "  Zeros" << endl;
    return 0;
}
