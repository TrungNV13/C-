#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long temp;
        long long n;
        cin>>n;
        while(n%2==0){
            n/=2;
            temp=2;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
            temp=i;
            n/=i;
            }
        }
        if(n==1) cout<<temp<<endl;
        else cout<<n<<endl;
    }
}
