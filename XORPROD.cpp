#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll n,count=0;
    cin>>n;
    vector<ll> arr(n);
    for(auto &i:arr)cin>>i;
    
    for(ll i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
    }
    sort(arr.begin(),arr.end());
    
    
    ll product=1;
    for(ll i=0;i<arr.size();i++){
        if(arr[i]%2==0 && count>0){
            arr[i]++;
            count--;
        }
        product=(product*arr[i])%998244353;
    }
    cout<<product<<endl;
}
return 0;
}