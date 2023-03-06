// Q22.WAP to print an Inverted full pyramid pattern using for loop.
//		* * * * * *
//		 * * * * *
//		  * * * *
//		   * * *
//			* *
//			 *

#include <iostream>
using namespace std;

void pyramid(int rows)
{
    // Loop through each row of the pyramid
    for (int i = 1; i <= rows; i++)
    {
        // Print the appropriate number of spaces before each row of stars
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        // Print the stars for the current row
        for (int k = 1; k <= (rows - i + 1); k++)
        {
            cout << "* ";
        }

        // Move to the next line after printing the stars for the current row
        cout << endl;
    }
}

int main()
{
    int rows;

    // Ask the user to input the number of rows for the pyramid
    cout << "Enter no of rows : ";
    cin >> rows;

    // Call the function to print the pyramid
    pyramid(rows);

    // End the program
    return 0;
}
