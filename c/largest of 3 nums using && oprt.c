/* Program to find largest of 3 numbers */

#include <stdio.h>

int main(void) {

  int num1,num2,num3;   // declaring the reqiured variables

  /* taking input from the user */
  printf("\nenter the first number:");
  scanf("%d",&num1);  // storing the data in a variable 
  printf("\n enter the second number:");
  scanf("%d",&num2);
  printf("\n enter the third number:");
  scanf("%d",&num3);

  /* checking the biggest number using if-else ladder */

  if(num1>num2&&num1>num3){
    printf("\n %d is the largest number!",num1);
    }
  else if(num2>num1&&num2>num3){
    printf("\n %d is the largest number!");
    }
  else{
    printf("\n %d is the largest number!");
  }

 return 0;  // end of main
 
}