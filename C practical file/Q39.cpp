// Q39. Find the Second largest and second smallest elements of an array.

#include <iostream>
using namespace std;

// Find the second smallest or second largest number in the array
// Option 1: Find second smallest
// Option 0: Find second largest
int arrayAnalysis(int *arr, int option, int len)
{
    int result;
    switch (option)
    {
    case 1:
        int second_smallest, smallest;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                smallest = arr[i];
                second_smallest = smallest;
            }
            if (arr[i] < smallest)
            {
                second_smallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] < second_smallest)
            {
                second_smallest = arr[i];
            }
        }
        return second_smallest;
        break;

    default:
        int second_largest, largest;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                largest = arr[i];
                second_largest = largest;
            }
            if (arr[i] > largest)
            {
                second_largest = largest;
                largest = arr[i];
            }
            else if (arr[i] > second_largest)
            {
                second_largest = arr[i];
            }
        }
        return second_largest;
        break;
    }
}

int main()
{
    const int ARRAY_SIZE = 10;
    int arr[ARRAY_SIZE];
    size_t len = sizeof(arr) / sizeof(int);
    cout << "Enter " << ARRAY_SIZE << " numbers: ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    cout << endl;

    // Find the second smallest and second largest numbers in the array
    int second_smallest = arrayAnalysis(arr, 1, len);
    int second_largest = arrayAnalysis(arr, 0, len);

    // Output the results
    cout << "Second smallest number in the array: " << second_smallest << endl;
    cout << "Second largest number in the array: " << second_largest << endl;

    return 0;
}