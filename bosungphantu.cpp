#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
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
        int dem=0;
        for(int i=n-1;i>0;i--){
            if(a[i]-a[i-1]>1) dem+=a[i]-a[i-1]-1;
        }
        cout<<dem<<endl;
    }
}