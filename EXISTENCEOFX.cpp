#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
#define setbits(n) __builtin_popcount(n)
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b,c,carry=0,flag=0;
    ll ai,bi,ci;
    string bin;
    cin>>a>>b>>c;
    for(ll i=0;i<32;i++){
        ai=(a>>i&1);
        bi=(b>>i&1);
        ci=(c>>i&1);
        ll c1,c0,a0,a1;
        a0=(ai^0)+(bi^0)+carry;
        a1=(ai^1)+(bi^1)+carry;
        c0=(ci^0);
        c1=(ci^1);
        
        if((a1>2 && c1==1)||(a1==0 && c1==0) || (a1==2 && c1==0) ||(a1==1 && c1==1)){
            if(a1>1)carry=1;
            else carry=0;        
        }
        else if((a0>2 && c0==1) || (a0==0 && c0==0)|| (a0==2 && c0==0) ||(a0==1 && c0==1)){
            if(a0>1)carry=1;
            else carry=0;       
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0 && carry!=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}