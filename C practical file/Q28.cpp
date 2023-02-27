// Q28. Write a program to print the circumference and area of a circle of radius entered by the user by defining your own function.

#include <iostream>
#define PI 3.14
using namespace std;

float circumference(float radius)
{
    return 2 * PI * radius;
}
float area(float radius)
{
    return PI * (radius * radius);
}

int main()
{
    float radius;
    cout << "Enter Radius : ";
    cin >> radius;
    // system("CLS");
    // system("cls");
    system("clear");
    cout << "Circumference for circle of radius '" << radius << "' is : " << circumference(radius) << endl;
    cout << "\t&\n";
    cout << "Area for circle of radius '" << radius << "' is : " << area(radius) << endl;
    return 0;
}