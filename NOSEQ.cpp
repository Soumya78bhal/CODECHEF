#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
ll t;
cin>>t;
while(t--){
    ll n,k,s,need,flag=0;
    cin>>n>>k>>s;
    
    if((1-pow(k,n))/(1-k) < s){
        cout<<"-2"<<endl;
        continue;
    }

   
    vector<ll> ans;
    need=s;
    while(need!=0){
        if(need%k==0){
            ans.push_back(0);
           
        }
        else if((need-1)%k==0){
            ans.push_back(1);
            need=(need-1);
           
        }
        else if((need+1)%k==0){
            ans.push_back(-1);
            need=(need+1);
            
        }
        else{
            cout<<"-2"<<endl;
            flag=1;
            break;
        }
        need=need/k;
    }
    if(flag==1)continue;
    for(ll i=0;i<n;i++){
        if(i<ans.size()){
            cout<<ans[i]<<" ";
        }
        else cout<<"0"<<" ";
    }
    cout<<endl;  
}
return 0;
}