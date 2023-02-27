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

void halfDiamond(int rows)
{
    for (int i = 1; i <= (rows / 2) + 1; i++)
    {
        int x = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                cout << x++ << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    for (int i = rows / 2; i >= 1; i--)
    {
        int x = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                cout << x++ << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter rows : ";
    cin >> rows;
    halfDiamond(rows);
    return 0;
}