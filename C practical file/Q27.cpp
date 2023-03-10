// Q27. Define a function that returns the Multiplication of two numbers entered by the user.

#include <iostream>  // include the iostream library for input and output
using namespace std; // use the standard namespace

// function that takes two integer inputs and returns their product
int multiplication(int a, int b)
{
    return a * b; // return the product of a and b
}

int main()
{
    // declare integer variables a and b
    int a, b;
    // ask the user to enter two numbers
    cout << "Enter 2 numbers: ";
    // read the input from the user and store it in a and b
    cin >> a >> b;
    // print the product of a and b
    cout << "Multiplication: " << multiplication(a, b) << endl;
    // exit the program with a success status
    return 0;
}
