// Q2. WAP to read two no from user and swap thier values without using third variable.

import java.util.Scanner;

class Q2 {
	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in);
		int num1, num2;

		System.out.print("Enter 2 numbers: ");
		num1 = scr.nextInt();
		num2 = scr.nextInt();

		System.out.println("Numbers Before swap : num1 = " + num1 + ", num2 = " + num2);
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
		System.out.println("Numbers After swap : num1 = " + num1 + ", num2 = " + num2);
		scr.close();
	}
}
