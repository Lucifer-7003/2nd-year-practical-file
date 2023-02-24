// Q3. WAP to use all arithmetic operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    cout << "Enter 2 number : ";
    cin >> num1 >> num2;
    // system("CLS");
    // system("cls");
    system("clear");

    cout << "Entered number are: " << num1 << " " << num2 << endl;
    cout << "Arithmetic operator:" << endl;

    result = num1 + num2;
    cout << "Addition : " << result << endl;

    result = num1 - num2;
    cout << "Subtraction : " << result << endl;

    result = num1 * num2;
    cout << "Multiplication : " << result << endl;

    result = num1 / num2;
    cout << "Division : " << result << endl;

    result = num1 % num2;
    cout << "Modulas : " << result << endl;
    return 0;
}