// Q33. Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class "Student".

// This program demonstrates the use of a simple class named 'Student'
// The class has private member variables rollno, phone_no, address, and name
// It has two public member functions named 'getData' and 'showData'
// The function 'getData' takes four arguments and initializes the private member variables
// The function 'showData' displays the values of private member variables

#include <iostream>
#include <string>

using namespace std;

class Student
{
    int rollno;                     // private member variable
    string phone_no, address, name; // private member variable

public:
    // public member function to initialize private member variables
    void getData(int rollno, string name, string phone_no, string address)
    {
        this->rollno = rollno;
        this->phone_no = phone_no;
        this->address = address;
        this->name = name;
    }

    // public member function to display values of private member variables
    void
    showData()
    {
        cout << "Student : " << name << endl;
        cout << "\tRoll no. : " << rollno << endl;
        cout << "\tAddress : " << address << endl;
        cout << "\tPhone no. : " << phone_no << endl;
    }
};

int main()
{
    Student sam, john; // Creating two objects of class 'Student'

    // Initializing values for object 'sam'
    sam.getData(101, "Sam", "1234567890", "some address on earth");

    // Initializing values for object 'john'
    john.getData(102, "John", "1234567890", "some address on earth");

    // Displaying values for object 'sam'
    sam.showData();
    cout << endl;

    // Displaying values for object 'john'
    john.showData();

    return 0;
}