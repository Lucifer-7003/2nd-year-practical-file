// Q17. WAP to print no. is palindrome or not using for loop.

#include <iostream>
using namespace std;

bool isPalindrome(int number)
{
    int pal_no = 0, num = number;
    bool result = false;
    while (num != 0)
    {
        int temp = num % 10;
        pal_no = pal_no * 10 + temp;
        num /= 10;
    }
    if (pal_no == number)
        result = true;

    return result;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (isPalindrome(num))
        cout << num << " is a Palindrome no." << endl;
    else
        cout << num << " is NOT a Palindrome no." << endl;

    return 0;
}