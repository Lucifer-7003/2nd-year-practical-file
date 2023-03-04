// Q4. Write a Java program to check if the given number is a prime number.

import java.util.Scanner;

class Q4 {
	public static boolean isPrime(int num) {
		if (num == 1 || num <= 0) {
			return false;
		} else {
			for (int i = 2; i <= num / 2; i++) {
				if (num % i == 0) {
					return false;
				}
			}
		}
		return true;
	}

	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int num = scr.nextInt();
		if (isPrime(num)) {
			System.out.println(num + " is a Prime no. ");
		} else {
			System.out.println(num + " is NOT a Prime no. ");
		}
		scr.close();

	}
}
