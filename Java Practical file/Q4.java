// Q4. Write a Java program to check if the given number is a prime number.

import java.util.Scanner;

class Q4 {
	// Function to check if a given number is prime or not
	public static boolean isPrime(int num) {
		// Numbers 1 and 0 are not prime, so we return false
		if (num == 1 || num <= 0) {
			return false;
		} else {
			// Check for divisors from 2 to num/2
			for (int i = 2; i <= num / 2; i++) {
				// If num is divisible by i, it is not prime, so we return false
				if (num % i == 0) {
					return false;
				}
			}
		}
		// If num is not divisible by any number from 2 to num/2, it is prime
		return true;
	}

	public static void main(String[] args) {
		// Create a scanner object to get input from the user
		Scanner scr = new Scanner(System.in);
		System.out.print("Enter a number : ");
		// Read an integer from the user
		int num = scr.nextInt();
		// Check if the number is prime using the isPrime function
		if (isPrime(num)) {
			System.out.println(num + " is a Prime no. ");
		} else {
			System.out.println(num + " is NOT a Prime no. ");
		}
		// Close the scanner object to free up resources
		scr.close();

	}
}
