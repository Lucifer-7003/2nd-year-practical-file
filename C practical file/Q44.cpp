// Q44. Create a class student with the following non-static data members: no, name, marks and static data member fees. Create static functions to store and retrieve values from the static data member.

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int no;
    string name;
    double marks;
    static double fees;

    static void setFees(double value)
    {
        fees = value;
    }

    static double getFees()
    {
        return fees;
    }
};

double Student::fees = 0.0;

int main()
{
    // Create a Student object and set its data members
    Student student;
    student.no = 1;
    student.name = "John";
    student.marks = 85.5;

    // Set the value of fees using the static setFees function
    Student::setFees(1000.0);

    // Print out the student's data members and the value of fees using the static getFees function
    cout << "Student number: " << student.no << endl;
    cout << "Student name: " << student.name << endl;
    cout << "Student marks: " << student.marks << endl;
    cout << "Student fees: " << Student::getFees() << endl;

    return 0;
}
