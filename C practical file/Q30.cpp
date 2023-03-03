// Q30. Write a program that will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered below:
//	Marks Grade
//		91-100 AA
//		81-90 AB
//		71-80 BB
//		61-70 BC
//		51-60 CD
//		41-50 DD
//		<=40 Fail

#include <iostream>
#include <string>

using namespace std;

string grade(float marks[])
{
	size_t list_size = sizeof(marks) / sizeof(float);
	int total = 0, per;
	string division;
	for (int i = 0; i < list_size; i++)
	{
		total += marks[i];
	}
	per = (((total)*100) / (list_size * 100));
	if (per > 90)
		division = "AA";
	else if (per > 80)
		division = "AB";
	else if (per > 70)
		division = "BB";
	else if (per > 60)
		division = "BC";
	else if (per > 50)
		division = "CD";
	else if (per > 40)
		division = "DD";
	else
		division = "False";
	return division;
}

int main()
{
	string subject[] = {"C++", "JS", "SE", "JAVA", "Python", "DBMS", "CG"};
	float marks[7];
	string name;

	cout << "Enter Name : ";
	cin >> name;
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter " << subject[i] << " : ";
		cin >> marks[i];
	}
	cout << "Candidate '" << name << "' has obtained : '" << grade(marks) << "' grade." << endl;
	return 0;
}