#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,*a;
        cin>>n;
        a=new long long[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long temp=0;
        for(long long i=0;i<n-1;i++){
            for(long long j=i+1;j<n;j++){
                if(i==0 && j==1) temp=a[i]+a[j];
                else{
                    if(abs(a[i]+a[j])<abs(temp)){
                        temp=a[i]+a[j];
                    }
                }
            }
        }
        cout<<temp<<endl;
    }
}