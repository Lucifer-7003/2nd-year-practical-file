// Q25. WAP to add 2 no. by using class in c++.

#include <iostream>
using namespace std;

class Operator
{
public:
    int add(int a, int b); // Method for adding two numbers
};

int Operator::add(int a, int b)
{
    return a + b; // Addition operation
}

int main()
{
    Operator opr; // Create an instance of Operator class
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;                                  // Read two numbers from user
    cout << "Addition : " << opr.add(a, b) << endl; // Display the result of addition
    return 0;                                       // Indicate successful completion of program
}
