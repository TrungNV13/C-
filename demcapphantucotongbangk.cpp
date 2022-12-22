#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        int n,k,*a;
        cin>>n>>k;
        a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dem=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==k) dem++;
            }
        }
        cout<<dem<<endl;
    }
}