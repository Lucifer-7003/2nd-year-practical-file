// Q3. Write a Java program to check if a vowel is present in a string.

//importing Scanner class from java.util package to take user input
import java.util.Scanner;

class Q3 {
	// defining a static method checkVowel to check if a given character is a vowel
	// or not
	public static boolean checkVowel(char ch) {
		// using switch case to check if the character is a vowel or not
		switch (ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				return true;
			default:
				return false;
		}
	}

	public static void main(String[] args) {
		// creating an object of Scanner class
		Scanner scr = new Scanner(System.in);
		// taking user input
		System.out.print("Enter a text : ");
		String input = scr.nextLine();
		boolean result = false;

		// iterating through each character in the input string
		for (int i = 0; i < input.length(); i++) {
			// calling checkVowel method to check if the current character is a vowel or not
			if (checkVowel(input.charAt(i))) {
				result = true;
				break;
			}
		}

		// displaying the result
		if (result) {
			System.out.println("There Is a vowel in the inputted text");
		} else {
			System.out.println("There Are NO vowel in the inputted text");
		}
		// closing the Scanner object
		scr.close();
	}

}
