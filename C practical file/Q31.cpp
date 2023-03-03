// Q31. Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator() to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount. The tax is calculated as follows:
//    a. The savings are deducted from the gross income to calculate the taxable income. The maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
//    b. For up to 100,000 as taxable income the tax is 0 (Slab 0);
//          beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1);
// 			beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2);
//			if it's more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.

#include <iostream>
#include <string>

using namespace std;

// function to calculate tax based on salary and savings
float taxCalculator(float salary, float savings)
{
    // initialize tax to 0
    int tax = 0;

    // if savings exceed 100,000, limit savings to 100,000
    if (savings > 100000)
        savings = 100000;

    // calculate taxable income by subtracting savings from gross salary
    int taxable_income = salary - savings;

    // calculate tax based on tax slabs
    if (taxable_income >= 500000)
    {
        // 30% tax on income over 500,000
        tax += (((taxable_income - 500000) * 30) / 100);
        taxable_income = 500000;
    }
    if (taxable_income > 200000)
    {
        // 20% tax on income between 200,000 and 500,000
        tax += (((taxable_income - 200000) * 20) / 100);
        taxable_income = 200000;
    }
    if (taxable_income > 100000)
    {
        // 10% tax on income between 100,000 and 200,000
        tax += (((taxable_income - 100000) * 10) / 100);
        taxable_income = 100000;
    }

    // return the calculated tax
    return tax;
}

int main()
{
    // declare variables for name, gross salary, and savings
    float gross_salary, savings;
    string name;

    // prompt the user to enter their name, gross salary, and savings
    cout << "Enter Taxpayer's name : ";
    cin >> name;
    cout << "Enter your Gross Salary : ";
    cin >> gross_salary;
    cout << "Enter your Savings : ";
    cin >> savings;

    // call the taxCalculator function and display the result
    cout << "Tax to be collected for '" << name << "' is : " << taxCalculator(gross_salary, savings) << endl;

    // return 0 to indicate successful program execution
    return 0;
}
