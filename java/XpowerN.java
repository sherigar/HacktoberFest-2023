import java.util.*;
public class XpowerN {
    public static int stackxn(int x, int n){
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }// two base conditions
    int stack= stackxn(x, n-1);//kaam hai
    int cutcut=x*stack;
    return cutcut;

}
public static void main(String[] args) {
    int x=8;
    int n=2;
    int s=stackxn(x, n);
    System.out.println(s);
}
}
