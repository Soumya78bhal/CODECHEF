#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
#define setbits(n) __builtin_popcount(n)

int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    if(k>n/2){
        k=n/2;
    }
    if(n==1){
        cout<<"0"<<endl;
        continue;
    }
    if(k==0){
        cout<<"0"<<endl;
        continue;
    }
    ll sum=0,p=n-1,g=n-k-1;
    sum+=((p*(p+1)/2))-(g*(g+1)/2);
    sum+=(n-(2*k))*k;
    sum+=(k-1)*((k))/2;
    cout<<sum<<endl;


}
return 0;
}