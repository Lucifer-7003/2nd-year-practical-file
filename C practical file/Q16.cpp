// Q16. WAP to print even or odd no. from 1 to 100 using do while loop.

#include <iostream>
using namespace std;

bool oddEven(int number)
{
    bool result = false;
    if (number % 2 == 0)
    {
        result = true;
    }
    return result;
}

int main()
{
    int i = 1;
    do
    {
        if (oddEven(i))
            cout << i << " is an EVEN number" << endl;

        else
            cout << i << " is an ODD number" << endl;
        i++;
    } while (i <= 100);

    return 0;
}