// Q46. Create a class Student containing Rollno, name, and address as data members and provide methods to get and set data. From this class derive two classes InternalExam and ExternalExam.
//    a. InternalExam contains marks of 3 subjects and maximum marks as data members and member methods to get and set data. (Eng., Hindi, Maths) out of 150.
//    b. ExternalExam contains marks of practical and maximum marks as data members and member methods to get and set data. (Practical) out of 100.
//    c. From these two classes, derive the Result class that displays the entire information of the student and calculates the total marks and percentage obtained by the student.

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name, address, Rollno;

public:
    void set_data()
    {
        cout << "Enter the Roll no. of student: ";
        cin >> Rollno;
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the address of student: ";
        cin >> address;
    }
    void display_data()
    {
        cout << "\nRoll no.: " << Rollno;
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
    }
};

class InternalExam : public Student
{
protected:
    int eng_marks, hindi_marks, maths_marks, max_marks;

public:
    void set_data()
    {
        Student::set_data();
        cout << "Enter the marks obtained in English: ";
        cin >> eng_marks;
        cout << "Enter the marks obtained in Hindi: ";
        cin >> hindi_marks;
        cout << "Enter the marks obtained in Maths: ";
        cin >> maths_marks;
        max_marks = 150;
    }
    void display_data()
    {
        Student::display_data();
        cout << "\nMarks obtained in English: " << eng_marks;
        cout << "\nMarks obtained in Hindi: " << hindi_marks;
        cout << "\nMarks obtained in Maths: " << maths_marks;
        cout << "\nMaximum marks: " << max_marks;
    }
    int get_total_marks()
    {
        return eng_marks + hindi_marks + maths_marks;
    }
};

class ExternalExam : public Student
{
protected:
    int practical_marks, max_marks;

public:
    void set_data()
    {
        Student::set_data();
        cout << "Enter the marks obtained in Practical: ";
        cin >> practical_marks;
        max_marks = 100;
    }
    void display_data()
    {
        Student::display_data();
        cout << "\nMarks obtained in Practical: " << practical_marks;
        cout << "\nMaximum marks: " << max_marks;
    }
    int get_total_marks()
    {
        return practical_marks;
    }
};

class Result : public InternalExam, public ExternalExam
{
public:
    void display_result()
    {
        InternalExam::display_data();
        cout << "\nTotal marks obtained: " << InternalExam::get_total_marks() + ExternalExam::get_total_marks();
        cout << "\nPercentage: " << (float)((InternalExam::get_total_marks() + ExternalExam::get_total_marks()) * 100) / ((InternalExam::max_marks * 4) + ExternalExam::max_marks);
    }
};

int main()
{
    Result r;
    cout << "Enter the details of student for Internal Exam:\n";
    r.InternalExam::set_data();
    cout << "\nEnter the details of student for External Exam:\n";
    r.ExternalExam::set_data();
    cout << "\n\nThe result of student is:\n";
    r.display_result();
    return 0;
}
