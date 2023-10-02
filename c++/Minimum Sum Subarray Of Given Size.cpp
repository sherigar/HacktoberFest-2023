Problem Statement
Sample Input 1 :
8 3
10 4 2 5 6 3 8 1
Sample Output 1 :
11
Explanation Of Sample Input
All subarrays of size 3 and their respective sums are-
{10, 4, 1} : sum → 10+4+1 = 15
{4, 2, 5} : sum → 4+2+5 = 11
{2, 5, 6} : sum → 2+5+6 = 13
{5, 6, 3} : sum → 5+6+3 = 14
{6, 3, 8} : sum → 6+3+8 = 17
{3, 8, 1} : sum → 3+8+1 = 12

The subarray with a minimum sum of 11 is {4, 2, 5}.
Sample Input 2 :
8 4
1 -4 2 10 -2 3 1 0 -20
Sample Output 2 :
2

//CODE
  
int minSubarraySum(int arr[], int n, int k) 
{
    // Write your code here 
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    int minsum=sum;
    for(int i=k;i<n;i++)
    {
        // remove the 1st elem of window and add last elem in window
        sum=sum-arr[i-k]+arr[i];
        minsum=min(minsum,sum);
    }
    return minsum;
}  
