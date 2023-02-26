// Q13. WAP to find out whether no. is prime or not using while loop.

#include <iostream>
using namespace std;

bool isPrime(int number)
{
    int i = 2;
    bool result = true;
    if (number == 1 || number <= 0)
        result = false;

    else

        while (i <= (number / 2))
        {
            if (number % i == 0)
                result = false;
            i++;
        }

    return result;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a Prime no." << endl;

    else
        cout << num << " is NOT a Prime no." << endl;

    return 0;
}