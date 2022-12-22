#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==0 || n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int L,R;
        cin>>L>>R;
        int count=0;
        for(int i=L;i<=R;i++){
            if(prime(i)) count++;
        }
        cout<<count<<endl;
    }
}