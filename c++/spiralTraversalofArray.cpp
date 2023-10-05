#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    int m = 3, n = 3;
    int a[m][n] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    // spiral order print
    int row_start=0;
    int row_end=m-1;
    int col_start=0;
    int col_end=n-1;

    while (row_start<=row_end && col_start<=col_end){

        // for_row_start
        for (int col = col_start; col <= col_end; col++){
            cout<<a[row_start][col]<<" ";
        }

        row_start++;

        // for col_end
        for (int row = row_start; row <= row_end; row++){
            cout<<a[row][col_end]<<" ";
        }

        col_end--;

        // for row_end
        for (int col = col_end; col >= col_start; col--){
            cout<<a[row_end][col]<<" ";
        }

        row_end--;

        // for col_start
        for (int row= row_end; row >=row_start; row--){
            cout<<a[row][col_start]<<" ";
        }

        col_start++;
    }

    return 0;
}