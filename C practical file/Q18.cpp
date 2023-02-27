// Q18. WAP to Print Fabonacii Series from 1 to 10.
#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 1;
    cout << "Fabonacii Series form 1 to 10: " << x << ", " << y << ", ";
    while (y < 8)
    {
        int xy = x + y;
        cout << xy << ", ";
        x = y;
        y = xy;
    }
    cout << '\n';

    return 0;
}