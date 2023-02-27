// Q20.WAP to print Hollow Rectangle pattern using for loop.
//      * * * * * * *
//      *           *
//      *           *
//      * * * * * * *

#include <iostream>
using namespace std;

void hollowRectangle(int width, int length)
{
    for (int i = 1; i <= width; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i == 1 || i == width || j == 1 || j == length)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int width, length;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    // system("CLS");
    // system("cls");
    system("clear");

    cout << "Length : " << length << ", Width : " << width << endl;
    hollowRectangle(width, length);

    return 0;
}
