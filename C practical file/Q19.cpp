// Q19. WAP to print Reverse your 1st year Roll No.

#include <iostream>
using namespace std;

// function to reverse a given number
int reverse(int number)
{
    int rev = 0, num = number;
    while (num != 0)
    {
        int temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }

    return rev;
}

int main()
{
    int roll_no;
    cout << "Enter your Roll no. : ";
    cin >> roll_no;

    // calling the reverse function to get the reverse of the entered roll number
    cout << "Reverse of your Roll no. : " << reverse(roll_no) << endl;

    return 0;
}