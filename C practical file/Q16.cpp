// Q16. WAP to print even or odd no. from 1 to 100 using do while loop.

#include <iostream>
using namespace std;

// Function to check whether a number is odd or even
bool oddEven(int number)
{
    bool result = false;
    if (number % 2 == 0) // If the remainder is 0 after dividing by 2, it is even
    {
        result = true;
    }
    return result;
}

int main()
{
    int i = 1;
    do
    {
        if (oddEven(i)) // If the number is even, print this message
            cout << i << " is an EVEN number" << endl;

        else // If the number is odd, print this message
            cout
                << i << " is an ODD number\t";
        i++;            // Move on to the next number
    } while (i <= 100); // Continue until we reach 100

    return 0;
}