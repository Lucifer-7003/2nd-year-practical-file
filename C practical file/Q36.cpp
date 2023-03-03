// Q36. Take 10 integer inputs from the user and store them in an array. Again ask the user to give a number. Now, tell the user whether that number is present in the array or not.

#include <iostream>
using namespace std;

bool isPresent(int arr[], int input, size_t len)
{
    bool result = false;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] = input)
        {
            result = true;
        }
    }
    return result;
}

int main()
{
    int arr[10], input;
    size_t len = sizeof(arr) / sizeof(int);
    cout << "Enter 10 digits : ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    cout << "Enter what you want to find : ";
    cin >> input;
    if (isPresent(arr, input, len))
        cout << input << " is present in the array" << endl;
    else
        cout << input << " is NOT present in the array" << endl;
    return 0;
}