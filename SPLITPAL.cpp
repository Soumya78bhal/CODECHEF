#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(ll i=0;i<n;i++)
int main(){
ll t;
cin>>t;
while(t--){
    ll n,temp;
    cin>>n;
    vector<ll> arr1,arr2,temparr,stack1,stack2;
    loop(n){
        cin>>temp;
        arr1.push_back(temp);
    }
    temparr=arr1;
    for(ll i=0;i<arr1.size();i++){
        temp=temparr[temparr.size()-1];
        temparr.pop_back();
        arr2.push_back(temp);
    }
    ll count=0;
    while(arr1.size()>0 && arr2.size()>0){
        if(arr1[arr1.size()-1]==arr2[arr2.size()-1]){
            arr1.pop_back();
            arr2.pop_back();
        }
        else if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
            temp=(arr1[arr1.size()-1])-arr2[arr2.size()-1];
            arr1.pop_back();
            arr2.pop_back();
            arr1.push_back(temp);
            count++;
        }
        else if(arr1[arr1.size()-1]<arr2[arr2.size()-1]){
            temp= -(arr1[arr1.size()-1])+arr2[arr2.size()-1];
            arr1.pop_back();
            arr2.pop_back();
            arr2.push_back(temp);
            count++;
        }
    }
    cout<<count/2<<endl;


}
return 0;
}