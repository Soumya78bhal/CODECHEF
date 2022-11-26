#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,count=0;
    cin>>n;
    string binary;
    cin>>binary;
    for(ll i=0;i<(n-1);i++){
        if(binary[i]=='1' && binary[i+1]=='0'){
            count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}