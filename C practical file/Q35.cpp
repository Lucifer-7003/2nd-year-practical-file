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
    int yoj;
    string name, address;

public:
    void getData(string name, int yoj, string address)
    {
        this->name = name;
        this->yoj = yoj;
        this->address = address;
    }
    void showData()
    {
        cout << name << ", " << yoj << ", " << address << endl;
    }
};

int main()
{
    Employee emp1, emp2, emp3;
    emp1.getData("Robert", 1994, "64C - WallsStreat");
    emp2.getData("Sam", 2000, "68D- WallsStreat");
    emp3.getData("John", 1999, "26B- WallsStreat");
    cout << "Name, Year of joining, Address" << endl;

    emp1.showData();
    emp2.showData();
    emp3.showData();
    return 0;
}