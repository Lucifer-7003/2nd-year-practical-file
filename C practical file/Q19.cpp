// Q19. WAP to print Reverse your 1st year Roll No.

#include <iostream>
using namespace std;

int reverse(int number)
{
    int rev, num = number;
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
    cout << "Reverse of your Roll no. : " << reverse(roll_no) << endl;
    return 0;
}