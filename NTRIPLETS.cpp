#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
ll t;
cin>>t;
while(t--){
    ll n,flag=0;
    cin>>n;
   
    for(ll i=2;i<sqrt(n);i++){
        if(n%i==0){
            if(n/i <= i){
                cout<<"-1"<<endl;
                flag=1;
                break;
            }
            else{
                cout<<"1"<<" "<<i<<" "<<n/i<<endl;
                flag=1;
                break;
            }
        }
        
        
    }
    if(flag==0)cout<<"-1"<<endl;
    

}
return 0;
}