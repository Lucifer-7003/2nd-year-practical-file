// Q41. Write a program to compare two dates entered by the user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

#include <iostream>
using namespace std;

// Define a structure to hold a date
struct Date
{
    int year, month, day;
};

// Function to compare two dates for equality
bool compare(Date date1, Date date2)
{
    bool result = false;
    // Check if all three fields (year, month, day) are equal in both dates
    if ((date1.year == date2.year) && (date1.month == date2.month) && (date1.day == date2.day))
        result = true;
    return result;
}

// Main function
int main()
{
    Date d1, d2;
    // Prompt the user to enter the first date
    cout << "Enter 1st date (in 'DD MM YYYY' format): ";
    cin >> d1.day >> d1.month >> d1.year;
    cout << endl;
    // Prompt the user to enter the second date
    cout << "Enter 2nd date (in 'DD MM YYYY' format): ";
    cin >> d2.day >> d2.month >> d2.year;
    cout << endl;
    // Compare the two dates and output the result
    if (compare(d1, d2))
        cout << "Date are equal" << endl;
    else
        cout << "Date are NOT equal" << endl;
    return 0;
}
