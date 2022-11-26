#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll max=0,temp;
    for(ll i=0;i<n;i++){
        cin>>temp;
        if(temp>max)max=temp;
    }
    cout<<max<<endl;
}
return 0;
}