/* Program to find the trace of a matrix of order m*n */

#include <stdio.h>

int main(void) {
  int i, j, rows, columns, trace = 0;

  printf("Enter Matrix Rows and Columns =  ");
  scanf("%d %d", &rows, &columns);

  int Tra_arr[rows][columns];

  printf("Please Enter the Matrix Items =  \n");
  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      scanf("%d", &Tra_arr[i][j]);
    }
  }

  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      if (i == j) {
        trace = trace + Tra_arr[i][j];  // finding trace
      }
    }
  }

  printf("The Trace Of the Matrix = %d\n", trace);
}