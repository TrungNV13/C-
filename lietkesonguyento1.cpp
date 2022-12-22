#include<bits/stdc++.h>
using namespace std;
bool SNT(long long n){
    if(n<=1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    long long a,b;
    cin >> a>>b;
    if(a>b){
        long long c=b;
        b=a;
        a=c;
    }
    for(long long i=a;i<=b;i++){
        if(SNT(i)==true) cout<<i<<" ";
    }
}