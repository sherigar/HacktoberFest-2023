package Recursion;

import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();
        String binary = decimalToBinary(number);
        System.out.println("Binary representation: " + binary);


    }

    public static String decimalToBinary(int n) {
        if (n == 0) {
            return "0";
        }
        int remainder = n % 2;

        String binaryString = decimalToBinary(n / 2);
        return binaryString + remainder;
    }
}
