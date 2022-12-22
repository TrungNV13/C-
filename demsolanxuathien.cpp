#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,*a;
        cin>>n>>x;
        a = new int[n];
        int temp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==x) temp++;
        }
        if(temp==0) cout<<"-1"<<endl;
        else cout<<temp<<endl;
    }
}