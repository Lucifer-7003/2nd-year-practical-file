// Q27. Define a function that returns the Multiplication of two numbers entered by the user.

#include <iostream>
using namespace std;

int multiplication(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter 2 number : ";
    cin >> a >> b;
    cout << "Multiplication : " << multiplication(a, b) << endl;
    return 0;
}