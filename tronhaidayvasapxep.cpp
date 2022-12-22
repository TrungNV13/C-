#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char **argv){
    int t;
    cin>>t;
    while(t--){
        ll n,m,*a,*b,*c;
        cin>>n>>m;
        a = new ll[n];
        b = new ll[m];
        ll k=n+m;
        ll temp=0;
        c = new ll[k];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            c[temp++]=a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
            c[temp++]=b[i];
        }
        sort(c,c+k);
        for(ll i=0;i<temp;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}