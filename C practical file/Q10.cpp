// Q10. WAP to Compare 3 no. by using a control statement without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, result;
    // Getting the three numbers as input from the user
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    // Checking if all numbers are equal
    if (num1 == num2 && num1 == num3)
        cout << "All numbers are equal" << endl;

    // If num1 is greater than both num2 and num3
    else if (num1 > num2 && num1 > num3)
        cout << num1 << " is the greatest number" << endl;

    // If num2 is greater than num3
    else if (num2 > num3)
        cout << num2 << " is the greatest number" << endl;

    // If none of the above conditions are true, then num3 is the greatest number
    else
        cout << num3 << " is the greatest number" << endl;

    return 0;
}