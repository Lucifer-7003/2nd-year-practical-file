// Q9. WAP to compare 2 no. by using a control statement without using class in C++.

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

    cout << "Entered number are : " << num1 << ", " << num2 << endl;

    if (num1 == num2)
        cout << "Both number are same" << endl;

    else if (num1 > num2)
        cout << num1 << " is Greater then " << num2 << endl;

    else
        cout << num2 << " is Greater then " << num1 << endl;

    return 0;
}