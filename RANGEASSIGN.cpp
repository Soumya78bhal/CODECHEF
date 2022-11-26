#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,temp,flag=0;
    cin>>n;
    vector<ll> arr;
    for(ll i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    ll pos,var=arr[0];
    if(arr[0]==arr[n-1])flag=1;
    else if(arr[1]==arr[n-1])flag=1;
    else if(arr[0]==arr[n-2])flag=1;
     
    else {
       
        for(ll i=0;i<n;i++){
        if(arr[i]==var)pos=i;
        if(arr[pos+1]==arr[n-1])flag=1;
        }
    
    }

    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}