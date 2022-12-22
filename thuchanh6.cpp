#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,*a,*b;
    cin>>t;
    ll k=t;
    a=new ll[t];
    b=new ll[t];
    ll x=0,z=0;
    ll count=0;
    while(t--){
        ll n,m;
        cin>>n>>m;
        a[x++]=n;
        b[z++]=m;
    }
    for(ll i=0;i<x;i++){
        for(ll j=i+1;j<x;j++){
            if(a[i]>a[j]) {
                ll temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                ll teck=b[i];
                b[i]=b[j];
                b[j]=teck;
            }
        }
    }
    for(ll i=0;i<x;i++){
        if(i==0) count=a[i]+b[i];
        else{
            if(a[i]>=count){
                count=a[i]+b[i];
            }
            else{
                count +=b[i];
            }
        }
    }
    cout<<count;
}