//  this question is one of the most asked questions in small scale company or even large scale company interviews
// in this we will have to find the number of non-empty sub arrays of given array whose element's sum is divisible by k (input)

// inputs - array nums , integer k
// output - number of subarrays whose element's sum is divisible by k

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k,0);
        int sum= 0;
        for(int a:nums){
            sum += (a%k + k)% k;
            count[sum % k]++;

        }
        int result = count[0];
        for(int c : count){
            result += (c*(c-1))/2;
        }
        return result;

    }
};

int main (){
    int a,b;
    vector<int> input;
    Solution obj1;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>a;
    for(int i=0; i<a; i++){
        int p;
        cout<<"Enter array element below"<<endl;;
        cin>>p;
        input.push_back(p);
    }
    cout<<"Now enter the integer K"<<endl;
    cin>>b;
    cout<<"The number of subarrays whose sum is divisible by k is"<<endl;
    cout<<obj1.subarraysDivByK(input,b);
}