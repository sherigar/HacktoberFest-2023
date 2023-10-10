class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long sum=arr[0],max=arr[0];
        
        for(int i=1;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=arr[i];
            if(max<sum){
                max=sum;
            }
        }
        return max;
