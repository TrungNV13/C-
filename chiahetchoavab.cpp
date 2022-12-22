#include<bits/stdc++.h>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int m,n,a,b;
        std::cin>>m>>n>>a>>b;
        int LCM=a*b/std::__gcd(a,b);
        int n1=n/a+n/b-n/LCM;
        int n2=(m-1)/a+(m-1)/b-(m-1)/LCM;
        std::cout<<n1-n2<<std::endl;
    }
}