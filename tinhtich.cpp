#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        ll n,m,*a,*b;
        cin>>n>>m;
        a=new ll[n];
        b=new ll[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        cout<<a[n-1]*b[0]<<endl;
    }
}