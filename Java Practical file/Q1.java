
// Q1. WAP to read a string from user and display it's reverse.
import java.util.Scanner;

class Q1 {
	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter a text : ");
		String input = scr.nextLine();
		String rev_input = "";
		for (int i = input.length() - 1; i >= 0; i--) {
			rev_input = rev_input + input.charAt(i);
		}
		System.out.println("Reverse : " + rev_input);
		scr.close();
	}
}