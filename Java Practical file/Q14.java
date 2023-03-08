// Q14. WAP to create 3*3 matrix and display matrix multiplication.

import java.util.Scanner;

public class Q14 {

    // method to display a matrix
    public static void displayMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {

        // create two matrices and a scanner to read user inputs
        int[][] matrix1 = new int[3][3];
        int[][] matrix2 = new int[3][3];
        Scanner scr = new Scanner(System.in);

        // populate matrix 1 with user inputs
        System.out.println("Enter elements of matrix 1:");
        for (int i = 0; i < matrix1.length; i++) {
            for (int j = 0; j < matrix1[0].length; j++) {
                matrix1[i][j] = scr.nextInt();
            }
        }
        System.out.println();

        // populate matrix 2 with user inputs
        System.out.println("Enter elements of matrix 2:");
        for (int i = 0; i < matrix2.length; i++) {
            for (int j = 0; j < matrix2[0].length; j++) {
                matrix2[i][j] = scr.nextInt();
            }
        }
        System.out.println();

        // calculate product of matrices
        int[][] product = new int[3][3];
        for (int i = 0; i < matrix1.length; i++) {
            for (int j = 0; j < matrix2[0].length; j++) {
                for (int k = 0; k < matrix2.length; k++) {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        // display matrices and their product
        System.out.println("Matrix 1:");
        displayMatrix(matrix1);
        System.out.println();
        System.out.println("Matrix 2:");
        displayMatrix(matrix2);
        System.out.println();
        System.out.println("Product:");
        displayMatrix(product);

        // close the scanner
        scr.close();
    }

}
