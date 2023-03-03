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
    int pov, neg, odd, even, zeros;
    cout << "Enter 20 no : ";
    for (int i = 0; i < 20; i++)
    {
        int a;
        cin >> a;
        if (a > 0)
        {
            ++pov;
            (a % 2 == 0) ? ++even : ++odd;
        }
        else if (a < 0)
        {
            ++neg;
            (a % 2 == 0) ? ++even : ++odd;
        }
        else
        {
            ++zeros;
        }
    }
    cout << "There are :" << endl;
    cout << "\t" << pov << "  Positive numbers," << endl;
    cout << "\t" << neg << "  Negative numbers," << endl;
    cout << "\t" << odd << "  Odd numbers," << endl;
    cout << "\t" << even << "  Even numbers," << endl;
    cout << "\t" << zeros << "  Zeros" << endl;
    return 0;
}