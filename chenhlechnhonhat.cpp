#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        long long n,*a;
        cin>>n;
        a=new long long[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int temp=0;
        for(long long i=1;i<n;i++){
            if(i==1) temp=a[i]-a[i-1];
            else{
                if(a[i]-a[i-1]<temp) temp = a[i]-a[i-1];
            }
        }
        cout<<temp<<endl;
    }
}