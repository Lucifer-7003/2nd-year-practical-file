// Q36. Take 10 integer inputs from the user and store them in an array. Again ask the user to give a number. Now, tell the user whether that number is present in the array or not.

#include <iostream>
using namespace std;

// A function to check if an input value is present in the given array
bool isPresent(int arr[], int input, size_t len)
{
    bool result = false;

    // Iterate through the array to find if input value exists
    for (int i = 0; i < len; i++)
    {
        // Check if current element in array is equal to input value
        if (arr[i] == input)
        {
            result = true;
            break; // Once input value is found, exit loop
        }
    }
    return result;
}

int main()
{
    int arr[10], input;
    size_t len = sizeof(arr) / sizeof(int);

    // Prompt user to enter 10 values for array
    cout << "Enter 10 digits : ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    // Prompt user to enter value to search for in array
    cout << "Enter what you want to find : ";
    cin >> input;

    // Call isPresent function to check if input value is present in array
    if (isPresent(arr, input, len))
        cout << input << " is present in the array" << endl;
    else
        cout << input << " is NOT present in the array" << endl;

    return 0;
}
