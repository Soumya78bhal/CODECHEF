#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,temp;
    cin>>n;
    ll arr[2*n];
    for(ll i=0;i<2*n;i++){
        cin>>arr[i];
    }
    map<ll,ll>num;
    for(ll i=0;i<2*n;i++){
        num[arr[i]]++;
    }
    ll count=0,max=0;
    for(auto x:num){
        count++;
        if(x.second>max)max=x.second;
    }
    if( max<=(2*n-(n/2)))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}