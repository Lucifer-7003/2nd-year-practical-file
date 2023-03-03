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
    for (int i = rows; i >= 1; i--) // loop to iterate rows in descending order
    {
        for (int j = 1; j <= i; j++) // loop to print "" in each row
        {
            cout << " ";
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

    system("clear"); // clear screen for Linux/Mac OS

    inverterHalfPyramid(rows); // call function to print pattern
    return 0;
}