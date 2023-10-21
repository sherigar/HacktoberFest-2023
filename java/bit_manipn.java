import java.util.Scanner;

import javax.swing.event.DocumentEvent.ElementChange;

public class bit_manipn {
    //**Get bit
    // public static void main(String[] args){
    //     int n=5;
    //     int pos=2;
    //     int bitmask=1<<pos;
    //     if((bitmask & n)==0){
    //         System.out.println("bit was zero");
    //     }
    //     else{
    //         System.out.println("bit was one");
    //     }
    // }


    //**set bit
    // public static void main(String[] args){
    //     int n=5;
    //     int pos=1;
    //     int bitmask=1<<pos;
    //     int newNumber= bitmask | n;
    //     System.out.println(newNumber);
    // }


    //**clear bit
    // public static void main(String[] args){
    //     int n =5;
    //     int pos=1;
    //     int bitmask=1<<pos;
    //     int newbitmask=~(bitmask);
    //     int newNumber = newbitmask & n;
    //     System.out.println(newNumber);
    // }


    //**update bit
    public static void main(String[] args){
        int n=5;
        int pos=1;
        Scanner sc = new Scanner(System.in);
        int upd = sc.nextInt();
        int bitmask=1<<pos;
        if(upd==1){
            int newNumber = bitmask | n;
            System.out.println(newNumber);
        }
        else{
            int newbitmask=~(bitmask);
            int newNumber=newbitmask & n;
            System.out.println(newNumber);


        }
    }
}
