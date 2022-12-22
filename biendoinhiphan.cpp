#include <bits/stdc++.h>
using namespace std;
#define max 100
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a[max][max],b[max]={},c[max]={};
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    b[i]=1;
                    c[j]=1;
                }
            }
        } 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]==1 || c[j]==1) cout<<"1"<<" ";
                else cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}