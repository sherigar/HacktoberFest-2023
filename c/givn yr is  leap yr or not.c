/*Program to determine wether entered year is leap year or not*/

#include <stdio.h>

int main(void) {

  int year; // declaring the required variables

  printf("enter a year:\n"); // taking input fron the user

  scanf("%d", &year); // storing the user input in a variable

  if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {   // checking the leap year condition and if the condition is true display leap year
    printf("\nLEAP YEAR!");
  } else {  // if false display not a leap year
    printf("\nnot a leap year");
  }

 return 0; // end of main
  
}