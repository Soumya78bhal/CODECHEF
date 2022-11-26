#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,flag=0;
    cin>>n;
    string binary;
    cin>>binary;
    if(n==1){
        cout<<"YES"<<endl;
        continue;
    }
    binary.append("0");
    for(ll i=0;i<n;i++){
        if(binary[i]=='1' && binary[i+1]!='1'){
            flag=1;
            break;
        }
        if(binary[i]=='1' && binary[i+1]=='1'){
            
            i++;
        }
        
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;
}