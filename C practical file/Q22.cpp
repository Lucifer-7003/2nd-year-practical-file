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
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (rows - i + 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter no of rows : ";
    cin >> rows;
    // system("CLS");
    // system("cls");
    system("clear");
    pyramid(rows);
    return 0;
}