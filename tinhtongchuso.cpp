#include<bits/stdc++.h>
using namespace std;
long long tach(long long n){
    long long tmp=0;
    while(n>0){
        tmp+=n%10;
        n/=10;   
    }
    return tmp;
}
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(n>9){
            n=tach(n);
        }
        cout<<n<<endl;
    }
}