#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,*a,*b;
        cin>>n;
        a=new ll[n];
        b=new ll[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) b[i]=0;
            else b[i]=1;
        }
        for(ll i=0;i<n;i++){
            if(b[i]==1) cout<<a[i]<<" ";
        }
        for(ll i=0;i<n;i++){
            if(b[i]==0) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}