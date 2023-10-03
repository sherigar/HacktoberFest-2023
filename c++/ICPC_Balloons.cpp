#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace __gnu_pbds;
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define all(a) a.begin(),a.end()
#define ff first
#define ss second
#define int long long
#define inf INT_MAX
#define rev reverse
#define vtr vector
#define nl NULL
#define pob pop_back
#define pb push_back
#define umap unordered_map
#define rtn return
#define endl "\n"
#define tab "\t"
#define spc ' '
#define typ typename
#define printif(condition) cout<<((condition)?"YES\n":"NO\n")

template <typ T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typ V>
using ordered_multiset = tree<V, null_type, less_equal<V>, rb_tree_tag, tree_order_statistics_node_update>;
template <typ A> umap<A, int> AddToMap(vtr<A> v){
    umap<A, int> m;
    for(auto it : v)
        m[it]++;
    rtn m;
}
int sumofArr(vtr<int> v){
    int ans = 0;
    for (auto it : v)   ans+=it;
    return ans;
}
bool isprime(int t){
    bool flag = 1;
    if (t == 1)
        return 0;
    for (int i = 2; i*i <= t; i++) {
        if (t%i == 0)
            flag = 0;
    }
    return flag;
}
int maxElem(std::vector<int> a){
    std::sort(a.begin(), a.end());
    return a[a.size()-1];
}
int minElem(std::vector<int> a){
    std::sort(a.begin(), a.end());
    return a[0];
}
void swap(int a, int b, std::vector<int> &heap){
    int t;
    t = heap[a];
    heap[a] = heap[b];
    heap[b] = t;
}
int fibonacci(int n){
    if (n == 1)
        return n;
    if (n == 0)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int BinaryS(int s, int e, int t, vector<int> v){
    if (e-s < 0)
        return -1;
    int pos;
    if ((e-s)%2 == 0)
        pos = s + (e-s)/2;
    else
        pos = s + ((e-s)+1)/2;
    if (v[pos] == t)
        return pos;
    else if (v[pos] > t)
        return BinaryS(1, pos-1, t, v);
    else
        return BinaryS(pos+1, e, t, v);
    return 0;
}
const int N = 1e5;  // limit for array size
int n;  // array size
int t[2 * N];

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int p, int value) {  // set value at position p
  for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}
/*------------------------------Code-Begins----------------------------------*/

void solve() {
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int out=0,inc=0;
 //map<int,int>mp;
 for(int i=0;i<n;i++)
 {
    if(arr[i]<=7)
    inc++;
    else if(inc==7)
    {
        break;
    }
    else if(arr[i]>7)
    {
        out++;
    }
 }
 cout<<out+inc<<endl;   
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nl);
    cout.tie(nl);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}