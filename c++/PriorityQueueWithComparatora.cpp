#include<bits/stdc++.h>
using namespace std;
class Comp {
    public:
       bool operator()(pair<int,int> &a, pair<int,int> &b){
           if(a.second<b.second){
               return true;
           }
           return false;
      }
};

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second<b.second){
        return true;

    }
    else{
        return false;
    }
}
int main(){

priority_queue<pair<int,int> ,vector<pair<int,int>>,Comp> cp;
cp.push({2,3});

cp.push({34,5});
cp.push({33,4});
while(cp.size()!=0){
    cout<<cp.top().first<<cp.top().second<<endl;
    cp.pop();
}
cout<<"comparato function in vectors"<<endl;
//comaprators inside a vector
vector<int> v;
v.push_back(1);
v.push_back(20);
v.push_back(5);
sort(v.begin(),v.end());
for(auto it:v){
    cout<<it<<endl;
}
cout<<"using pairs inside a vector"<<endl;
//using paris inside a vector
vector<pair<int,int>> p;
p.push_back({2,6});
p.push_back({3,4});
p.push_back({5,7});
sort(p.begin(),p.end(),cmp);
for(auto it = p.begin(); it!= p.end();it++){
    cout<<it->first<<it->second<<endl;
}
    return 0;
}