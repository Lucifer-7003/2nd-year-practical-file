// Q10. WAP to print full pyramid pattern:
//    			1
//    		  3 2 1
//    		5 4 3 2 1
//    	  7 6 5 4 3 2 1
//    	9 8 7 6 5 4 3 2 1	

import java.util.Scanner;

class Q10 {
    public static void pyramid(int rows) {
        // outer loop for number of rows
        for (int i = 1; i <= rows; i++) {

            // inner loop to print spaces before numbers
            for (int j = rows; j > i; j--) {
                System.out.print("  ");
            }

            // inner loop to print numbers
            for (int j = ((2 * i) - 1); j > 0; j--) {
                System.out.print(j + " ");
            }

            // move to next line for next row
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);

        // get input from user
        System.out.print("Enter number of rows: ");
        int num = scr.nextInt();

        // call pyramid method to print pyramid
        pyramid(num);

        // close scanner
        scr.close();
    }
}
