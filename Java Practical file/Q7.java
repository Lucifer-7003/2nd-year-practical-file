// Q7. Write a program to read roll no, name and marks of three subjects and calculate the total, percentage and division. 

import java.util.Scanner;

class Q7 {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int total = 0;
        double per;
        String division;
        System.out.print("Enter Student's Roll no.: ");
        scr.nextLine();
        System.out.print("\tName: ");
        scr.nextLine();
        System.out.println("Enter Marks of subject (out of 100)");
        System.out.print("\tEnglish: ");
        total += scr.nextInt();
        System.out.print("\tMath: ");
        total += scr.nextInt();
        System.out.print("\tScience: ");
        total += scr.nextInt();
        System.out.println();
        per = (total * 100) / 300;
        System.out.println("Percentage: " + per);
        division = (per > 80) ? "1st" : (per > 50) ? "2nd" : (per > 35) ? "3rd" : "Fail";
        System.out.println("Division: " + division);
        scr.close();
    }
}
