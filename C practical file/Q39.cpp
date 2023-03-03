// Q39. Find the Second largest and second smallest elements of an array.

#include <iostream>
using namespace std;

int arrayAnalysis(int *arr, int option, int len)
{
    int result;
    switch (option)
    {
    case 1:
        int secd_small, small;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                small = arr[i];
                secd_small = small;
            }
            if (arr[i] < small)
            {
                secd_small = small;
                small = arr[i];
            }
        }
        return secd_small;
        break;

    default:
        int secd_large, large;
        for (int i = 0; i < len; i++)
        {
            if (i == 0)
            {
                large = arr[i];
                secd_large = large;
            }
            if (arr[i] > large)
            {
                secd_large = large;
                large = arr[i];
            }
        }
        return secd_large;
        break;
    }
}

int main()
{
    int arr[10], secd_small, secd_large;
    size_t len = sizeof(arr) / sizeof(int);
    cout << "Enter 10 no. : ";
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    cout << endl;
    secd_small = arrayAnalysis(arr, 1, len);
    secd_large = arrayAnalysis(arr, 0, len);
    cout << "Second Smallest in the array : " << secd_small << endl;
    cout << "Second Largest in the array : " << secd_large << endl;
    return 0;
}