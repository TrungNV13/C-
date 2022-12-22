#include<bits/stdc++.h>
using namespace std;
void fibo(long long a[100]){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<100;i++){
        a[i]=a[i-1] + a[i-2];
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long a[100];
        cin>>n;
        fibo(a);
        for(long long i=0;i<100;i++){
            if(a[i]==n){
                cout<<"YES"<<endl;
                break;
            }
            else if(a[i]>n) {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
}