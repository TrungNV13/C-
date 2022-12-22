#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,*b;
        cin>>n>>k;
        int a[n][n];
        b=new int[n*n];
        int temp=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                b[temp++]=a[i][j];
            }
        }
        sort(b,b+n*n);
        cout<<b[k-1]<<endl;
    }
}