#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    string s1=s,s2=s;
    s1.erase(s1.begin()+n/2,s1.end());
    s2.erase(s2.begin(),s2.begin()+n/2);
    if(s1==s2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
return 0;
}