#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool  check(ll n){
    if(n<=1) return false;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll count=0;
        for(ll i=0;i<=sqrt(r);i++){
            if(check(i) && i*i<=r && i*i>=l) count++;
        }
        cout<<count<<endl;
    }
}