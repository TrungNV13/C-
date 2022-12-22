#include<bits/stdc++.h>
#define ll long long
ll LCM(ll a,ll b){
    return a*b/std::__gcd(a,b);
}
int main(){
    int t;
    std::cin>>t;
    while(t--){
        ll x,y,z,n;
        std::cin>>x>>y>>z>>n;
        ll temp=LCM(x,LCM(y,z));
        ll first=pow(10,n-1),  final=pow(10,n)-1;
        ll a=first/temp,  b=final/ temp;
        if(b<1) std::cout<<"-1"<<std::endl;
        else{
            if(a*temp <first ) {
                a++;
                std::cout<<a*temp<<std::endl;
            }
            else std::cout<<a*temp<<std::endl;
        }
    }
}