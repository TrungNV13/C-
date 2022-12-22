#include<iostream>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        for(long long i=1;i<=n;i++){
            sum+=i%k;
        }
        if(sum==k) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}