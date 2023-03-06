// Q5. WAP to use all Relational operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    // Variables to store the user input and result of comparison
    int num1, num2, result;

    // Prompt user to input two numbers
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    // Display the entered numbers
    cout << "Entered numbers are: " << num1 << " " << num2 << endl;

    // Display the different relational operators and their results
    cout << "Relational operators:" << endl;

    // Is Equals To
    result = num1 == num2;
    cout << num1 << " == " << num2 << " : " << result << endl;

    // Not Equals To
    result = num1 != num2;
    cout << num1 << " != " << num2 << " : " << result << endl;

    // Greater Than
    result = num1 > num2;
    cout << num1 << " > " << num2 << " : " << result << endl;

    // Lesser Than
    result = num1 < num2;
    cout << num1 << " < " << num2 << " : " << result << endl;

    // Greater Than or Equals To
    result = num1 >= num2;
    cout << num1 << " >= " << num2 << " : " << result << endl;

    // Lesser Than or Equals To
    result = num1 <= num2;
    cout << num1 << " <= " << num2 << " : " << result << endl;

    // Display explanation of result values
    cout << "\n**here '0' = false, '1' = true **" << endl;

    return 0;
}
