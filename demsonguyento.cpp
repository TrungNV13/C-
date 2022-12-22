#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    int l=sqrt(n);
    if(n==0 || n==1) return false;
    else{
        for(int i=2;i<=l;i++){
            if(n%i==0) return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,*a;
        cin>>l>>r;
        a=new int[r];
        int count=0;
        for(int i=l;i<=r;i++){
            if(prime(i)) count++;
        }
        cout<<count<<endl;
    }
}