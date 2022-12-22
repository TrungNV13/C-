#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime(ll n){
    if(n==0 || n==1) return false;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,count=0;
        cin>>n;
        for(ll i=1;i<=n;i++){
            if(__gcd(i,n)==1) count++;
        }
        if(prime(count)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}