#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime(ll n){
    if(n<2 ) return false;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
bool tang(ll n){
    ll temp=n%10;
    n/=10;
    while(n){
        ll check=n%10;
        if( check>=temp) return false;
        temp=check;
        n/=10;
    }
    return true;
}
bool giam(ll n){
    ll temp=n%10;
    n/=10;
    while(n){
        ll check=n%10;
        if( check<=temp) return false;
        temp=check;
        n/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,count=0;
        cin>>n;
        ll l=pow(10,n-1), r=pow(10,n);
        for(ll i=l;i<r;i++){
            if(( tang(i) || giam(i)) ){
                if(prime(i)) count++;
            }
        }
        cout<<count<<endl; 
    }
}
