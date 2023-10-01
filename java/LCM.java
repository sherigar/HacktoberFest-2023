import java.util.Scanner;

public class LCMCalculator {
    // Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    // Function to calculate the least common multiple (LCM)
    public static int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt();

        scanner.close();

        int result = lcm(num1, num2);
        System.out.println("The LCM of " + num1 + " and " + num2 + " is " + result);
    }
}
