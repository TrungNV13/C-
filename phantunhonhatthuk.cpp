#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[k-1]<<endl;
    }
}