// Q14. WAP to print prime no. in between 1 to 100 using do while loop.

#include <iostream>
using namespace std;

bool isPrime(int number)
{
    int flag = 0;
    bool result = true;
    if (number == 1 || number <= 0)
    {
        result = false;
    }
    else
    {
        int i = 2;
        do
        {
            if (number % i == 0 && number != 2)
            {
                result = false;
                break;
            }
            i++;
        } while (i <= (number / 2));
    }

    return result;
}

int main()
{
    int no = 1;
    do
    {
        if (isPrime(no))
        {
            cout << no << " is a Prime no." << endl;
        }
        no++;
    } while (no <= 100);

    return 0;
}