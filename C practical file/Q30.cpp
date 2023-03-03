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

// This function takes an array of marks as input and returns a string representing the grade
string grade(float marks[])
{
	// Determine the size of the array
	size_t list_size = sizeof(marks) / sizeof(float);

	// Initialize variables for storing total marks and percentage
	int total = 0, per;

	// Initialize a string variable for storing the division
	string division;

	// Calculate the total marks
	for (int i = 0; i < list_size; i++)
	{
		total += marks[i];
	}

	// Calculate the percentage
	per = (((total)*100) / (list_size * 100));

	// Determine the division based on the percentage
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

	// Return the division
	return division;
}

int main()
{
	// Initialize an array of subject names
	string subject[] = {"C++", "JS", "SE", "JAVA", "Python", "DBMS", "CG"};

	// Initialize an array of marks
	float marks[7];

	// Initialize a string variable for storing the candidate's name
	string name;

	// Prompt the user to enter the candidate's name
	cout << "Enter Name : ";

	// Read in the candidate's name
	cin >> name;

	// Prompt the user to enter the marks for each subject
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter " << subject[i] << " : ";
		cin >> marks[i];
	}

	// Call the grade function to determine the candidate's grade
	string candidate_grade = grade(marks);

	// Display the candidate's name and grade
	cout << "Candidate '" << name << "' has obtained : '" << candidate_grade << "' grade." << endl;

	// Return 0 to indicate successful program completion
	return 0;
}
