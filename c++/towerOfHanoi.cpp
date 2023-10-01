#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C){
    if(n == 1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }

    TOH(n-1, A, C, B);
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1, B, A, C);
}

int main(){
    int n = 3;
    char A = 'A';       // Source Tower
    char B = 'B';       // Auxilary Tower
    char C = 'C';       // Destination Tower.

    TOH(n, A, B, C);

    return 0;
}