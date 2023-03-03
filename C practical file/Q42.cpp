// Q42. Write a program to print the name, salary and date of joining of 10 employees in a company. Use an array of objects.

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int doj, salary;
    string name;

public:
    void getdate(string name, int salary, int doj)
    {
        this->name = name;
        this->salary = salary;
        this->doj = doj;
    }
    void showDate()
    {
        cout << "Name : " << name << endl;
        cout << "\tSalary : " << salary << endl;
        cout << "\tDate of joining : " << doj << endl;
        cout << endl;
    }
};

int main()
{
    Employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        string name;
        int salary, doj;
        cout << "Enter data of employee " << i + 1 << " : " << endl;
        cout << "Name : ";
        cin >> name;

        cout << "Salary : ";
        cin >> salary;

        cout << "Date of joining : ";
        cin >> doj;
        cout << endl;
        emp[i].getdate(name, salary, doj);
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        emp[i].showDate();
    }

    return 0;
}