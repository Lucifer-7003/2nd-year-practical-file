// Q4. WAP to use all assignment operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 2 number : ";
    cin >> num1 >> num2;

    // system("CLS");
    // system("cls");
    system("clear");

    cout << "Entered number are: " << num1 << " " << num2 << endl;
    cout << "Assignment operator:" << endl;

    num1 += num2;
    cout << num1 << " += " << num2 << " : " << num1 << endl;

    num1 -= num2;
    cout << num1 << " -= " << num2 << " : " << num1 << endl;

    num1 *= num2;
    cout << num1 << " *= " << num2 << " : " << num1 << endl;

    num1 /= num2;
    cout << num1 << " /= " << num2 << " : " << num1 << endl;

    num1 %= num2;
    cout << num1 << " %= " << num2 << " : " << num1 << endl;

    return 0;
}