// Q6. WAP to read three numbers from user and display the max no.

import java.util.Scanner;

class Q6 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int num1, num2, num3;
        System.out.print("Enter 3 numbers: ");
        num1 = scr.nextInt();
        num2 = scr.nextInt();
        num3 = scr.nextInt();

        if ((num1 > num2) && (num1 > num3)) {
            System.out.println(num1 + " is the greatest.");
        } else if (num2 > num3) {
            System.out.println(num2 + " is the greatest.");
        } else {
            System.out.println(num3 + " is the greatest.");
        }
        scr.close();
    }
}
