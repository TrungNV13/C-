#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,*a,*b,*c;
    cin>>n>>m;
    b=new int[n];
    c=new int[n];
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[i]=1;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i];
        
    }
}
