// Q8. WAP to use Ternury operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter a number : ";
    cin >> num1;
    // system("CLS");
    // system("cls");
    system("clear");

    cout << "Entered number is : " << num1 << endl;
    cout << "Conditional (ternary) operator:\n"
         << endl;

    (num1 % 2 == 0) ? cout << num1 << " is even" << endl : cout << num1 << " is odd" << endl;

    return 0;
}