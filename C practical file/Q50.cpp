// Q50. Input 9 numbers in a matrix of three rows and three cols and find the sum of each row and each column individually.

#include <iostream>
using namespace std;

int main()
{
    // Declare a 3x3 matrix and two arrays for row and column sums
    int mat[3][3], rowSum[3] = {0}, colSum[3] = {0};

    // Input matrix elements
    cout << "Enter 9 numbers for the matrix: ";
    for (int i = 0; i < 3; i++) // iterate through rows
    {
        for (int j = 0; j < 3; j++) // iterate through columns
        {
            cin >> mat[i][j]; // read in matrix elements
        }
    }

    // Calculate row and column sums
    for (int i = 0; i < 3; i++) // iterate through rows
    {
        for (int j = 0; j < 3; j++) // iterate through columns
        {
            rowSum[i] += mat[i][j]; // add up elements in current row
            colSum[j] += mat[i][j]; // add up elements in current column
        }
    }

    // Display results
    cout << "Row sums: ";
    for (int i = 0; i < 3; i++) // iterate through rows
    {
        cout << rowSum[i] << " "; // print out the row sum
    }
    cout << endl; // go to next line

    cout << "Column sums: ";
    for (int j = 0; j < 3; j++) // iterate through columns
    {
        cout << colSum[j] << " "; // print out the column sum
    }
    cout << endl; // go to next line

    return 0;
}
