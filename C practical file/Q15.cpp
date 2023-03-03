// Q15. WAP to find out whether no. is Armstrong or not using do while loop.

#include <iostream>
using namespace std;

// Function to check if a number is Armstrong or not
bool isArmstrong(int number)
{
    // Initialize variables
    int sum = 0, temp = number;

    // Calculate the sum of the cubes of each digit
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Get user input
    int num;
    cout << "Enter a number : ";
    cin >> num;

    // Check if the number is Armstrong
    if (isArmstrong(num))
    {
        cout << num << " is an Armstrong number" << endl;
    }
    else
    {
        cout << num << " is NOT an Armstrong number" << endl;
    }

    return 0;
}
