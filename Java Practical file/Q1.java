// Q1. WAP to read a string from user and display it's reverse.

import java.util.Scanner; // Importing Scanner class from java.util package

class Q1 {
	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in); // Creating an object of Scanner class to read input from the user
		System.out.print("Enter a text : ");
		String input = scr.nextLine(); // Reading a line of text from the user and storing it in a String variable

		String rev_input = ""; // Initializing an empty String variable to store the reversed text
		for (int i = input.length() - 1; i >= 0; i--) { // Looping through the input text in reverse order
			rev_input = rev_input + input.charAt(i); // Concatenating each character to the reverse String variable
		}
		System.out.println("Reverse : " + rev_input); // Printing the reversed text to the console

		scr.close(); // Closing the Scanner object to prevent memory leaks
	}
}
