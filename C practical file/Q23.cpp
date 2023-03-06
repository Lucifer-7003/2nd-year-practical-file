// Q23.WAP to print Hollow full pyramid pattern using for loop.
// 		 1
// 		1 2
// 	   1   3
// 	  1     4
// 	 1 2 3 4 5

#include <iostream>
using namespace std;

void pyramid(int rows)
{
    int x = 1;                     // initialize a counter variable to keep track of the numbers to be printed
    for (int i = 1; i < rows; i++) // loop through each row
    {
        for (int j = rows; j > i; j--) // print the spaces before the numbers in each row
        {
            cout << " ";
        }
        for (int j = 1; j < (2 * i); j++) // print the numbers in each row
        {
            if (j == 1 || j == i) // print the number at the start and end of the row
                cout << x << " ";
            else // print the spaces between the numbers
                cout << "  ";
            x++; // increment the counter variable
        }
        x = 1;        // reset the counter variable for the next row
        cout << endl; // move to the next line after printing each row
    }
    for (int j = 1; j <= rows; j++) // print the numbers at the bottom of the pyramid
    {
        cout << j << " ";
    }
    cout << endl;
}

int main()
{
    int rows;
    cout << "Enter no. of rows : ";
    cin >> rows;
    pyramid(rows); // call the pyramid function to print the pyramid
    return 0;
}
