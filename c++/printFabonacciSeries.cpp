#include<iostream>
using namespace std;

int main()
{
    int n = 10;

    int n1=0;
    int n2=1;
    int n3;

    cout<<n1<<" "<<n2;

    for(int i=2;i<n;i++){
        n3= n1+n2;
        cout<<" "<<n3;
        n1=n2;
        n2=n3;
    }

    return 0;
}