/* Program to find average of first n natural numbers */

#include <stdio.h>

int main(void) {
  int n, i, sum = 0;   // daclaring variables and initialising sum = 0 
  float avg = 0.0;      // declaring average as float because result of division might be of datatype flaot
  printf("enter the value of n:\n");    // taking the user input
  scanf("%d", &n);
  i = 1;           // iniatialsing variable i to 1       
  do { 
    sum = sum + i;  // using do while we are looping to calculate the sum and increment i on each iterationvcda
      i++;
  } while (i <= n); // checking the exit condition
  avg = sum / n;     // calculating the average from the obtianed sum
  printf("\n the sum of first %d natural numbers = %d\n the average of first " 
         "%d natural numbers is = %f\n",
         n, sum, n, avg);                     // displaying the calculated sum and average
  return 0;
}