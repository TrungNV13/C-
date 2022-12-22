#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#define ll long long 
ll check(std::string &str){
    ll r=0;
    ll l=str.length();
    for(ll i=l-1;i>=0;i--){
        r=(r*2+(str[l-i-1]-'0'))%5;
    }
    return r;
}
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string str;
        getline(std::cin,str);
        ll n=check(str);
        if(n==0) std::cout<<"Yes"<<std::endl;
        else std::cout<<"No"<<std::endl;
    }
}
