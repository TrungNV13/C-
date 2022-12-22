#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        long long *a,n;
        cin>>n;
        a=new long long[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        int temp=0;
        for(long long i=0;i<n;i++){
            if(a[i]==temp+1) temp=a[i];
        }
        cout<<temp+1<<endl;
    }
}