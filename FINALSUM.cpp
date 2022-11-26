#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,q,sum=0;
    cin>>n>>q;
    ll arr[n],l[q],r[q];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(ll i=0;i<q;i++){
        cin>>l[i]>>r[i];
        if((l[i]-r[i])%2==0){
            sum++;
        }
    }
    cout<<sum<<endl;
}
return 0;
}