#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        long long *a,*b,n;
        cin>>n;
        a= new long long[n];
        b=new long long[n];
        for(long long  i=0;i<n;i++){
            cin>>a[i];
            b[i]=1;
        }
        int temp=0;
        for(long long i=0;i<n;i++){
            int check=1;
            if(b[i]==1){
                for(long long j=i+1;j<n;j++){
                    if(a[i]==a[j]) {
                        check++;
                        b[j]=0;
                    }
                }
                if(check>1) temp+=check;
            }
        }
        cout<<temp<<endl;
    }
}