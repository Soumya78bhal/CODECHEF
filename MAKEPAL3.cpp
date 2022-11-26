#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
int main(){
ll t;
cin>>t;
while(t--){
    ll n,temp;
    cin>>n;
    vector<ll> arr;
    for(ll i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    ll check[n]={0};
    for(ll i=0;i<n/2;i++){
        if(arr[i]>arr[n-i-1]){
            check[n-1-i]=arr[i]-arr[n-1-i];
        }
        else if(arr[i]<arr[n-i-1]){
            check[i]= -arr[i]+arr[n-1-i];
        }
    }
    ll count=check[0],flag=1;
    for(ll i=1;i<n;i++){
        if(check[i]>check[i-1]){
            count+=check[i]-check[i-1];
        }
    }
    cout<<count<<endl;
}

return 0;
}