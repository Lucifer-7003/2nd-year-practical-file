// Q46. Create a class Student containing Rollno, name, and address as data members and provide methods to get and set data. From this class derive two classes InternalExam and ExternalExam.
//    a. InternalExam contains marks of 3 subjects and maximum marks as data members and member methods to get and set data. (Eng., Hindi, Maths) out of 150.
//    b. ExternalExam contains marks of practical and maximum marks as data members and member methods to get and set data. (Practical) out of 100.
//    c. From these two classes, derive the Result class that displays the entire information of the student and calculates the total marks and percentage obtained by the student.

// This program is an example of multiple inheritance in C++
#include <iostream>
#include <string>
using namespace std;

// Class Student acts as a base class for InternalExam and ExternalExam classes
class Student
{
protected:
    string name, address, Rollno;

public:
    // function to set data for a student
    void set_data()
    {
        cout << "Enter the Roll no. of student: ";
        cin >> Rollno;
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the address of student: ";
        cin >> address;
    }
    // function to display data of a student
    void display_data()
    {
        cout << "Roll no.: " << Rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

// Class InternalExam is derived from class Student
class InternalExam : public Student
{
protected:
    int eng_marks, hindi_marks, maths_marks, max_marks;

public:
    // function to set data for internal exam marks of a student
    void set_data()
    {
        Student::set_data(); // calling the set_data() function of the base class
        cout << "Enter the marks obtained in English: ";
        cin >> eng_marks;
        cout << "Enter the marks obtained in Hindi: ";
        cin >> hindi_marks;
        cout << "Enter the marks obtained in Maths: ";
        cin >> maths_marks;
        max_marks = 150;
    }
    // function to display internal exam marks of a student
    void display_data()
    {
        Student::display_data(); // calling the display_data() function of the base class
        cout << "Marks obtained in English: " << eng_marks << endl;
        cout << "Marks obtained in Hindi: " << hindi_marks << endl;
        cout << "Marks obtained in Maths: " << maths_marks << endl;
        cout << "Maximum marks for Internal Examination: " << max_marks << endl;
    }
    // function to calculate total marks obtained by a student in internal exam
    int get_total_marks()
    {
        return eng_marks + hindi_marks + maths_marks;
    }
};

// Class ExternalExam is derived from class Student
class ExternalExam : public Student
{
protected:
    int practical_marks, max_marks;

public:
    // function to set data for external exam marks of a student
    void set_data()
    {
        cout << "Enter the marks obtained in Practical: ";
        cin >> practical_marks;
        max_marks = 100;
    }
    // function to display external exam marks of a student
    void display_data()
    {
        cout << "Marks obtained in Practical: " << practical_marks << endl;
        cout << "Maximum marks: " << max_marks << endl;
    }
    // function to calculate total marks obtained by a student in external exam
    int get_total_marks()
    {
        return practical_marks;
    }
};
// Class Result is derived from both InternalExam and ExternalExam classes
class Result : public InternalExam, public ExternalExam
{
public:
    // function to display the final result of a student
    void display_result()
    {
        InternalExam::display_data();                                                                                                                                                        // calling the display_data() function of InternalExam class
        ExternalExam::display_data();                                                                                                                                                        // calling the display_data() function of ExternalExam class
        cout << "Total marks obtained: " << InternalExam::get_total_marks() + ExternalExam::get_total_marks() << " / " << ((InternalExam::max_marks * 4) + ExternalExam::max_marks) << endl; // calling the get_total_marks() function of both classes and adding them
        cout << "Percentage: " << (float)((InternalExam::get_total_marks() + ExternalExam::get_total_marks()) * 100) / ((InternalExam::max_marks * 4) + ExternalExam::max_marks) << endl;
    }
};

int main()
{
    Result r;
    cout << "Enter the details of student for Internal Exam: " << endl;
    r.InternalExam::set_data();
    cout << "Enter the details of student for External Exam: " << endl;
    r.ExternalExam::set_data();
    cout << endl;
    cout << "The result of student is: " << endl;
    r.display_result();
    return 0;
}
