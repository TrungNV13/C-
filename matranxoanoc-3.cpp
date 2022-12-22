#include<bits/stdc++.h>
#define ll long long
int main(){
    int t;
    std::cin>>t;
    while(t--){
        ll n,m,K;
        std::cin>>n>>m>>K;
        int check=0;
        ll a[n][m];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                std::cin>>a[i][j];
            }
        }
        ll row=n,column=m,k=0,l=0,temp=0;
        while(temp<=n*m ){
            for(ll i=k;i<column;i++){
                check++;
                if(check==K){
                    std::cout<<a[k][i]<<std::endl;
                    break;
                }
                temp++;
                if(temp==n*m) break;
            }
            if(check==K) break;
            if(temp==n*m) break;
            for(ll i=k+1;i<row;i++){
                check++;
                if(check==K){
                    std::cout<<a[i][column-1]<<std::endl;
                    break;
                }
                temp++;
                 if(temp==n*m) break;
            }
            if(check==K) break;
            if(temp==n*m) break;
            for(ll i=column-2;i>=k;i--) {
                check++;
                if(check==K){
                    std::cout<<a[row-1][i]<<std::endl;
                    break;
                }
                temp++;
                if(temp==n*m) break;
            }
            if(check==K) break;
            if(temp==n*m) break;
            for(ll i=row-2;i>k;i--) {
                check++;
                if(check==K){
                    std::cout<<a[i][k]<<std::endl;
                    break;
                }
                temp++;
                if(temp==n*m) break;
            }
            if(check==K) break;
            if(temp==n*m) break;
            k++;l++;row--;column--;
        }
    }
}