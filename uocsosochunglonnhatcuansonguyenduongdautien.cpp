#include<bits/stdc++.h>
using namespace std;
long long BCNN(long long a,long long b){
    long long c=__gcd(a,b);
    return (a*b)/c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long check=0;
        long long n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        long long a[n]={};
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        for(int i=1;i<n;i++){
            a[i]=BCNN(a[i],a[i-1]);
            check=a[i];
        }
        cout<<check<<endl;
    }
}