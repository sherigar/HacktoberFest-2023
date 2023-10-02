//This is the header file which include all the compulsory header files needed
#include<bits/stdc++.h>

using namespace std;

//Function defined for InsertionSort

//Time Complexity :- O(n*n)
// Best time Complxity :- O(n)  Wrost case :- O(n*n)
void insertionSort(vector<int>& arr,int n){

   
    for(int i=1;i<=n;i++){
        int temp=arr[i];
        int j=i-1;

        for( ; j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                //stop
                break;
            }
        }
        arr[j+1]=temp;
    }
}

/* You can use this Sorting Algorithm 
     But for Competitve programing C++ provides a special feature :
       STL which provides a simple function to sort the algorithm 
       sort(vector.begin(),vector.end)
*/
int main(){
    
    vector<int> vc={4,9,1,18,6};
    int size=vc.size();

    insertionSort(vc,size);

    for(int i=0;i<size;i++){
        cout<<vc[i]<<" ";
    }

    return 0;
}