// Q9. WAP to print all perfect no between 1 to 100.

class Q9 {
    public static boolean isPerfect(int num) {
        double sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        return (sum == num);
    }

    public static void main(String[] args) {
        int limit = 100;
        System.out.println("Perfect no b/w 1 to 100");
        for (int i = 1; i <= limit; i++) {
            if (isPerfect(i)) {
                System.out.print(i + ", ");
            }
        }
        System.out.println();
    }
}
