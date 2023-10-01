/*Program to find largest of two numbers */

#include <stdio.h>

int main(void) {  // start of main

  int a,b,big;  // declaring the required variables

  printf("enter two numbers:\n");  // taking user input
  scanf("%d%d,&a,&b");  // storing the user entered  data in a variable

  big =a;  // assigning big as a

  if(b>big){  // checking  if b is greater than a if true assign big as b
    big=b;
  }
  printf("the biggest number is %d\n",big);  // display the big value

 return 0; // end of main
 
}