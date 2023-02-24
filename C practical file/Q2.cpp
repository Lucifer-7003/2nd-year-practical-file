// Q2.WAP to add two no.without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    cout << "Enter 2 number: ";
    cin >> num1 >> num2;
    // system("CLS");
    // system("cls");
    system("clear");
    cout << "Entered number are: " << num1 << " " << num2 << endl;

    result = num1 + num2;
    cout << "\nAddition of " << num1 << " & " << num2 << " is : " << result << endl;
    return 0;
}