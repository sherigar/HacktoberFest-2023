/* Program to find taylor series for sin(x) where x is the user entered value*/

#include <stdio.h>

int main(void) {
  int i;
  float degree, x, sum, term;
  printf("enter the value in degree\n");
  scanf("%f", &degree);
  x = degree * 3.14593 / 180;
  term = x;
  sum = x;
  for (i = 1; i < 10; i++) {
    term = -term * x * x / (2 * i * (2 * i + 1));
    sum = sum + term;
  }
  printf("the calculated sum is= %f\n", sum);
  printf("the mathematical sine value is%f\n ", sin(x));
}