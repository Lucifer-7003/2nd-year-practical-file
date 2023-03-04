// Q49. Make a function that will take a number and return the highest digit in the number.

#include <iostream>
using namespace std;

// function to find the highest digit in a given integer
int findHighestDigit(int num)
{
    int highest = 0;
    while (num > 0) // loop until all digits of the number have been processed
    {
        int digit = num % 10; // get the rightmost digit of the number
        if (digit > highest)  // check if the current digit is greater than the highest digit found so far
        {
            highest = digit; // if yes, update the highest digit
        }
        num /= 10; // remove the rightmost digit from the number
    }
    return highest; // return the highest digit
}

int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;                                                                        // get input from the user
    cout << "The highest digit in " << num << " is " << findHighestDigit(num) << endl; // call the function to find the highest digit and print the result
    return 0;
}
