// Q15. WAP to find out whether no. is Armstrong or not using do while loop.
#include <iostream>
using namespace std;

bool isArmstrong(int number)
{
    float result = false;
    int num = number;
    while (num != 0)
    {
        int temp = num % 10;
        result += (temp * temp * temp);
        num /= 10;
    }
    if (result == number)
    {
        result = true;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (isArmstrong(num))
        cout << num << " is an Armstring no." << endl;

    else
        cout << num << " is NOT an Armstrong no." << endl;

    return 0;
}