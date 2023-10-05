/* Program to find roots of a quadraitic equations */

#include <math.h>
#include <stdio.h>

int main(void) {  // start of main


  float a, b, c, d, real, img, root1, root2;  // declaring the required variables

  /* taking input from the user */ 
  
  printf("enter the coeffient of a,b,c:\n");  // taking the ccoefficirnts of a,b,c fromt the user
  scanf("%f%f%f", &a, &b, &c); // storing the user entered data in their respective variable

  /* Checking the initial base conditions */
  if (a == 0 && b == 0) {
    printf("soory!\n roots cannot be computed\n");  // displaying the relavent message
    exit(0);
  }

  /* checking wether only the coefficent of a is equal to 0 */
  if (a == 0) {
    printf("roots are linear\n");  // if true then display roots are linear
    root1 = -c / b; // calculating the roots and assigning the calculated result to variable root1
    printf("root = %f\n", root1); // display the root
    exit(0); //exit from execution
  }
  d = b * b - 4 * a * c;  // calculating discriminent

  if (d == 0) { //checking wether discriminent is 0
    root1 = -b / (c * a); // calculate the root if true
    printf("roots are real and equal\n root1=root2=%f", root1); // display the calculated root

  } else if (d > 0) {  // checking wether discriminent is greater than 0
     // if true then calculate root1 and root2
      root1 = (-b + sqrt(d)) / (2 * a); 
      root2 = (-b - sqrt(d)) / (2 * a);

    printf("roots are real and distinct\n root1=%f\n root2=%f\n", root1, root2);  // display root1 and root2

  } else {  
    // else display the appropriate message
    printf("roots are complex/imaginary\n"); 
    real = -b / (2 * a);  // caalculating the imaginary part of the root
    
    img = sqrt(fabs(d)) / (2 * a); // calculate the imaginary part
    
    /* display the roots */
    printf("root1=%f + i%f\n", real, img); // display root 1
    printf("root2=%f - i%f\n", real, img); //display root 2
  }

 return 0;  // end of main

}