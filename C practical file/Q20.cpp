// Q20.WAP to print Hollow Rectangle pattern using for loop.
//      * * * * * * *
//      *           *
//      *           *
//      * * * * * * *

#include <iostream>
using namespace std;

// function to print a hollow rectangle with given width and length
void hollowRectangle(int width, int length)
{
    for (int i = 1; i <= width; i++) // loop for each row
    {
        for (int j = 1; j <= length; j++) // loop for each column
        {
            // check if current element is on the border
            if (i == 1 || i == width || j == 1 || j == length)
            {
                cout << "* "; // print asterisk
            }
            else
            {
                cout << "  "; // print space
            }
        }
        cout << endl; // move to next line
    }
}

int main()
{
    int width, length;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    cout << endl;

    cout << "Length : " << length << ", Width : " << width << endl;
    hollowRectangle(width, length); // call the function to print rectangle

    return 0;
}