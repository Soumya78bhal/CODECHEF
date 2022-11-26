#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
int main(){
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s[0]==s[s.length()-1])cout<<s.length()-2<<endl;
    else cout<<2<<endl;
}
return 0;
}