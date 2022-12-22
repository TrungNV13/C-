#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,temp=1,a[MAX]={};
        cin>>n>>k;
        while(n%2==0){
            n/=2;
            a[temp++]=2;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                 n/=i;
                 a[temp++]=i;
            }
        }
        if(n>1) a[temp++]=n;
        if(k>temp-1) cout<<"-1"<<endl;
        else cout<<a[k]<<endl;
    }
}
