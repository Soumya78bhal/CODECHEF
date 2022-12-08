#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll check[26]={0};
    ll count=1;
    ll largest=0;
    s.push_back('0');
    for( ll i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{          
            if(check[(int)(s[i])-97]==count && count>=largest){
                largest=count;
                check[(int)(s[i])-97]=count;
                count=1;  
                
            }
            if(count>check[(int)(s[i])-97]){
                check[(int)(s[i])-97]=count;
            }
            if (count>largest){
                largest=count-1;
                count=1;  
            }           
            else{
                count=1;
            }
        }

    }
    
    cout<<largest<<endl;
    }
    

}

