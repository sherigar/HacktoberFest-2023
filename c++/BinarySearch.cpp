#include<iostream>
using namespace std;

//Binary Search is for Sorted Array

//Time Complexity of Binary Search is :- O(log(n))

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        //Go to right part of array
        if(key>arr[mid]){
            start=mid+1;
        }

        // go to left part of array
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }

    //if key not found it will return -1;
    return -1;
}
int main(){

    //Intialising array of size 6 with values
    int arr[6]={3,8,11,14,16};

    //calling function BinarySearch
    int oddIndex=binarySearch(arr,5,14);

    //print the value at the index of 14 according to 0-indexing
    cout<<"Index of 14 is "<<oddIndex;
    return 0;
}