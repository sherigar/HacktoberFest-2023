#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT32_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
}

int main() {
  solve();
  return 0;
}
