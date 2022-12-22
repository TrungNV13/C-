#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,*a;
        cin>>n;
        a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-1;i>=n/2;i--){
            cout<<a[i]<<" ";
            if(n-i-1!=i) cout<<a[n-i-1]<<" ";
        }
        cout<<endl;
    }
}