// Q18. WAP to Print Fabonacii Series from 1 to 10.

#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 1;                                                    // initialize variables for first two numbers in the series
    cout << "Fibonacci Series from 1 to 10: " << x << ", " << y << ", "; // print first two numbers
    while (y < 8)                                                        // loop to print the rest of the series until 10
    {
        int xy = x + y;     // add x and y to get next number in series
        cout << xy << ", "; // print next number
        x = y;              // set x to the previous y value
        y = xy;             // set y to the current number
    }
    cout << '\n'; // print a new line at the end of the series

    return 0;
}