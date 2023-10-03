#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void dfs(int idx,string s, vector<string>&ans, vector<string>keypad, string digits)
{
    if(s.size()==digits.size())
    {
        //for printing kyepad combinations
        cout<<s<<endl;
        ans.push_back(s);
        return;
    }
    for(int i=0;i<keypad[digits[idx]-'0'].size();i++)
    {
        s+=keypad[digits[idx]-'0'][i];
        dfs(idx+1,s,ans,keypad,digits);
        s.pop_back();
    }
}
void lettercomb(string digits)
{
    if(digits.size()==0)
        return;
    vector<string>keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string s;
    vector<string>ans;
    dfs(0,s,ans,keypad,digits);
    //return;
}
void printKeypad(int n)
{
    string digits=to_string(n);
    lettercomb(digits);
}

//given in question
#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
