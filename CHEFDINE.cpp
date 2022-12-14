#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll> cat(n),tim(n);
    for(auto &i:cat)cin>>i;
    for(auto &i:tim)cin>>i;
    map<ll,ll> check;
    for(ll i=0;i<n;i++){
        check[cat[i]]=-1;
    }
    for(ll i=0;i<n;i++){
        if(check[cat[i]]==-1 || check[cat[i]]>tim[i]){
            check[cat[i]]=tim[i];
        }
    }
    vector<ll> ch;
    for(auto i:check){
        ch.push_back(i.second);
    }
    if(ch.size()<k){
        cout<<"-1"<<endl;
        continue;
    }
    ll count=0;
    sort(ch.begin(),ch.end());
    for(ll i=0;i<k;i++){
        count+=ch[i];
    }
    cout<<count<<endl;
}
return 0;
}