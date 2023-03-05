// Q17. WAP to create a method which return lcm of given two no.

import java.util.Scanner;

class Q17 {
    /**
     * Calculates the least common multiple of two positive integers.
     *
     * @param num1 the first positive integer
     * @param num2 the second positive integer
     * @return the least common multiple of num1 and num2
     * @throws IllegalArgumentException if num1 or num2 is not positive
     */
    public static int calculateLCM(int num1, int num2) {
        if (num1 <= 0 || num2 <= 0) {
            throw new IllegalArgumentException("Numbers must be positive.");
        }
        int max = Math.max(num1, num2);
        int min = Math.min(num1, num2);
        int lcm = max;
        while (lcm % min != 0) {
            lcm += max;
        }
        return lcm;
    }

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        System.out.print("Enter two positive integers: ");
        int num1 = scr.nextInt();
        int num2 = scr.nextInt();
        int lcm = calculateLCM(num1, num2);
        System.out.println("The least common multiple of " + num1 + " and " + num2 + " is " + lcm);
        scr.close();
    }

}
