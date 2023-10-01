package Recursion;

import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a binary number:");
        String binaryString = scanner.nextLine();
        int decimalNumber = binaryToDecimal(binaryString, binaryString.length() - 1);
        System.out.println("The decimal equivalent is: " + decimalNumber);
    }

    public static int binaryToDecimal(String binaryString, int n) {
        if (n < 0)
            return 0;
        else
            return ((binaryString.charAt(n) - '0') * (int) Math.pow(2, binaryString.length() - 1 - n)) + binaryToDecimal(binaryString, n - 1);
    }
}
