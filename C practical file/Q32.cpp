// Q32. Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input as well as the current date, in the same format, and calculates your age in years, months and days. You must check for leap years also. Write a separate function to check for leap year.

#include <iostream>
using namespace std;

// This function determines if a given year is a leap year
bool isLeapYear(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return true;
    }
    return false;
}

// This function calculates the age in years, months, and days
void calculateAge(int birth_year, int birth_month, int birth_day, int current_year, int current_month, int current_day)
{
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // days in each month
    if (isLeapYear(current_year))
    {
        months[2] = 29; // modify February days for leap year
    }

    int age_years = current_year - birth_year;
    int age_months = current_month - birth_month;
    int age_days = current_day - birth_day;

    // Handle case where birth month is after current month
    if (age_months < 0)
    {
        age_years--;
        age_months += 12;
    }

    // Handle case where birth day is after current day
    if (age_days < 0)
    {
        age_months--;
        age_days += months[current_month - 1];
        if (age_months < 0)
        {
            age_years--;
            age_months += 12;
        }
    }

    cout << "Age: " << age_years << " years, " << age_months << " months, " << age_days << " days" << endl;
}

int main()
{
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;

    cout << "Enter your date of birth (YYYY MM DD): ";
    cin >> birth_year >> birth_month >> birth_day;

    cout << "Enter the current date (YYYY MM DD): ";
    cin >> current_year >> current_month >> current_day;

    calculateAge(birth_year, birth_month, birth_day, current_year, current_month, current_day);

    return 0;
}
