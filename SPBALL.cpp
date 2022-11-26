#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
ll t;
cin>>t;
ll temp=1;
ll fact[1000001];
for(ll i=1;i<=1000000;i++){
    temp=(temp*i)%mod;
    fact[i]=(temp)%mod;
}
while(t--){
    ll n;
    cin>>n;
    ll x;
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>x;
        count=(count+fact[x])%mod;
    }
    cout<<count<<endl;



}
return 0;
}