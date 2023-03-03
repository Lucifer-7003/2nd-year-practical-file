// Q24.WAP to print solid half Diamonds pattern using for loop.
//		*
//		* 1
//		* 1 *
//		* 1 * 2
//		* 1 *
//		* 1
//		*

#include <iostream>
using namespace std;

// Function to print half diamond pattern
void halfDiamond(int rows)
{
    // loop to print upper half diamond pattern
    for (int i = 1; i <= (rows / 2) + 1; i++)
    {
        int x = 1; // initialize x to 1 for each row
        for (int j = 1; j <= i; j++)
        {
            // print "*" for odd positions, and increment and print x for even positions
            if (j % 2 == 0)
                cout << x++ << " ";
            else
                cout << "* ";
        }
        cout << endl; // move to the next line after printing the current row
    }

    // loop to print lower half diamond pattern
    for (int i = rows / 2; i >= 1; i--)
    {
        int x = 1; // initialize x to 1 for each row
        for (int j = 1; j <= i; j++)
        {
            // print "*" for odd positions, and increment and print x for even positions
            if (j % 2 == 0)
                cout << x++ << " ";
            else
                cout << "* ";
        }
        cout << endl; // move to the next line after printing the current row
    }
}

int main()
{
    int rows;
    cout << "Enter rows : ";
    cin >> rows;
    halfDiamond(rows); // call the function to print the half diamond pattern
    return 0;
}
