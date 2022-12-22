#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long c=__gcd(a,b);
        cout<<(a*b)/c<<" "<<c<<endl;
    }
}