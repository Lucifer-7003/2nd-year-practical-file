// Q9. WAP to print all perfect no between 1 to 100.

class Q9 {
    // A method to check if a number is perfect or not
    public static boolean isPerfect(int num) {
        double sum = 0;

        // Finding all divisors of the number and adding them up
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        // Checking if the sum of divisors is equal to the number
        return (sum == num);
    }

    public static void main(String[] args) {
        int limit = 100;
        System.out.println("Perfect numbers between 1 to 100:");

        // Looping through all numbers from 1 to limit
        for (int i = 1; i <= limit; i++) {
            if (isPerfect(i)) { // Checking if the number is perfect
                System.out.print(i + ", "); // Printing the perfect number
            }
        }
        System.out.println(); // Printing a new line after all perfect numbers are printed
    }
}
