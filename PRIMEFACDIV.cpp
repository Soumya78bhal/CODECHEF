#include<bits/stdc++.h>
using namespace std;
#define ll long int
void prime(ll a,ll b){
   
    ll gcd=__gcd(a,b);
    
    if(b/gcd==1){
        cout<<"YES"<<endl;
        return;
    }
    if(gcd==1){
        cout<<"NO"<<endl;
        return;
    }
   
    prime(a,b/gcd);
}
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    prime(a,b);

}
return 0;
}