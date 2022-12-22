#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int dem2=0;
        while(n%2==0){
            dem2++;
            n/=2;
        }
        if(dem2>0) cout<<2<<" "<<dem2<<" ";
        for(long long i=3;i<=sqrt(n);i+=2){
            int dem=0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            if(dem>0) cout<<i<<" "<<dem<<" ";
        }
        if(n>1) cout<<n<<" "<<1<<endl;
        else cout<<endl;
    }
}