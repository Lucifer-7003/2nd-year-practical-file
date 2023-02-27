// Q29. A person is eligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is eligible to vote.

#include <iostream>
using namespace std;

bool voterEligiblity(int age)
{
    return (age >= 18) ? true : false;
}

int main()
{
    int age;
    cout << "Enter candidate age : ";
    cin >> age;
    if (voterEligiblity(age))
        cout << "Candidate is Eligible to vode" << endl;
    else
        cout << "Candidate is NOT Eligible to vode" << endl;
    return 0;
}