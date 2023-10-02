#include<algorithm>
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        //vector<int>left;
        //vector<int>right;
        int left[n+1];
        int right[n+1];
        int a=height[0];
        left[0]=a;
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);
        }
        int b=height[n-1];
        right[n-1]=b;
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
       
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum+=(min(left[i],right[i])-height[i]);
          // sum+=k;
            //cout<<left[i]<<" ";
        }
        return sum;
    }
};