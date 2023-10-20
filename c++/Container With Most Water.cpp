// Contributed by:
Name: Abhijai Rajawat
University: VIT, Vellore 

// Problem Statement:
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
In this case, the max area of water (blue section) the container can contain is 49.

Example 2:
Input: height = [1,1]
Output: 1

// Problem Solution:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return water;
    }
};

//recursive way of the problem:
class Solution {
public:

    //The maxArea function is used to call the recursive function with appropriate arguments
    int maxArea(vector<int>& height) {

        //I added a new function named maxAreaRecursive to handle the recursion
        return maxAreaRecursive(height, 0, height.size() - 1);
    }

    //The logic inside "maxAreaRecursive" is: It calculates the maximum area between two pointers in a recursive manner
    int maxAreaRecursive(vector<int>& height, int left, int right) {
        if (left >= right) {
            return 0;
        }
        int h = min(height[left], height[right]);
        int w = right - left;
        int area = h * w;

        return max(area, maxAreaRecursive(height, left + 1, right), maxAreaRecursive(height, left, right - 1));
    }
};


// Two pointer way of the problem:

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int right = height.size() - 1;

        //It efficiently calculates the maximum water that can be stored between the vertical lines by moving the pointers towards each other while maximizing the area

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            maxWater = max(maxWater, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
    //This approach has a time complexity of O(n), making it the most efficient way to solve this problem.
};
