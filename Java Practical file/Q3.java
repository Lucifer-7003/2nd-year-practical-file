// Q3. Write a Java program to check if a vowel is present in a string.

import java.util.Scanner;

class Q3 {
	public static boolean checkVowel(char ch) {
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
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter a text : ");
		String input = scr.nextLine();
		boolean result = false;

		for (int i = 0; i < input.length(); i++) {
			if (checkVowel(input.charAt(i))) {
				result = true;
				break;
			}
		}

		if (result) {
			System.out.println("There Is a vowel in the inputed text");
		} else {
			System.out.println("There Are NO vowel in the inputed text");
		}
		scr.close();
	}
}
