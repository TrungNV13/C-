#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    if(n==0) return true;
    while(n>0){
        if(n%10!=0 && n%10!=8 && n%10!=6) return false;
        n/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(check(n)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}