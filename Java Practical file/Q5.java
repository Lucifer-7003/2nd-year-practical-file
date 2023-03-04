// Q5. WAP to calculate area of circle.

import java.util.Scanner;

class Q5 {
	final static double PI = 3.14159265359;

	public static double area(double radius) {
		return PI * (radius * radius);
	}

	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter radius of the circle : ");
		double rad = scr.nextDouble();
		System.out.println("Area of Circle : " + area(rad));
		scr.close();
	}
}
