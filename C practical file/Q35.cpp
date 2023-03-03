// Q35. Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
//    Name Year of joining Address
//    Robert 1994 64C- WallsStreat
//    Sam 2000 68D- WallsStreat
//    John 1999 26B- WallsStreat

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int yoj;              // year of joining
    string name, address; // employee name and address

public:
    // function to set employee data
    void setData(string name, int yoj, string address)
    {
        this->name = name;
        this->yoj = yoj;
        this->address = address;
    }

    // function to display employee data
    void showData()
    {
        cout << name << ", " << yoj << ", " << address << endl;
    }
};

int main()
{
    // create three employee objects
    Employee emp1, emp2, emp3;

    // set employee data
    emp1.setData("Robert", 1994, "64C - Walls Street");
    emp2.setData("Sam", 2000, "68D- Walls Street");
    emp3.setData("John", 1999, "26B- Walls Street");

    // print column headers
    cout << "Name, Year of joining, Address" << endl;

    // display employee data
    emp1.showData();
    emp2.showData();
    emp3.showData();

    return 0;
}
