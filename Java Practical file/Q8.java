// Q8. WAP to print all prime no between 1 to 100.

class Q8 {
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
        System.out.println("Prime no. b/w 1 to 100");
        for (int i = 1; i < 100; i++) {
            if (isPrime(i)) {
                System.out.println(i + " is a Prime no.");
            }
        }
    }
}