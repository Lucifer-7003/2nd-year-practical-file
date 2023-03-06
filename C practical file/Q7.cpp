// Q7. WAP to use all Bitwise operators without using class in C++.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    // Print the entered numbers
    cout << "Entered numbers are: " << num1 << ", " << num2 << endl;

    // Perform bitwise operations
    cout << "Bitwise operators:" << endl;

    // Bitwise AND
    result = num1 & num2;
    cout << num1 << " & " << num2 << " : " << result << endl;

    // Bitwise OR
    result = num1 | num2;
    cout << num1 << " | " << num2 << " : " << result << endl;

    // Bitwise XOR
    result = num1 ^ num2;
    cout << num1 << " ^ " << num2 << " : " << result << endl;

    // Bitwise NOT of num1
    result = ~num1;
    cout << "~" << num1 << " : " << result << endl;

    // Bitwise NOT of num2
    result = ~num2;
    cout << "~" << num2 << " : " << result << endl;

    // Bitwise left shift of num1 by num2 bits
    result = num1 << num2;
    cout << num1 << " << " << num2 << " : " << result << endl;

    // Bitwise right shift of num1 by num2 bits
    result = num1 >> num2;
    cout << num1 << " >> " << num2 << " : " << result << endl;

    // Print explanation of the output
    cout << "\n**here '0' = false, '1' = true **" << endl;

    return 0;
}
