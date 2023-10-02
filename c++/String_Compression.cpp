//https://leetcode.com/problems/string-compression/description/
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> result;
        if(chars.size()==1) return chars.size();
        string a="";
        int count=1;
        for(int i=1;i<chars.size();i++){
            if(chars[i-1]==chars[i]){
                count++;
            }else{
                a+=chars[i-1];
                if(count>=2){
                    a+=to_string(count);
                }
                count=1;
            }
        }
        if(chars[chars.size()-1]==chars[chars.size()-2]){
            a+=chars[chars.size()-1];
            a+=to_string(count);
        }else{
            a+=chars[chars.size()-1];
        }
        for(int i=0;i<a.size();i++){
                result.push_back(a[i]);
        }
        chars=result;
        return chars.size();
    }
};
