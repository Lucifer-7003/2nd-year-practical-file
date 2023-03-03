// Q38. Take 10 integer inputs from the user and store them in an array. Now, copy all the elements in another array but in reverse order.
#include <iostream>
using namespace std;

void reverse(int *main_arr, int *reverse_arr, int len)
{
    int x = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        reverse_arr[x] = main_arr[i];
        ++x;
    }
}

int main()
{
    int arr[10], rev_arr[10];
    size_t len = sizeof(arr) / sizeof(int);
    cout << "Enter 10 no. : ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    // system("CLS");
    // system("cls");
    system("clear");
    reverse(arr, rev_arr, len);
    cout << "\nReverse of your array : ";
    for (int i = 0; i < len; i++)
    {
        cout << rev_arr[i] << ", ";
    }
    return 0;
}