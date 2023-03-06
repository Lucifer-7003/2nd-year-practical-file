// Q28. Write a program to print the circumference and area of a circle of radius entered by the user by defining your own function.

#include <iostream>
#define PI 3.14 // Define the value of PI

using namespace std;

// Function to calculate circumference of a circle
float circumference(float radius)
{
    return 2 * PI * radius;
}

// Function to calculate area of a circle
float area(float radius)
{
    return PI * (radius * radius);
}

int main()
{
    float radius;

    cout << "Enter Radius : ";
    cin >> radius;

    // Output the circumference and area of the circle
    cout << "Circumference for circle of radius '" << radius << "' is : " << circumference(radius) << endl;
    cout << "\t&\n";
    cout << "Area for circle of radius '" << radius << "' is : " << area(radius) << endl;

    return 0;
}
