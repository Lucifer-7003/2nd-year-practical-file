// Q40. Write a program to print the sum and average of all numbers, the smallest and largest element of an array.

#include <iostream>
using namespace std;

int arrayAnalysis(int *arr, int option, int len)
{
    int result;

    // Switch statement to perform different operations on the array based on the option passed
    switch (option)
    {
    // If option is 1, find the smallest element in the array
    case 1:
    {
        int small;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                small = arr[i];
            }
            if (arr[i] < small)
            {
                small = arr[i];
            }
        }
        return small;
        break;
    }

    // If option is 2, find the largest element in the array
    case 2:
    {
        int large;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                large = arr[i];
            }
            if (arr[i] > large)
            {
                large = arr[i];
            }
        }
        return large;
        break;
    }

    // If option is 3, find the sum of all elements in the array
    case 3:
    {
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += arr[i];
        }
        return sum;
        break;
    }
    // If option is not 1, 2 or 3, find the average of all elements in the array
    default:
    {
        int sum = 0, avg;
        for (int i = 0; i < len; i++)
        {
            sum += arr[i];
        }
        avg = sum / len;
        return avg;
        break;
    }
    }
}

int main()
{
    int arr[10], largest, smallest, sum, avg;

    // Determine the length of the array
    size_t len = sizeof(arr) / sizeof(int);

    // Get input from user to populate the array
    cout << "Enter 10 no. : ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    cout << endl;

    // Call the arrayAnalysis function with different options to get different results
    smallest = arrayAnalysis(arr, 1, len);
    largest = arrayAnalysis(arr, 2, len);
    sum = arrayAnalysis(arr, 3, len);
    avg = arrayAnalysis(arr, 0, len);

    // Print the results to the console
    cout << "Largest in the array : " << largest << endl;
    cout << "Smallest in the array : " << smallest << endl;
    cout << "Sum of the elements in the array : " << sum << endl;
    cout << "Average of the elements in array : " << avg << endl;

    return 0;
}
