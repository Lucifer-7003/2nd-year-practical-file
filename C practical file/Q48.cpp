// Q48. Create a function to swap the values of two integers using call by reference.

// include the iostream library for input/output operations
#include <iostream>
// use the standard namespace to avoid having to prefix standard library functions with "std::"
using namespace std;

// define a function called "swap" that takes two integer parameters by reference
void swap(int &x, int &y)
{
    // create a temporary variable and assign it the value of x
    int temp = x;
    // assign the value of y to x
    x = y;
    // assign the value of the temporary variable to y
    y = temp;
}

// define the main function
int main()
{
    // declare and initialize a variable called "a" with the value 5
    int a = 5;
    // declare and initialize a variable called "b" with the value 10
    int b = 10;

    // print out the current values of "a" and "b"
    cout << "Before swap: a : " << a << ", b : " << b << endl;
    // call the "swap" function, passing in the variables "a" and "b"
    swap(a, b);
    // print out the new values of "a" and "b"
    cout << "After swap: a : " << a << ", b : " << b << endl;

    // return 0 to indicate successful program execution
    return 0;
}
