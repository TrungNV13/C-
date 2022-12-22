#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool chia2(ll n){
    if(n%2==0) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll l=sqrt(n);
        ll count=0;
        for(ll i=1;i<=l;i++){
            if( n%i==0 ){
                if(chia2(i)) count++;
                if(n/i!=i && chia2(n/i) ){
                     count++;
                }     
            }
        }
        cout<<count<<endl;
    }
}