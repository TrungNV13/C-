#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,*a;
        cin>>n>>k;
        a=new ll[n];
        int count=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == k) count++;
        }
        cout<<count<<endl;
    }
}