// Q6. WAP to read three numbers from user and display the max no.

import java.util.Scanner;

class Q6 {
    public static void main(String[] args) {
        // Create a scanner object to get input from the user
        Scanner scr = new Scanner(System.in);
        // Declare three integer variables to hold user input
        int num1, num2, num3;
        System.out.print("Enter 3 numbers: ");
        // Read three integer values from the user
        num1 = scr.nextInt();
        num2 = scr.nextInt();
        num3 = scr.nextInt();

        // Find the greatest number among the three
        if ((num1 > num2) && (num1 > num3)) {
            System.out.println(num1 + " is the greatest.");
        } else if (num2 > num3) {
            System.out.println(num2 + " is the greatest.");
        } else {
            System.out.println(num3 + " is the greatest.");
        }
        // Close the scanner object to free up resources
        scr.close();
    }
}
