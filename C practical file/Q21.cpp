// Q21.WAP to print an Inverted half pyramid pattern using for loop.
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *

#include <iostream>
using namespace std;

void inverterHalfPyramid(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
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
    inverterHalfPyramid(rows);
    return 0;
}