// Q2. WAP to read two no from user and swap thier values without using third variable.

import java.util.Scanner; // Importing Scanner class from java.util package

class Q2 {
	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in); // Creating an object of Scanner class to read input from the user
		int num1, num2;

		System.out.print("Enter 2 numbers: ");
		num1 = scr.nextInt(); // Reading the first number from the user and storing it in a variable
		num2 = scr.nextInt(); // Reading the second number from the user and storing it in a variable

		System.out.println("Numbers Before swap : num1 = " + num1 + ", num2 = " + num2);
		num1 = num1 + num2; // Adding both numbers and storing the sum in num1
		num2 = num1 - num2; // Subtracting the original value of num2 from the new value of num1 to get the
							// original value of num1 and storing it in num2
		num1 = num1 - num2; // Subtracting the original value of num1 from the new value of num1 to get the
							// original value of num2 and storing it in num1
		System.out.println("Numbers After swap : num1 = " + num1 + ", num2 = " + num2); // Printing the swapped values
																						// of num1 and num2
		scr.close(); // Closing the Scanner object to prevent memory leaks
	}
}
