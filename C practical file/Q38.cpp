// Q38. Take 10 integer inputs from the user and store them in an array. Now, copy all the elements in another array but in reverse order.

#include <iostream>
using namespace std;

// Reverse the main array and store the result in the reverse array
void reverse(int *main_arr, int *reverse_arr, int len)
{
    int x = 0;
    // Loop through the main array in reverse order
    for (int i = len - 1; i >= 0; i--)
    {
        // Store the current element in the reverse array
        reverse_arr[x] = main_arr[i];
        ++x;
    }
}

int main()
{
    // Declare the main and reverse arrays
    int arr[10], rev_arr[10];
    // Get the length of the array
    size_t len = sizeof(arr) / sizeof(int);
    // Prompt the user to enter 10 numbers
    cout << "Enter 10 numbers: ";
    // Loop through the array and store the user input
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    // Clear the console screen
    system("clear");
    // Reverse the main array and store the result in the reverse array
    reverse(arr, rev_arr, len);
    // Print the reverse array
    cout << "Reverse of your array: ";
    for (int i = 0; i < len; i++)
    {
        cout << rev_arr[i];
        // Add a comma and space after each element except for the last one
        if (i != len - 1)
        {
            cout << ", ";
        }
    }
    return 0;
}
