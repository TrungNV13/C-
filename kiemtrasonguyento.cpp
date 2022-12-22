#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    if(n<=1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(int argc, char **argv){
    long long n;
    cin>>n;
    if(check(n)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}