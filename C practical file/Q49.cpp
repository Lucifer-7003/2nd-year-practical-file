// Q49. Make a function that will take a number and return the highest digit in the number.

#include <iostream>
using namespace std;

// function to find the highest digit in a given integer
int findHighestDigit(int num)
{
    int highest = 0;
    // loop until all digits of the number have been processed
    while (num > 0)
    {
        // get the rightmost digit of the number
        int digit = num % 10;
        // check if the current digit is greater than the highest digit found so far
        if (digit > highest)
        {
            // if yes, update the highest digit
            highest = digit;
        }
        // remove the rightmost digit from the number
        num /= 10;
    }
    // return the highest digit
    return highest;
}

int main()
{
    int num;
    cout << "Enter number : ";
    // get input from the user
    cin >> num;
    // call the function to find the highest digit and print the result
    cout << "The highest digit in " << num << " is " << findHighestDigit(num) << endl;
    return 0;
}
