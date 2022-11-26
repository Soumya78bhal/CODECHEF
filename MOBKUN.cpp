#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
int main(){
ll t;
cin>>t;
while(t--){
    ll n,m,x,k;
    cin>>n>>m>>k>>x;
    ll numbermob=x%((k*n)+m);
    
    if(numbermob==0){
        cout<<"YES"<<endl;
        continue;
    }
    if(numbermob>(k-1)*n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
