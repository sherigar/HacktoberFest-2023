/* Program to find taylor series for sin(x) where x is the user given value */

#include <stdio.h>

int main(void) {
 int i;
  float degree,x,sum,term;
  printf("enter the value in degree\n");
  scanf("%f",&degree);
   x= degree*3.14593/180;
  printf("the mathematical sine value is%f\n ",sin(x));
}