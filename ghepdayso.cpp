#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char **argv){
    int t;
    cin>>t;
    while(t--){
        ll k,n,*a,*b;
        cin>>k>>n;
        a= new ll[n];
        b= new ll[n*k];
        ll q=n*k;
        ll temp=0;
        while(k--){
            for(ll i=0;i<n;i++){
                cin>>a[i];
                b[temp++]=a[i];
            }
        }
        sort(b,b+q);
        for(ll i=0;i<temp;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}