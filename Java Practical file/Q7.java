// Q7. Write a program to read roll no, name and marks of three subjects and calculate the total, percentage and division. 

import java.util.Scanner;

class Q7 {
    public static void main(String[] args) {
        // Create a scanner object to get input from the user
        Scanner scr = new Scanner(System.in);
        // Initialize variables to hold total marks, percentage, and division
        int total = 0;
        double per;
        String division;
        // Ask the user to enter student's roll no. and name
        System.out.print("Enter Student's Roll no.: ");
        scr.nextLine();
        System.out.print("\tName: ");
        scr.nextLine();
        // Ask the user to enter marks for three subjects
        System.out.println("Enter Marks of subject (out of 100)");
        System.out.print("\tEnglish: ");
        total += scr.nextInt();
        System.out.print("\tMath: ");
        total += scr.nextInt();
        System.out.print("\tScience: ");
        total += scr.nextInt();
        System.out.println();
        // Calculate percentage
        per = (total * 100) / 300;
        System.out.println("Percentage: " + per);
        // Determine division based on percentage
        division = (per > 80) ? "1st" : (per > 50) ? "2nd" : (per > 35) ? "3rd" : "Fail";
        System.out.println("Division: " + division);
        // Close the scanner object to free up resources
        scr.close();
    }
}
