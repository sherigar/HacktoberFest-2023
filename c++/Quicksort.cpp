#include <iostream>

using namespace std;
int partioning(int *arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1 ; i<=e ; i++ ){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // right index of pivot;
    int pivotindex=s+count;
    
    swap(arr[s] , arr[pivotindex]);
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<arr[pivotindex]){
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        if(arr[i]>arr[pivotindex ] && arr[j]<arr[pivotindex ]){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
    
}
void quicksort (int arr[], int s, int e)
{
  if (s >= e)
    {
      return;
    }
    int p=partioning(arr,s,e);
//left bala part ko sort karo
    quicksort(arr,s,p-1);  
  //right bala part ko sort karo
  quicksort (arr, p+1 , e);

}

int main ()
{
  int arr[5] = { 2, 0, 1, 6, 9 };
  int n = 5;
  
  quicksort(arr,0,n-1);
  for(int i=0 ; i<n ; i++){
      cout<<arr[i]<<" ";
  }


  return 0;
}
