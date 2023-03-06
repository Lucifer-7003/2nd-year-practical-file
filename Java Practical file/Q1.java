// Q1. WAP to read a string from user and display it's reverse.

// Importing Scanner class from java.util package
import java.util.Scanner;

class Q1 {
	public static void main(String[] args) {
		// Creating an object of Scanner class to read input from the user
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter a text : ");
		// Reading a line of text from the user and storing it in a String variable
		String input = scr.nextLine();

		// Initializing an empty String variable to store the reversed text
		String rev_input = "";
		// Looping through the input text in reverse order
		for (int i = input.length() - 1; i >= 0; i--) {
			// Concatenating each character to the reverse String variable
			rev_input = rev_input + input.charAt(i);
		}
		// Printing the reversed text to the console
		System.out.println("Reverse : " + rev_input);

		// Closing the Scanner object to prevent memory leaks
		scr.close();
	}
}
