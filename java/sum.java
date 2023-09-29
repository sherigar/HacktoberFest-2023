import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        System.out.println("Enter num1");
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        System.out.println("Enter num2");
        int num2 = sc.nextInt();
        System.out.println("Sum of "+num1 +" + "+num2+" = "+(num1+num2));
    }
}
