#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin>>t;
    while(t--){
        long long n,d;
        cin>>n>>d;
        long long a[n];
        for(long long i=0;i<n;i++){
             cin>>a[i];
        }
        for(long long i=d;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(long long i=0;i<d;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}