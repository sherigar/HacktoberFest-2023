import java.util.Scanner;

public class positiveOrNegeative {
    public static void main(String[] args) {
        System.out.println("Enter a number: ");
        Scanner sc= new Scanner(System.in);
        int num = sc.nextInt();
        if (num>0) 
            System.out.println("Entered number is positive!");
        else
            System.out.println("Entered number is Negeative!!");
    }    
}
