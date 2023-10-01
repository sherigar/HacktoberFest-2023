// Harshad number or not using Java 
import java.util.*;
class harshadNum{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        int sum = 0;
        int temp = num;
        while(num!=0){
            int rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        System.out.println(sum);

        if(temp%sum==0)
        System.out.println("Harshad number");
        else
        System.out.println("Not Harshad number");
    }
}
