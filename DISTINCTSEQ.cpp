#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string a;
    cin>>a;
    ll pos=-1;
    for(ll i=0;i<2*n;i++){
        if(a[i]!=a[0]){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<pos<<endl;
        continue;
    }
    ll count=0;
    for(ll i=0;count<n;i++){
        if(i!=pos){
            cout<<i+1<<" ";
            count++;
        }
    }
    cout<<endl;
}
return 0;
}