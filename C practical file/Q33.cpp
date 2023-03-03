// Q33. Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class "Student".

#include <iostream>
#include <string>

using namespace std;

class Student
{
    int rollno;
    string phone_no, address, name;

public:
    void getData(int rollno, string name, string phone_no, string address)
    {
        this->rollno = rollno;
        this->phone_no = phone_no;
        this->address = address;
        this->name = name;
    }
    void showData()
    {
        cout << "Student : " << name << endl;
        cout << "\tRoll no. : " << rollno << endl;
        cout << "\tAddress : " << address << endl;
        cout << "\tPhone no. : " << phone_no << endl;
    }
};

int main()
{
    Student sam, john;
    sam.getData(101, "Sam", "1234567890", "some address on earth");
    john.getData(102, "John", "1234567890", "some address on earth");
    sam.showData();
    cout << endl;
    john.showData();
    return 0;
}