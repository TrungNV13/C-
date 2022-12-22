#include<bits/stdc++.h>
using namespace std; 
int main() { 
    int t; 
    cin>>t; 
    while(t--){ 
        string n; 
        long long m; 
        cin>>n>>m; 
        int l=n.size(); 
        long long k=0; 
        for(int i=0;i<l;i++){ 
            k=(k*10+(n[i]-'0'))%m; 
        } 
        cout<<k<<endl;
    } 
}