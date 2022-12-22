#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
void SNT(long long n,long long a[MAX]){
    for(long long i=0;i<n;i++){
        if(i<=1){
            a[i]=1;
            continue;
        }
        else{
            for(long long j=i*2;j<n;j+=i){
                a[j]=1;
            }
        }
    }  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a[MAX]={};
        cin>>n;
        SNT(n,a);
        int dem=0;
        for(long long i=0;i<n;i++){
            if(a[i]!=1){
                for(long long j=n-1;j>=0;j--){
                    if(a[j]!=1){
                        if(i+j==n){
                            ++dem;
                            cout<<i<<" "<<j<<endl;
                            break;
                        }
                    }
                }
                if(dem==1) break;
            }    
        }
    }
}