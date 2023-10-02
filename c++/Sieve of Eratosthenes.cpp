#include<bits/stdc++.h>  //Program to count primes
using namespace std;
int countprimes(int n)
{
    int count=0;
    vector<bool>v(1000,true);
    for(int i=2;i<n;i++)
    {
        if(v[i]==true)
        {
            for(int j=2*i;j<n;j+=i)
            {
                v[j]=false;
            }
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<countprimes(n)<<endl;
    }
return 0;
}