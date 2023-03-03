// Q29. A person is eligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is eligible to vote.

#include <iostream>
using namespace std;

// Function to check voter eligibility based on age
bool voterEligiblity(int age)
{
    // Ternary operator used to simplify the return statement
    // If age is greater than or equal to 18, return true, otherwise return false
    return (age >= 18) ? true : false;
}

// Main function
int main()
{
    int age;

    // Prompt the user to enter candidate age and store it in the age variable
    cout << "Enter candidate age : ";
    cin >> age;

    // Call the voterEligibility function to check if the candidate is eligible to vote
    if (voterEligiblity(age))
    {
        // If the candidate is eligible, print a message to indicate that
        cout << "Candidate is Eligible to vote" << endl;
    }
    else
    {
        // If the candidate is not eligible, print a message to indicate that
        cout << "Candidate is NOT Eligible to vote" << endl;
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
