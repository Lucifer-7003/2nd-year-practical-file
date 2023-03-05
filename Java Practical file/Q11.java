// Q11. Write a program to insert an element (specific position) into an uni dim array.

import java.util.Scanner;

class Q11 {
    // function to insert an element in an array at a given position
    public static int[] insert(int[] arr, int value, int pos) {
        // shift elements to the right from the given position
        for (int i = arr.length - 2; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        // insert the value at the given position
        arr[pos] = value;
        // return the modified array
        return arr;
    }

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int[] arr = new int[10];

        System.out.print("Enter elements of the array: ");
        // get the input elements from the user
        for (int i = 0; i < (arr.length - 1); i++) {
            arr[i] = scr.nextInt();
        }

        System.out.print("\nEntered array: ");
        // display the entered array
        for (int i = 0; i < (arr.length - 1); i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.println();

        System.out.print("Enter position: ");
        int pos = scr.nextInt();

        if ((pos >= 0) && (pos < arr.length)) {
            // get the value to be inserted
            System.out.print("Enter value: ");
            int val = scr.nextInt();
            System.out.println();

            System.out.print("Array after insertion : ");
            // call the insert function to modify the array
            arr = insert(arr, val, pos);
            // display the modified array
            for (int i = 0; i < arr.length; i++) {
                System.out.print(arr[i] + ", ");
            }
            System.out.println();
        } else {
            System.out.println("Position Out of bound");
        }

        scr.close();
    }
}
