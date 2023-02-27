// Q23.WAP to print Hollow full pyramid pattern using for loop.
// 		 1
// 		1 2
// 	   1   3
// 	  1     4
// 	 1 2 3 4 5
#include <iostream>
using namespace std;

// void pyramid(int rows)
// {
//     for (int i = 1, k = 0; i <= rows; i++, k = 0)
//     {
//         for (int space = 1; space <= (rows - i); space++)
//         {
//             cout << " ";
//         }
//         while (k != (2 * i - 1))
//         {
//             if (k == 0 || k == (2 * i - 2))
//             {
//                 cout << "1";
//             }
//             else
//             {
//                 cout << " ";
//             }
//             k++;
//         }
//         cout << endl;
//     }
// }

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2 || i == 4 && j > 1 && j < 4)
            {
                cout << "  ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}