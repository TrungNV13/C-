#include<bits/stdc++.h>
using namespace std;
void fibo(long long a[100]){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<100;i++){
        a[i]=a[i-1] + a[i-2];
    }
}
bool check(int n,long long a[] ){
    for(int i=0;i<100;i++){
        if(n==a[i]) {
            return true;
            break;
        }
        if(a[i]>n) {
            return false;
            break;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,*s;
        long long a[100];
        cin>>n;
        s=new long long[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        fibo(a);
        for(int i=0;i<n;i++){
            if(check(s[i],a)) cout<<s[i]<<" ";
        }
        cout<<endl;
    }
}