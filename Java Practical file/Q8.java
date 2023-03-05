// Q8. WAP to print all prime no between 1 to 100.

class Q8 {
    // This method returns true if the given number is prime, else false
    public static boolean isPrime(int num) {
        if (num == 1 || num <= 0) {
            return false;
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        // Print a message indicating that we are finding prime numbers between 1 and
        // 100
        System.out.println("Prime no. b/w 1 to 100");
        // Loop through numbers 1 to 100 and check if they are prime
        for (int i = 1; i < 100; i++) {
            if (isPrime(i)) {
                // If the number is prime, print it to the console
                System.out.println(i + " is a Prime no.");
            }
        }
    }
}
