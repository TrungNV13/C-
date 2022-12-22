#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,*a,*b;
        cin>>n;
        a= new ll[n];
        b= new ll[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
            b[i]=-1;
        }
        for( ll i=0;i<n;i++){ 
            for( ll j=0;j<n;j++){
                if(i==a[j]) b[i]=i;
            }  
        }
        for(ll i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}