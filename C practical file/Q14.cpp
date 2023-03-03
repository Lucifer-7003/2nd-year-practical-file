// Q14. WAP to print prime no. in between 1 to 100 using do while loop.

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number)
{
    int flag = 0;
    bool result = true;

    // Check if number is 1 or negative
    if (number == 1 || number <= 0)
    {
        result = false;
    }
    else
    {
        // Loop through numbers 2 to half of number
        for (int i = 2; i <= (number / 2); i++)
        {
            // If number is divisible by i, it is not prime
            if (number % i == 0)
            {
                result = false;
                break;
            }
        }
    }

    return result;
}

int main()
{
    int no = 1;

    // Loop through numbers 1 to 100
    do
    {
        if (isPrime(no))
        {
            cout << no << " is a Prime no." << endl;
        }
        no++;
    } while (no <= 100);

    return 0;
}
