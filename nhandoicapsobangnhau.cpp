#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char **argv){
    int t;
    cin>>t;
    while(t--){
        ll n,*a;
        cin>>n;
        a=new ll[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n-1;i++){
            if( a[i]!=0 && a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
                i++;
            }
        }
        for(ll i=0; i<n; i++){
            if(a[i]!=0 ) cout<<a[i]<<" ";
        }
        for(ll i=0; i<n; i++){
            if(a[i]==0 ) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}