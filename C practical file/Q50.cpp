// Q50. Input 9 numbers in a matrix of three rows and three cols and find the sum of each row and each column individually.

#include <iostream>
using namespace std;

int main()
{
    int mat[3][3], rowSum[3] = {0}, colSum[3] = {0};

    // Input matrix elements
    cout << "Enter 9 numbers for the matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Calculate row and column sums
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
    }

    // Display results
    cout << "Row sums: ";
    for (int i = 0; i < 3; i++)
    {
        cout << rowSum[i] << " ";
    }
    cout << endl;

    cout << "Column sums: ";
    for (int j = 0; j < 3; j++)
    {
        cout << colSum[j] << " ";
    }
    cout << endl;

    return 0;
}
