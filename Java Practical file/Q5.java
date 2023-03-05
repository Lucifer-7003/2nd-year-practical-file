// Q5. WAP to calculate area of circle.

import java.util.Scanner;

class Q5 {
	// Define a constant variable PI
	final static double PI = 3.14159265359;

	// Function to calculate the area of a circle given its radius
	public static double area(double radius) {
		// Calculate the area using the formula PI * r^2
		return PI * (radius * radius);
	}

	public static void main(String[] args) {
		// Create a scanner object to get input from the user
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter radius of the circle : ");
		// Read a double value from the user
		double rad = scr.nextDouble();
		// Call the area function to calculate the area of the circle
		double area = area(rad);
		// Print the area of the circle
		System.out.println("Area of Circle : " + area);
		// Close the scanner object to free up resources
		scr.close();
	}
}
