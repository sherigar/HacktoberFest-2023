

#include<iostream>
using namespace std;

void merge(int *arr , int s  , int e){
    int mid = (s+e)/2;

    int length1 = mid - s+1;
    int length2 = e- mid;

    int *first = new int[length1];
    int *second = new int[length2];

   
    int mainArrayIndex =s;
    for(int i=0; i<length1; i++){
        first[i] = arr[mainArrayIndex ++];
    }

     mainArrayIndex =mid +1;
    for(int i=0; i<length2; i++){
        second[i] = arr[mainArrayIndex++];
    }

   
    int index1 =0;
    int index2=0;
    mainArrayIndex = s;
    while(index1<length1 && index2 <length2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

     while(index1<length1){
        arr[mainArrayIndex++] = first[index1++];
     }

      while(index2 <length2){
        arr[mainArrayIndex++]= second[index2++];
      }
   

  
      delete [] first;
      delete [] second;


}

void mergeSort(int *arr , int s, int e){
   
    if(s>=e){
        return;
    }

    int mid= s+ (e-s)/2;
    
   
    mergeSort(arr , s ,mid);

    
    mergeSort(arr  , mid+1, e);

   merge(arr , s, e);

}

int main() {
  int arr[10] ={ 1 , 2 , 3 , 1 , 8 , 4 ,3, 77, 34,0};
  int n=10;

  mergeSort(arr , 0 , n-1);

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;

}
