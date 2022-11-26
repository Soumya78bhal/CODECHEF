#include<bits/stdc++.h>
using namespace std;
#define ll long int
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll findGCD(vector<ll> arr, int n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
        result = gcd(arr[i], result);
  
    return result;
}
int main(){
ll t;
cin>>t;
while(t--){
    ll n,temp,count=0;
    cin>>n;
    vector<ll> arr;
    for(ll i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    ll gcd=findGCD(arr,n);
    for(ll i=0;i<n;i++){
        if(arr[i]!=gcd)count++;
    }
    cout<<count<<endl;
}
return 0;
}