#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ll count=0,temp1,temp2,tempcount1,tempcount2;
    for(ll i=0;i<n;i++){
        temp1=b[i]-a[i];
        if(temp1<0)temp1+=26;
        temp2=b[i]-a[i];
        if(temp2>0)temp2-=26;
        
        ll min;
        
        tempcount1=count;
        tempcount2=count;
        tempcount1+=temp1;
        tempcount2+=temp2;
        if(abs(tempcount1)<abs(tempcount2))count+=temp1;
        else count+=temp2;
    }
    cout<<abs(count)<<endl;
}

}