// Q21.WAP to print an Inverted half pyramid pattern using for loop.
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *

#include <iostream>
using namespace std;

// Function to print the inverted half pyramid pattern
void inverterHalfPyramid(int rows)
{
    // loop to iterate rows in descending order
    for (int i = rows; i >= 1; i--)
    {
        // loop to print "* " in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl; // move to next row
    }
}

// Main function
int main()
{
    int rows;
    cout << "Enter no of rows : ";
    cin >> rows; // get number of rows from user

    // call function to print pattern
    inverterHalfPyramid(rows);
    return 0;
}