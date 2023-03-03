// Q49. Make a function that will take a number and return the highest digit in the number.

#include <iostream>
using namespace std;

int findHighestDigit(int num)
{
    int highest = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit > highest)
        {
            highest = digit;
        }
        num /= 10;
    }
    return highest;
}

int main()
{
    int num = 12345;
    cout << "The highest digit in " << num << " is " << findHighestDigit(num) << endl;
    return 0;
}
