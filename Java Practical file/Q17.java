// Q17. WAP to create a method which return lcm of given two no.

import java.util.Scanner;

class Q17 {
    /**
     * Calculates the least common multiple of two positive integers.
     * 
     * @param num1 the first positive integer
     * @param num2 the second positive integer
     * @return the least common multiple of num1 and num2
     * @throws IllegalArgumentException if num1 or num2 is not positive
     */
    public static int calculateLCM(int num1, int num2) {
        // Check if the input numbers are positive
        if (num1 <= 0 || num2 <= 0) {
            throw new IllegalArgumentException("Numbers must be positive.");
        }

        // Find the maximum and minimum of the two input numbers
        int max = Math.max(num1, num2);
        int min = Math.min(num1, num2);

        // Set the LCM to the larger of the two input numbers
        int lcm = max;

        // While the LCM is not divisible by the smaller input number, keep adding the
        // larger input number to it
        while (lcm % min != 0) {
            lcm += max;
        }

        // Return the LCM
        return lcm;
    }

    public static void main(String[] args) {
        // Create a new Scanner object to read user input
        Scanner scr = new Scanner(System.in);

        // Prompt the user to enter two positive integers
        System.out.print("Enter two positive integers: ");
        int num1 = scr.nextInt();
        int num2 = scr.nextInt();

        // Calculate the LCM using the calculateLCM() method
        int lcm = calculateLCM(num1, num2);

        // Print the result
        System.out.println("The least common multiple of " + num1 + " and " + num2 + " is " + lcm);

        // Close the Scanner object to avoid resource leaks
        scr.close();
    }
}