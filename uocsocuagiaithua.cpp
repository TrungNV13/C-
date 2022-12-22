#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int i=1,count=0;;
        while(p*i<=n){
            int temp=p*i;
            while(temp%p==0){
                temp/=p;
                count++;
            }
            i++;
        }
        cout<<count<<endl;
    }
}