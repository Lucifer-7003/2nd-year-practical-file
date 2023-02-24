// Q6. WAP to use all Logical operators without using class in C++.

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
    cout << "Logical operator:" << endl;

    result = (num1 > 5) && (num2 < 5); // And
    cout << "(" << num1 << " > 5) && (" << num2 << " < 5) : " << result << endl;

    result = (num1 > 5) || (num2 < 5); // OR
    cout << "(" << num1 << " > 5) || (" << num2 << " < 5) : " << result << endl;

    result = !(num1 > 5);
    cout << "!(" << num1 << " > 5) : " << result << endl;

    result = !(num2 < 5);
    cout << "!(" << num2 << " < 5) : " << result << endl;

    cout << "\n\n**Note : Here '0' = false, '1' = true **" << endl;

    return 0;
}