#include<iostream>
using namespace std;

int fact(int n){
    int f=1;

    for (int i = 1; i <= n; i++)
        f*=i;

    return f;
}

int main(){
    int n = 8;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";

        cout<<endl;
    }

    return 0;
}
