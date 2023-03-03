// Q13. WAP to find out whether no. is prime or not using while loop.

#include <iostream>
using namespace std;

// function to check if a number is prime
bool isPrime(int number)
{
    int i = 2;
    bool result = true;

    // special cases for 1 and negative numbers
    if (number == 1 || number <= 0)
        result = false;

    // iterate through all possible factors
    else
        while (i <= (number / 2))
        {
            if (number % i == 0) // check if factor
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

    // check if the number is prime and print the result
    if (isPrime(num))
        cout << num << " is a Prime no." << endl;
    else
        cout << num << " is NOT a Prime no." << endl;

    return 0;
}
