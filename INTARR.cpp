#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(vector<ll> arr){
    ll count=0;
    for(ll i=0;i<arr.size()-1;i++){
        if(arr[i]<=arr[i+1])count++;
        else count=0;
        if(count>=2)return false;
    }
    return true;
}
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> arr(n);
	    for(auto &i:arr)cin>>i;
	    sort(arr.begin(),arr.end());
	    vector<ll> p1,p2;
	    for(ll i=0;i<n;i++){
	        if(i<n/2){
	            p1.push_back(arr[i]);
	        }
	        else p2.push_back(arr[i]);
	    }
	    vector<ll> a1,a2;
	    for(ll i=0;i<p2.size();i++){
	        if(i==p1.size()){
	            a1.push_back(p2[i]);
	            break;
	        }
	        a1.push_back(min(p1[i],p2[i]));
	        a1.push_back(max(p1[i],p2[i]));
	    }
	    if(check(a1)){
	        for(ll i=0;i<n;i++){
	            cout<<a1[i]<<" ";
	        }
	        cout<<endl;
	        continue;
	    }
	    for(ll i=0;i<p2.size();i++){
	        if(i==p1.size()){
	            a2.push_back(p2[i]);
	            break;
	        }
	        a2.push_back(p2[i]);
	        a2.push_back(p1[i]);
	    }
	    if(check(a2)){
	        for(ll i=0;i<n;i++){
	            cout<<a2[i]<<" ";
	        }
	        cout<<endl;
	    }
	    else cout<<"-1"<<endl;
	    
	}
	return 0;
}
