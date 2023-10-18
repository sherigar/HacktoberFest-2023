#include <iostream>
//time complexityy if O(log n)
using namespace std;
int binarysearch(int arr[] , int size , int key){
    int start =0;
    int end=size-1;
    int mid=(start+end)/2;
    //also;
    //mid== start + (end-start)/2
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //right bala part par jayo 
        if(key>arr[mid]){
            //right part
            start=mid+1;
        }
        //left bale part par jayo
        else if(key<arr[mid]){
            end=mid-1;
        }
        //mid ka value bhi update kar do
        mid=(start+end)/2;
    }
    // if key is not present in the array the we return -1
    
    return -1;
}
int main()
{
    int even[]={2,4,6,8,12,18};
    int odd[]={3,8,11,14,16};
    
    int index1=binarysearch(even , 6,12);
    cout<<"index of the key in the array is  ="<<index1<<endl;
    
    int index2=binarysearch(odd , 5,10);
    cout<<"index of the key in the array is  ="<<index2<<endl;

    return 0;
}
