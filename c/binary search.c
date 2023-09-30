/*Program to implement binary search on integers */

#include <stdio.h>

int main(void) {
 int a[100], n, i, j, temp,low,high,mid,key;
  printf("enter the number of elements\n");
  scanf("%d", &n);             // taking user input 
  printf("enter %d elements\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]); // taking the user enterd elements and storing it in a array
  }
  printf("the entered elements are:\n");
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);   // displaying the elements entered by the user
  }
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("\nwe have sorted the entered numbers in ascending order!\n");
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);    // displaying the sorted elements
  }
  printf("\n"); 
  printf("enter the element to be searched\n");
  scanf("%d",&key);  // storing the element to be searched entred by the user 
  low=0;   // initialising low = 0
  high=n-1;  // initialising high as 1 less than maxsize of the array
  while(low<=high)
    {
      mid=(low + high)/2; // finding mid 
      if(key==a[mid])  // checking if mid is equal to key 
      {
        printf("sucessful search and element is found at position=%d\n\t\t\tTHANK YOU!",mid+1);     // if true then display search sucessfull and  exit the  program
        exit(0);
      }
      if(key>a[mid])  // checking wether key is greater than mid
      {
        low=mid+1;   // reassigning low 
      }
      else
      {
        high=mid-1;  // reassigning high
      }
    }
  printf("unsucessful search\n");    // diplay search unsucessfull and terminate the program
  printf("\t\t\tTHANK YOU!");     // exit the program
}
  