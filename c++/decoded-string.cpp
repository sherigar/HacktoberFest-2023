//https://leetcode.com/problems/decoded-string-at-index/?envType=daily-question&envId=2023-10-01
class Solution {
public:
    string decodeAtIndex(string s, int k) 
    {
        long long dl = 0;
        int n = s.length();
        int digit;
        for (int i = 0; i < n; i++) 
            if (s[i]<='9' && s[i]>='0') 
            {
                digit = s[i] - '0';
                dl *= digit;
            } 
            else 
                dl++;
        for (int i = n - 1; i >= 0; i--) 
            if (s[i]<='9' && s[i]>='0') 
            {
                digit = s[i] - '0';
                dl /= digit;
                k %= dl;
            } 
            else 
            {
                if (k == 0 || k == dl) 
                {
                    string res;
                    res+=s[i];
                    return res;
                }
                dl--;
            }
        return "";
    }
};
