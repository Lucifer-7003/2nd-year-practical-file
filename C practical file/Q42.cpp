// Q42. Write a program to print the name, salary and date of joining of 10 employees in a company. Use an array of objects.

// This program demonstrates the use of classes and objects in C++.
#include <iostream>
#include <string>

using namespace std;

// Define the Employee class
class Employee
{
    // Data members of the class
    string name, doj; // Date of joining
    int salary;

public:
    // Public member functions of the class
    void getdate(string name, int salary, string doj)
    {
        // Store the passed values in the class data members
        this->name = name;
        this->salary = salary;
        this->doj = doj;
    }

    void showDate()
    {
        // Display the data members of the class
        cout << "Name : " << name << endl;
        cout << "\tSalary : " << salary << endl;
        cout << "\tDate of joining : " << doj << endl;
        cout << endl;
    }
};

// The main function
int main()
{
    // Create an array of 10 Employee objects
    Employee emp[10];

    // Get the data for each employee from the user
    for (int i = 0; i < 10; i++)
    {
        string name, doj;
        int salary;
        cout << "Enter data of employee " << i + 1 << " : " << endl;
        cout << "Name : ";
        cin >> name;

        cout << "Salary : ";
        cin >> salary;

        cout << "Date of joining : ";
        cin >> doj;
        cout << endl;

        // Store the data in the appropriate Employee object
        emp[i].getdate(name, salary, doj);
    }

    // Display the data for each employee
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        emp[i].showDate();
    }

    return 0;
}