#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
#define setbits(n) __builtin_popcount(n)
int main(){
ll t;
cin>>t;
while(t--){
    ll n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    ll dis1,dis2;
    dis1=abs(x2-x1)+abs(y2-y1);
    dis2=min(min(x1,n+1-x1),min(y1,n+1-y1))+min(min(x2,n+1-x2),min(y2,n+1-y2));
    cout<<min(dis1,dis2)<<endl;
}   
return 0;
}