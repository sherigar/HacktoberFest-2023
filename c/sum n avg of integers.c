/* Program to find the sum and average of integers */

#include <stdio.h>

int main(void) {
  int a[10], i, n, sum = 0;
  float avg;
  printf("enter the numbers of elemenst:\n");
  scanf("%d", &n);
  printf("enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++) {
    sum = sum + a[i];
  }
  avg = sum / n;
  printf("sum is %d\n", sum);
  printf("average is %f\n", avg);
}