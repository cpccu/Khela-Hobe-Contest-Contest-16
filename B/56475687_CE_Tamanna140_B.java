import java.util.Scanner;

public class Divisors {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input
        int A = scanner.nextInt();

        // Validate input
        if (A > 0 && A < 100) {
            // Find and print divisors
            for (int i = 1; i <= A; i++) {
                if (A % i == 0) {
                    System.out.println(i);
                }
            }
        } else {
            System.out.println("Invalid input. A must be between 1 and 99.");
        }

        scanner.close();
    }
}