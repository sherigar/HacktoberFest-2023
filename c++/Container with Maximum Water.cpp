
Problem Statement

Sample Input 1 :
2
5
2 4 7 1 3
3
7 5 9
Sample Output 1:
9
14
Explanation Of Sample Input 1:

In the first test case, we will get the maximum area if we choose the container coloured blue in the above image. The length of the base of the container is 3, and the height of the container is min(4, 3) which is 3. Thus, the area of the container is 3 * 3 = 9.

In the second test case, we will get the maximum area if we choose the container coloured blue in the above image. The length of the base of the container is 2, and the height of the container is min(7, 9) which is 7. Thus, the area of the container is 2 * 7 = 14.
Sample Input 2:
2
5
1 5 12 2 1
5
7 12 9 20 8
Sample Output 2:
5
28
Explanation Of Sample Input 2:

 In the first test case, we will get the maximum area if we choose the container coloured blue in the above image. The length of the base of the container is 1, and the height of the container is min(5, 12) which is 5. Thus, the area of the container is 1 * 5 = 5.

In the second test case, we will get the maximum area if we choose the container coloured blue in the above image. The length of the base of the container is 4, and the height of the container is min(7, 8) which is 7. Thus, the area of the container is 4 * 7 = 28.

//CODE

#include<bits/stdc++.h>

int maxAreaContainer(vector<int> &arr) {
    // Write your code here.
    int left=0;
    int right=arr.size()-1;
    int currarea=0;
    int result=INT_MIN;
    while(left<right)
    {
        //we shall take the min height and form area with it
        currarea=min(arr[left],arr[right])*(right-left);
        
        //store max areas among all such areas
        result=max(result,currarea);
        if(arr[left]<=arr[right])
            left++;
        else
            right--;
    }
    return result;
}
