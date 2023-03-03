// Q40. Write a program to print the sum and average of all numbers, the smallest and largest element of an array.

#include <iostream>
using namespace std;

int arrayAnalysis(int *arr, int option, int len)
{
    int result;
    switch (option)
    {
    case 1:
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

    case 2:
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

    case 3:
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += arr[i];
        }
        return sum;

    default:
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

int main()
{
    int arr[10], largest, smallest, sum, avg;
    size_t len = sizeof(arr) / sizeof(int);
    cout << "Enter 10 no. : ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    cout << endl;
    largest = arrayAnalysis(arr, 1, len);
    smallest = arrayAnalysis(arr, 2, len);
    sum = arrayAnalysis(arr, 3, len);
    avg = arrayAnalysis(arr, 0, len);
    cout << "Largest in the array : " << largest << endl;
    cout << "smallest in the array : " << largest << endl;
    cout << "Sum of the elements in the array : " << largest << endl;
    cout << "Average of the elements in array : " << largest << endl;
    return 0;
}