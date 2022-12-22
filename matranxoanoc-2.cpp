#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        int h=0;
        ll a[n][m],b[n*m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        ll row=n,column=m,k=0,l=0,temp=0;
        while(temp<=n*m ){
            for(ll i=k;i<column;i++){
                 b[h++]=a[k][i];
                 temp++;
                  if(temp==n*m) break;
            }
            if(temp==n*m) break;
            for(ll i=k+1;i<row;i++){
                b[h++]=a[i][column-1];
                temp++;
                if(temp==n*m) break;
            }
            if(temp==n*m) break;
            for(ll i=column-2;i>=k;i--) {
                b[h++]=a[row-1][i];
                temp++;
                if(temp==n*m) break;
            }
            if(temp==n*m) break;
            for(ll i=row-2;i>k;i--) {
                b[h++]=a[i][k];
                temp++;
                if(temp==n*m) break;
            }
            if(temp==n*m) break;
            k++;l++;row--;column--;
        }
        for(int i=h-1;i>=0;i--) cout<<b[i]<<" ";
        cout<<endl; 
    }
}