// Q41. Write a program to compare two dates entered by the user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
#include <iostream>
using namespace std;

struct Date
{
    int year, month, day;
};

bool compare(Date date1, Date date2)
{
    bool result = false;
    if ((date1.year && date2.year) && (date1.month && date2.month) && (date1.day && date2.day))
        result = true;
    return result;
}

int main()
{
    Date d1, d2;
    cout << "Enter 1st date(in 'DD MM YYYY' formate) : ";
    cin >> d1.day >> d1.month >> d1.year;
    cout << endl;
    cout << "Enter 2nd date(in 'DD MM YYYY' formate) : ";
    cin >> d2.day >> d2.month >> d2.year;
    cout << endl;
    if (compare(d1, d2))
        cout << "Date are equal" << endl;
    else
        cout << "Date are NOT equal" << endl;
    return 0;
}