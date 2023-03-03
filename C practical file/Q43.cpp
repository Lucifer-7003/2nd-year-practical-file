// Q43. Write a C++ program to define overloaded functions to find the volume of the cube & volume of the Cylinder.

#include <iostream>
using namespace std;

// Function to calculate the volume of a cube
double volume(double sideLength)
{
    return sideLength * sideLength * sideLength;
}

// Function to calculate the volume of a cylinder
double volume(double radius, double height)
{
    const double pi = 3.14159265358979323846;
    return pi * radius * radius * height;
}

int main()
{
    // Find the volume of a cube with a side length of 5
    double cubeVolume = volume(5);
    cout << "Volume of cube with side length 5: " << cubeVolume << endl;

    // Find the volume of a cylinder with radius 3 and height 10
    double cylinderVolume = volume(3, 10);
    cout << "Volume of cylinder with radius 3 and height 10: " << cylinderVolume << endl;

    return 0;
}
