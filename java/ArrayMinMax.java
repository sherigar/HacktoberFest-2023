import java.util.Arrays;
import java.util.Scanner;

public class ArrayMinMax {
    static void getMinMax(long a[], long n)  
    {
        long maxNo=Integer.MIN_VALUE;
        long minNo=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]>maxNo){
                maxNo=a[i];
            }
            if(a[i]<minNo){
                minNo=a[i];
            }
        }
        System.out.println("min = "+minNo);
        System.out.println("max = "+maxNo);
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long a[]=new long[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        getMinMax(a,n);
        Arrays.sort(a);
        System.out.println(a[3]);
    }
}
