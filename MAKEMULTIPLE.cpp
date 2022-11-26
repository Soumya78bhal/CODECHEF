#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"YES"<<endl;
        continue;
    }
    if(a<=(b/2)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}
return 0;
}