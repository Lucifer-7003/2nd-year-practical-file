// Q10. WAP to Compare 3 no. by using a control statement without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, result;
    cout << "Enter 3 number : ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3)
        cout << "All number are equal" << endl;

    else if (num1 > num2 && num1 > num3)
        cout << num1 << " is Greatest" << endl;

    else if (num2 > num3)
        cout << num2 << " is Greatest" << endl;

    else
        cout << num3 << " is Greatest" << endl;

    return 0;
}