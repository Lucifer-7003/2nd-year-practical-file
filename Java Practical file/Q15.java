// Q15. WAP to create 3*3 matrix and display count of prime no of each row.

import java.util.Scanner;

public class Q15 {
    // display the given matrix
    public static void displayMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    // checks if a number is prime
    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[][] matrix = new int[3][3];
        Scanner scr = new Scanner(System.in);

        // populate matrix with user inputs
        System.out.println("Enter elements of the matrix:");
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                matrix[i][j] = scr.nextInt();
            }
        }

        // count prime numbers in each row
        int[] primeCounts = new int[3];
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (isPrime(matrix[i][j])) {
                    primeCounts[i]++;
                }
            }
        }

        // display matrix and count of prime numbers in each row
        System.out.println("Matrix:");
        displayMatrix(matrix);
        for (int i = 0; i < matrix.length; i++) {
            System.out.println("Number of primes in row " + (i + 1) + ": " + primeCounts[i]);
        }

        scr.close();
    }

}