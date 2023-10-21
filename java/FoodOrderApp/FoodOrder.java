import java.util.Scanner;

public class FoodOrder{
    int burger = 100;
    int pizza = 160;
    int fries = 60;
    int total=0;
    int quantity;
    public void generateBill(){
        System.out.println("**Thank you for ordering**");
        System.out.println("Your total bill is : "+total);
    }
    public void displayMenu(){
        System.out.println("***Welcome to the menu***");
        System.out.println("1.Burger      100/-");
        System.out.println("2.Pizza       160/-");
        System.out.println("3.Fries        60/-");
        System.out.println("3.Exit             ");
    }
    Scanner sc=new Scanner(System.in);
    public void order(){
        System.out.println("Enter your choice : ");
        int ch=sc.nextInt();

        switch(ch){
            case 1:
            System.out.println("You have selected burger");
            System.out.println("Enter the desired quantity : ");
            quantity=sc.nextInt();
            total=total+quantity*burger;
            break;

            case 2:
            System.out.println("You have selected pizza");
            System.out.println("Enter the desired quantity : ");
            quantity=sc.nextInt();
            total=total+quantity*pizza;
            break;

            case 3:
            System.out.println("You have selected Fries");
            System.out.println("Enter the desired quantity : ");
            quantity=sc.nextInt();
            total=total+quantity*fries;
            break;

            case 4:
            System.exit(1);
            break;

            default:
            break;
        }
        System.out.println();
        System.out.println("You want to order anything else (Yes/No) : ");
        String again=sc.next();
        if(again.equalsIgnoreCase("Yes")){
            order();
        }
        else if(again.equalsIgnoreCase("No")){
            generateBill();
        }

    }
    public static void main(String[] args) {
        FoodOrder fo=new FoodOrder();
        fo.displayMenu();
        fo.order();
    }

}
