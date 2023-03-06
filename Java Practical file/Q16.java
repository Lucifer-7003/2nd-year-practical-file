// Q16. WAP to create a method which return factorial of a given no.

import java.util.Scanner;

public class Q16 {

    // This method calculates the factorial of a non-negative integer using a for
    // loop
    public static long calculateFactorial(int num) {
        if (num < 0) {
            // throw an exception if the number is negative
            throw new IllegalArgumentException("Number must be non-negative.");
        }
        long factorial = 1;
        // loop through each number from 1 to num and multiply them together
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        // return the factorial
        return factorial;
    }

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        System.out.print("Enter a number: ");
        // get user input for the number to calculate factorial
        int num = scr.nextInt();
        // calculate the factorial of the number
        long factorial = calculateFactorial(num);
        // print out the factorial
        System.out.println("Factorial of " + num + " is " + factorial);
        // close the scanner to free up resources
        scr.close();
    }
}
