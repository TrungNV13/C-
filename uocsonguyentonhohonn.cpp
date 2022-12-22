#include <bits/stdc++.h>
#define MAX 10000
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a[MAX]={};
        cin>>n;
        for(long long i=0;i<=n;i++){
            if(a[i]==0){
            if(i<=1){
                a[i]=1;
                continue;
            }
            else{
                for(long long j=i*2;j<=n;j+=i){
                    a[j]=1;
                }
            }
            }
        }  
        for(long long i=0;i<=n;i++){
            if(a[i]!=1){
                cout<<i<<" ";
            }
        }
        cout<<endl; 
    }
}
