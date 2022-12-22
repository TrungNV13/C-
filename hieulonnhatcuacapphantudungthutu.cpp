#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,*a;
        cin>>n;
        a=new ll[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll temp=-1;
        for(ll i=1;i<n;i++){
            for(ll j=i-1;j>=0;j--){
                if(a[i]>a[j] && a[i]-a[j]>temp){
                    temp=a[i]-a[j];
                }
            }
        }
        if(temp==0) cout<<"-1"<<endl;
        else cout<<temp<<endl;
    }
}