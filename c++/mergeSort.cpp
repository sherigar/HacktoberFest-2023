#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&a,int low,int mid,int high){
    vector<int>temp;//temporary array
    int left=low;
    int right=mid+1;
    //storing elements in temp array in sorted manner
    while(left<=mid && right<=high) {
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    //if elements on the left half are still left
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    //if elements on the right half are still left
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    //transferring all elements from temporary to a (initial array)
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}
void mergeSort(vector<int>&a,int low,int high){
    if(low>=high)  return ;
    int mid=low+(high-low)/2;
    mergeSort(a,low,mid);//left half
    mergeSort(a,mid+1,high);//right half
    merge(a,low,mid,high);//merging sorted halves
}
int main() {
    vector<int>a={9,4,7,6,3,1,5};
    int n=7;
    
    cout<<"initial array: "<<endl;
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;
    
    mergeSort(a,0,n-1);
    cout<<"after sorting array: "<<endl;
    for(int i:a)
        cout<<i<<" ";
}
