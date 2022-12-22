#include<bits/stdc++.h>
using namespace std;
#define modulo 1000000007
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[2000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long h=0;
        for(int i=0;i<n;i++){
            long long s=1;
            for(int j=n-i-1;j>0;j--){
                s=(s*x)%modulo;
            }
            h+=a[i]*s;
            if(h>modulo){
                h%=modulo;
            }
        }
        cout<<h<<endl;
    }
}