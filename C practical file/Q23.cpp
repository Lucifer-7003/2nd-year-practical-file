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
    int x = 1;
    for (int i = 1; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j < (2 * i); j++)
        {
            if (j == 1 || j == i)
                cout << x << " ";
            else
                cout << "  ";
            x++;
        }
        x = 1;
        cout << endl;
    }
    for (int j = 1; j <= rows; j++)
    {
        cout << j << " ";
    }
}

int main()
{
    int rows;
    cout << "Enter no. of rows : ";
    cin >> rows;
    pyramid(rows);
    return 0;
}