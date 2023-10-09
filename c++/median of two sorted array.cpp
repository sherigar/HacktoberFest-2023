class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) 
    {    
        if (A.size() > B.size()) 
            return findMedianSortedArrays(B, A);
        
        int nA = A.size(), nB = B.size();
        int l = 0, r = nA;
        
        while (l <= r) {
            int cutA = (l + r) / 2;
            int cutB = (nA + nB + 1) / 2 - cutA;
            
            int maxLeftA = (cutA == 0) ? INT_MIN : A[cutA - 1];
            int minRightA = (cutA == nA) ? INT_MAX : A[cutA];
            int maxLeftB = (cutB == 0) ? INT_MIN : B[cutB - 1];
            int minRightB = (cutB == nB) ? INT_MAX : B[cutB];
            
            if (maxLeftA <= minRightB && maxLeftB <= minRightA) {
                if ((nA + nB) % 2 == 0) return 
                (max(maxLeftA, maxLeftB)+min(minRightA,minRightB))/2.0;
                else return max(maxLeftA, maxLeftB); 
            } 
            else if (maxLeftA > minRightB) 
                r = cutA - 1;
            else 
                l = cutA + 1;
        }
        return 0.0;
    }
};
