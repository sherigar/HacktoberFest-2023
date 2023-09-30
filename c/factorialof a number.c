/*Program to find factorial of number using recursion*/

#include<stdio.h> 

int fact(int); // declaring  a user defined function 
int main(void )
{
int n,res; // declaring the required variables
  printf("enter a number\n");  // taling input from the user
  scanf("%d",&n); // storing the data in a variable

  res = fact(n);  // caling the function fact() and storing the returned value in a variable res

  printf("factorial =%d",res);  // display the value of res

 return 0;  // end of main

}

/* function defination of fact(n) */

int fact(int n){       // this is a recursive function
  if(n==0)
    return 1; // defining the base / terminating condition
  else
    return (n*fact(n-1));  // calling the function fact() passing the parametre as n-1 
  }