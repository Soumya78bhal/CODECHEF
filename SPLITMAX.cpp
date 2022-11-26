#include<bits/stdc++.h>
using namespace std;
#define ll long int
#define mod 998244353
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n],sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum=(sum+arr[i])%mod;
    }
    
    cout<<(sum*(sum-1))%mod<<endl;
}
return 0;
}
