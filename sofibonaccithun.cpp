#include<bits/stdc++.h>
using namespace std;
#define max 100
void fibo(long long n,long long a[max]){
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1] + a[i-2];
    }
    cout<< a[n]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a[max] ;
        cin>>n;
        fibo(n,a);
    }
}