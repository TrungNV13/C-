#include<bits/stdc++.h>
using namespace std;
bool  check(long long n){
    if(n<=1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int count=0;
        for(long long i=0;i<=sqrt(n);i++){
            if(check(i)==true && i*i<=n) count++;
        }
        cout<<count<<endl;
    }
}