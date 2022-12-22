#include<iostream>
#include<string>
#define ll long long
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string s;
        getline(std::cin,s);
        for(ll i=0;i<s.length()-1;i++){
            int count=0;
            for(ll j=i+1;j<s.length();j++){
                if(s[i] ==s[j]) {
                    count++;
                    s.erase(s.begin() +j );
                    j--;
                }
            }
            if(count>0) {
                s.erase(s.begin() +i );
                i--;
            }
        }
        std::cout<<s<<std::endl;
    }
}