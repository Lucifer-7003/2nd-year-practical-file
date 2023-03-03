// Q44. Create a class student with the following non-static data members: no, name, marks and static data member fees. Create static functions to store and retrieve values from the static data member.

#include <iostream>
#include <string>
using namespace std;
// Declare a class named "Student"
class Student
{
public:
    int no;             // Declare an integer data member named "no" to store student number
    string name;        // Declare a string data member named "name" to store student name
    double marks;       // Declare a double data member named "marks" to store student marks
    static double fees; // Declare a static double data member named "fees" to store the fees of all students

    // Declare a static function named "setFees" to set the value of the static data member "fees"
    static void
    setFees(double value)
    {
        fees = value;
    }

    // Declare a static function named "getFees" to get the value of the static data member "fees"
    static double getFees()
    {
        return fees;
    }
};

// Define the static data member "fees" and initialize it with 0.0
double Student::fees = 0.0;

// Define the main function
int main()
{
    // Create a Student object named "student"
    Student student;

    // Set the data members of the "student" object
    student.no = 1;
    student.name = "John";
    student.marks = 85.5;

    // Set the value of fees using the static function "setFees"
    Student::setFees(1000.0);

    // Print out the data members of the "student" object and the value of fees using the static function "getFees"
    cout << "Student number: " << student.no << endl;
    cout << "Student name: " << student.name << endl;
    cout << "Student marks: " << student.marks << endl;
    cout << "Student fees: " << Student::getFees() << endl;

    // End the program by returning 0 to the operating system
    return 0;
}
