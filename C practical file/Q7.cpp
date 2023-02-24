// Q7. WAP to use all Bitwise operators without using class in C++.

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

    cout << "Entered number are: " << num1 << ", " << num2 << endl;
    cout << "Bitwise operator:" << endl;

    result = num1 & num2; // Is Equals To
    cout << num1 << " & " << num2 << " : " << result << endl;

    result = num1 | num2; // Not Equals To
    cout << num1 << " | " << num2 << " : " << result << endl;

    result = num1 ^ num2; // Greater Than
    cout << num1 << " ^ " << num2 << " : " << result << endl;

    result = ~num1;
    cout << "~ " << num1 << " : " << result << endl;

    result = ~num2;
    cout << "~ " << num2 << " : " << result << endl;

    result = num1 << num2; // Greater Than or Equals To
    cout << num1 << " << " << num2 << " : " << result << endl;

    result = num1 >> num2; // Lesser Than or Equals To
    cout << num1 << " >> " << num2 << " : " << result << endl;

    cout << "\n\n**here '0' = false, '1' = true **" << endl;

    return 0;
}