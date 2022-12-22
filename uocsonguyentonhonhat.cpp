#include<bits/stdc++.h>
#define ll long long
bool prime(ll a){
    ll n=sqrt(a);
    if(a==0 || a==1) return false;
    else{
        for(ll i=2;i<=n;i++){
            if(a%i==0) return false;
        }
    }
    return true;
}
ll odd(ll a){
    for(ll i=2;i<=a;i++){
        if(prime (i) && a%i==0) {
            return i;
            break;
        }
    }
}
int main(){
    int t;
    std::cin>>t;
    while(t--){
        ll n;
        std::cin>>n;
        for(ll i=1;i<=n;i++){
            if(i==1) std::cout<<"1 ";
            else if(prime(i)) {
                std::cout<<i<<" ";
                continue;
            }
            else if(i%2==0) std::cout<<"2 ";
            else std::cout<<odd(i)<<" ";
        }
        std::cout<<std::endl;
    }
}