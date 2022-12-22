#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,*a,*b;
        cin>>n;
        a=new long long[n];
        b=new long long[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            if(i==0) b[i]=a[i] * a[i+1];
            else if(i==n-1) b[i]=a[i] * a[i-1];
            else b[i]=a[i-1] * a[i+1];
        }
        for(long long i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}