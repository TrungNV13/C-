#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,*a,k;
        cin>>n>>k;
        a=new ll[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count =0;
        for(ll i=n-1;i>=0;i--){
            cout<<a[i]<<" ";
            count++;
            if(count==k) break;
        }
        cout<<endl;
    }
}