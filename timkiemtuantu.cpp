#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,X,*a;
        cin>>n>>X;
        a=new int[n];
        int temp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==X){
                temp=i+1;
                break;
            }
        }
        if(temp>0) cout<<temp<<endl;
        else cout<<"-1"<<endl;
    }
}