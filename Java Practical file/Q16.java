// Q16. WAP to create a method which return factorial of a given no.

import java.util.Scanner;

public class Q16 {

    // This method calculates the factorial of a non-negative integer using a for
    // loop
    public static long calculateFactorial(int num) {
        if (num < 0) {
            throw new IllegalArgumentException("Number must be non-negative."); // throw an exception if the number is
                                                                                // negative
        }
        long factorial = 1;
        for (int i = 1; i <= num; i++) { // loop through each number from 1 to num and multiply them together
            factorial *= i;
        }
        return factorial; // return the factorial
    }

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scr.nextInt(); // get user input for the number to calculate factorial
        long factorial = calculateFactorial(num); // calculate the factorial of the number
        System.out.println("Factorial of " + num + " is " + factorial); // print out the factorial
        scr.close(); // close the scanner to free up resources
    }
}
