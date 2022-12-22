#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        set<ll> s;
        ll m=0,l=0,k=0;
        ll n,*a;
        cin>>n;
        a= new ll[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 0) {
                s.insert(a[i]);
            }
            else{
                while(a[i]){
                    s.insert(a[i]%10);
                    a[i]/=10;
                }
            }
        }
        for(auto i:s){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}