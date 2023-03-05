// Q12. Write a program to sort the uni dim array list in ascending order.

import java.util.Scanner;

class Q12 {
    // function to sort an array of integers in ascending order
    public static int[] sort(int[] arr) {
        // iterate through each element of the array
        for (int i = 0; i < arr.length; i++) {
            // compare each element with the rest of the elements in the array
            for (int j = i + 1; j < arr.length; j++) {
                // if the current element is greater than the next element, swap their positions
                if (arr[i] > arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int[] arr = new int[10];

        // get input from user for array elements
        System.out.print("Enter elements of the array: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scr.nextInt();
        }
        System.out.println();

        // display the unsorted array
        System.out.print("Array before sorting: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.println();

        // sort the array using the sort function
        arr = sort(arr);

        // display the sorted array
        System.out.print("Array after sorting: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.println();

        scr.close();
    }
}
