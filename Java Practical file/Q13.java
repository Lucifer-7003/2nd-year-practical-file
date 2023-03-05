// Q13. WAP to create 3*3 matrix and display sum of both the diagonals.

import java.util.Scanner;

class Q13 {

    // This method takes a 2D array as input and returns an array containing the sum
    // of its diagonals
    public static int[] diagonalSum(int[][] arr) {
        int[] result = new int[2];

        // calculate sum of diagonals
        for (int i = 0; i < arr.length; i++) {
            result[0] += arr[i][i]; // add element from diagonal 1
            result[1] += arr[i][arr.length - i - 1]; // add element from diagonal 2
        }
        return result;
    }

    public static void main(String[] args) {
        int[][] arr = new int[3][3];
        Scanner scr = new Scanner(System.in);

        // populate matrix with user inputs
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print("Enter element at position [" + i + "][" + j + "]: ");
                arr[i][j] = scr.nextInt();
            }
        }

        System.out.println();
        // display matrix and diagonal sums
        System.out.println("Matrix:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println();
        int[] sum = diagonalSum(arr);
        System.out.println("Sum of diagonal 1: " + sum[0]);
        System.out.println("Sum of diagonal 2: " + sum[1]);

        scr.close();
    }

}