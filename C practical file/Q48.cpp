// Q48. Create a function to swap the values of two integers using call by reference.

#include <iostream>  // include the iostream library for input/output operations
using namespace std; // use the standard namespace to avoid having to prefix standard library functions with "std::"

void swap(int &x, int &y) // define a function called "swap" that takes two integer parameters by reference
{
    int temp = x; // create a temporary variable and assign it the value of x
    x = y;        // assign the value of y to x
    y = temp;     // assign the value of the temporary variable to y
}

int main() // define the main function
{
    int a = 5;  // declare and initialize a variable called "a" with the value 5
    int b = 10; // declare and initialize a variable called "b" with the value 10

    cout << "Before swap: a : " << a << ", b : " << b << endl; // print out the current values of "a" and "b"
    swap(a, b);                                                // call the "swap" function, passing in the variables "a" and "b"
    cout << "After swap: a : " << a << ", b : " << b << endl;  // print out the new values of "a" and "b"

    return 0; // return 0 to indicate successful program execution
}
